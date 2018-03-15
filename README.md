# VARClay-Client

## Introduction


## Usage

### Requirements
- Unity3D Version 2017.1.0f3
- Xcoce 
- iPhone 8 Plus


### Unity Assets
- [Photon Unity Networking Free](https://assetstore.unity.com/packages/tools/network/photon-unity-networking-free-1786)
- [Unity ARKit Plugin](https://assetstore.unity.com/packages/essentials/tutorial-projects/unity-arkit-plugin-92515)
- [VRTK](https://assetstore.unity.com/packages/tools/vrtk-virtual-reality-toolkit-vr-toolkit-64131)
- [Log Viewer](https://assetstore.unity.com/packages/tools/log-viewer-12047)


### Installation
- Import `Photon Unity Networking`, set up AppID, and set up Region to 'US' in `Assets/Photon Unity Networking/Resources/PhotonServerSettings`.
- Import `Unity ARKit Plugin`
- Import `VRTK`
- Import `Log Viewer`. This asset is for debugging on mobile device only.
  - Create reporter from menu (Reporter->Create) at first scene game start.
  - Set the ” Scrip execution order ” in (Edit -> Project Settings ) of Reporter.cs to be the highest.
