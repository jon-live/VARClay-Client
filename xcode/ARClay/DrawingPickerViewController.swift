//
//  DrawingPickerViewController.swift
//  ARClay
//
//  Created by Leon Lee on 4/3/18.
//  Copyright © 2018 Leon Lee. All rights reserved.
//

import UIKit

class DrawingPickerViewController: UIViewController, UICollectionViewDelegate, UICollectionViewDataSource {

    var currentDrawingModel: String!
    var currentDrawingColor: String!
    
    @IBOutlet weak var collectionView: UICollectionView!
    
    @IBOutlet weak var redLabel: UILabel!
    @IBOutlet weak var greenLabel: UILabel!
    @IBOutlet weak var blueLabel: UILabel!
    @IBOutlet weak var redSlider: UISlider!
    @IBOutlet weak var greenSlider: UISlider!
    @IBOutlet weak var blueSlider: UISlider!
    @IBOutlet weak var displayLabel: UILabel!
    
    var redColor : Float = 0
    var greenColor : Float = 0
    var blueColor : Float = 0
    
    let drawingModels = ["Cube", "Sphere", "Tree", "XXX1", "XXX2", "XXX3" ]
    let drawingImages: [UIImage] = [
        UIImage(named: "cube")!,
        UIImage(named: "sphere")!,
        UIImage(named: "tree")!,
        UIImage(named: "xxx1")!,
        UIImage(named: "xxx2")!,
        UIImage(named: "xxx3")!,
    ]
    
    override func viewDidLoad() {
        super.viewDidLoad()
        // Init currentDrawingModel with default value "cube"
        currentDrawingModel = "cube"
        // Init currentDrawingColor with default value "white"
        currentDrawingColor = "255-255-255"
        collectionView.dataSource = self
        collectionView.delegate = self
        var layout = self.collectionView.collectionViewLayout as! UICollectionViewFlowLayout
        layout.sectionInset = UIEdgeInsetsMake(0, 10, 0, 10)
        layout.minimumInteritemSpacing = 5
        layout.itemSize = CGSize(width: (self.collectionView.frame.size.width - 30)/2, height: self.collectionView.frame.size.height/2)

        // Do any additional setup after loading the view.
    }

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }

    func collectionView(_ collectionView: UICollectionView, numberOfItemsInSection section: Int) -> Int {
        return drawingModels.count
    }
    
    func collectionView(_ collectionView: UICollectionView, cellForItemAt indexPath: IndexPath) -> UICollectionViewCell {
        let cell = collectionView.dequeueReusableCell(withReuseIdentifier: "Cell", for: indexPath) as! CollectionViewCell
        cell.drawingImageName.text = drawingModels[indexPath.item]
        cell.drawingImageView.image = drawingImages[indexPath.item]
        cell.layer.borderColor = UIColor.lightGray.cgColor
        cell.layer.borderWidth = 0.5
        return cell
    }

    func collectionView(_ collectionView: UICollectionView, didSelectItemAt indexPath: IndexPath) {
        let cell = collectionView.cellForItem(at: indexPath)
        cell?.layer.borderColor = UIColor.gray.cgColor
        cell?.layer.borderWidth = 2
        currentDrawingModel = drawingModels[indexPath.row]
    }
    
    func collectionView(_ collectionView: UICollectionView, didDeselectItemAt indexPath: IndexPath) {
        let cell = collectionView.cellForItem(at: indexPath)
        cell?.layer.borderColor = UIColor.lightGray.cgColor
        cell?.layer.borderWidth = 0.5
    }
    
    override func prepare(for segue: UIStoryboardSegue, sender: Any?) {
    }
    
    @IBAction func redSliderAction(_ sender: UISlider) {
        changeColors()
    }
    
    @IBAction func greenSliderAction(_ sender: UISlider) {
        changeColors()
    }
    
    @IBAction func blueSliderAction(_ sender: UISlider) {
        changeColors()
    }
    
    func changeDisplayLabelColor() {
        displayLabel.backgroundColor = UIColor(red: CGFloat(redColor), green: CGFloat(greenColor), blue: CGFloat(blueColor), alpha: 1.0)
        changeLabelNumbers()
    }
    
    func changeColors() {
        redColor = redSlider.value
        greenColor = greenSlider.value
        blueColor = blueSlider.value
        currentDrawingColor = String(Int(redColor * 255)) + "-" +  String(Int(greenColor * 255)) + "-" + String(Int(blueColor * 255))
        changeDisplayLabelColor()
    }
    
    func changeLabelNumbers() {
        var roundedRed = String(format: "%0.0f", redColor * 255)
        var roundedGreen = String(format: "%0.0f", greenColor * 255)
        var roundedBlue = String(format: "%0.0f", blueColor * 255)
        
        redLabel.text = "Red: \(roundedRed)"
        greenLabel.text = "Green: \(roundedGreen)"
        blueLabel.text = "Blue: \(roundedBlue)"
    }
}
