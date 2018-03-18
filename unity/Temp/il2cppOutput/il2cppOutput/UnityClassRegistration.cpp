template <typename T> void RegisterClass();
template <typename T> void RegisterStrippedTypeInfo(int, const char*, const char*);

void InvokeRegisterStaticallyLinkedModuleClasses()
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_Animation();
	RegisterModule_Animation();

	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_CloudWebServices();
	RegisterModule_CloudWebServices();

	void RegisterModule_ParticleSystem();
	RegisterModule_ParticleSystem();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_Physics2D();
	RegisterModule_Physics2D();

	void RegisterModule_Terrain();
	RegisterModule_Terrain();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_UI();
	RegisterModule_UI();

	void RegisterModule_UnityConnect();
	RegisterModule_UnityConnect();

	void RegisterModule_AI();
	RegisterModule_AI();

	void RegisterModule_IMGUI();
	RegisterModule_IMGUI();

	void RegisterModule_UnityWebRequest();
	RegisterModule_UnityWebRequest();

	void RegisterModule_GameCenter();
	RegisterModule_GameCenter();

	void RegisterModule_VR();
	RegisterModule_VR();

	void RegisterModule_JSONSerialize();
	RegisterModule_JSONSerialize();

	void RegisterModule_ImageConversion();
	RegisterModule_ImageConversion();

	void RegisterModule_Input();
	RegisterModule_Input();

}

class EditorExtension; template <> void RegisterClass<EditorExtension>();
namespace Unity { class Component; } template <> void RegisterClass<Unity::Component>();
class Behaviour; template <> void RegisterClass<Behaviour>();
class Animation; template <> void RegisterClass<Animation>();
class Animator; template <> void RegisterClass<Animator>();
class AudioBehaviour; template <> void RegisterClass<AudioBehaviour>();
class AudioListener; template <> void RegisterClass<AudioListener>();
class AudioSource; template <> void RegisterClass<AudioSource>();
class AudioFilter; 
class AudioChorusFilter; 
class AudioDistortionFilter; 
class AudioEchoFilter; 
class AudioHighPassFilter; 
class AudioLowPassFilter; 
class AudioReverbFilter; 
class AudioReverbZone; 
class Camera; template <> void RegisterClass<Camera>();
namespace UI { class Canvas; } template <> void RegisterClass<UI::Canvas>();
namespace UI { class CanvasGroup; } template <> void RegisterClass<UI::CanvasGroup>();
namespace Unity { class Cloth; } 
class Collider2D; template <> void RegisterClass<Collider2D>();
class BoxCollider2D; template <> void RegisterClass<BoxCollider2D>();
class CapsuleCollider2D; 
class CircleCollider2D; 
class CompositeCollider2D; 
class EdgeCollider2D; 
class PolygonCollider2D; 
class ConstantForce; template <> void RegisterClass<ConstantForce>();
class Effector2D; 
class AreaEffector2D; 
class BuoyancyEffector2D; 
class PlatformEffector2D; 
class PointEffector2D; 
class SurfaceEffector2D; 
class FlareLayer; template <> void RegisterClass<FlareLayer>();
class GUIElement; template <> void RegisterClass<GUIElement>();
namespace TextRenderingPrivate { class GUIText; } template <> void RegisterClass<TextRenderingPrivate::GUIText>();
class GUITexture; 
class GUILayer; template <> void RegisterClass<GUILayer>();
class Halo; 
class HaloLayer; 
class Joint2D; 
class AnchoredJoint2D; 
class DistanceJoint2D; 
class FixedJoint2D; 
class FrictionJoint2D; 
class HingeJoint2D; 
class SliderJoint2D; 
class SpringJoint2D; 
class WheelJoint2D; 
class RelativeJoint2D; 
class TargetJoint2D; 
class LensFlare; 
class Light; template <> void RegisterClass<Light>();
class LightProbeGroup; 
class LightProbeProxyVolume; 
class MonoBehaviour; template <> void RegisterClass<MonoBehaviour>();
class NavMeshAgent; 
class NavMeshObstacle; 
class NetworkView; template <> void RegisterClass<NetworkView>();
class OffMeshLink; 
class PhysicsUpdateBehaviour2D; 
class ConstantForce2D; 
class PlayableDirector; 
class Projector; 
class ReflectionProbe; 
class Skybox; 
class SortingGroup; 
class Terrain; template <> void RegisterClass<Terrain>();
class VideoPlayer; 
class WindZone; 
namespace UI { class CanvasRenderer; } template <> void RegisterClass<UI::CanvasRenderer>();
class Collider; template <> void RegisterClass<Collider>();
class BoxCollider; template <> void RegisterClass<BoxCollider>();
class CapsuleCollider; template <> void RegisterClass<CapsuleCollider>();
class CharacterController; template <> void RegisterClass<CharacterController>();
class MeshCollider; template <> void RegisterClass<MeshCollider>();
class SphereCollider; template <> void RegisterClass<SphereCollider>();
class TerrainCollider; 
class WheelCollider; 
namespace Unity { class Joint; } template <> void RegisterClass<Unity::Joint>();
namespace Unity { class CharacterJoint; } 
namespace Unity { class ConfigurableJoint; } template <> void RegisterClass<Unity::ConfigurableJoint>();
namespace Unity { class FixedJoint; } template <> void RegisterClass<Unity::FixedJoint>();
namespace Unity { class HingeJoint; } template <> void RegisterClass<Unity::HingeJoint>();
namespace Unity { class SpringJoint; } template <> void RegisterClass<Unity::SpringJoint>();
class LODGroup; 
class MeshFilter; template <> void RegisterClass<MeshFilter>();
class OcclusionArea; 
class OcclusionPortal; 
class ParticleAnimator; 
class ParticleEmitter; 
class EllipsoidParticleEmitter; 
class MeshParticleEmitter; 
class ParticleSystem; template <> void RegisterClass<ParticleSystem>();
class Renderer; template <> void RegisterClass<Renderer>();
class BillboardRenderer; 
class LineRenderer; template <> void RegisterClass<LineRenderer>();
class MeshRenderer; template <> void RegisterClass<MeshRenderer>();
class ParticleRenderer; 
class ParticleSystemRenderer; 
class SkinnedMeshRenderer; template <> void RegisterClass<SkinnedMeshRenderer>();
class SpriteMask; 
class SpriteRenderer; template <> void RegisterClass<SpriteRenderer>();
class TrailRenderer; 
class Rigidbody; template <> void RegisterClass<Rigidbody>();
class Rigidbody2D; template <> void RegisterClass<Rigidbody2D>();
namespace TextRenderingPrivate { class TextMesh; } template <> void RegisterClass<TextRenderingPrivate::TextMesh>();
class Transform; template <> void RegisterClass<Transform>();
namespace UI { class RectTransform; } template <> void RegisterClass<UI::RectTransform>();
class Tree; 
class WorldAnchor; 
class WorldParticleCollider; 
class GameObject; template <> void RegisterClass<GameObject>();
class NamedObject; template <> void RegisterClass<NamedObject>();
class AssetBundle; 
class AssetBundleManifest; 
class ScriptedImporter; 
class StyleSheetImporter; 
class AudioMixer; 
class AudioMixerController; 
class AudioMixerGroup; 
class AudioMixerGroupController; 
class AudioMixerSnapshot; 
class AudioMixerSnapshotController; 
class Avatar; template <> void RegisterClass<Avatar>();
class AvatarMask; 
class BillboardAsset; 
class ComputeShader; 
class Flare; 
namespace TextRendering { class Font; } template <> void RegisterClass<TextRendering::Font>();
class GameObjectRecorder; 
class LightProbes; template <> void RegisterClass<LightProbes>();
class Material; template <> void RegisterClass<Material>();
class ProceduralMaterial; 
class Mesh; template <> void RegisterClass<Mesh>();
class Motion; template <> void RegisterClass<Motion>();
class AnimationClip; template <> void RegisterClass<AnimationClip>();
class PreviewAnimationClip; 
class NavMeshData; 
class OcclusionCullingData; 
class PhysicMaterial; 
class PhysicsMaterial2D; template <> void RegisterClass<PhysicsMaterial2D>();
class PreloadData; template <> void RegisterClass<PreloadData>();
class RuntimeAnimatorController; template <> void RegisterClass<RuntimeAnimatorController>();
class AnimatorController; template <> void RegisterClass<AnimatorController>();
class AnimatorOverrideController; 
class SampleClip; template <> void RegisterClass<SampleClip>();
class AudioClip; template <> void RegisterClass<AudioClip>();
class Shader; template <> void RegisterClass<Shader>();
class ShaderVariantCollection; 
class SpeedTreeWindAsset; 
class Sprite; template <> void RegisterClass<Sprite>();
class SpriteAtlas; 
class SubstanceArchive; 
class TerrainData; template <> void RegisterClass<TerrainData>();
class TextAsset; template <> void RegisterClass<TextAsset>();
class CGProgram; 
class MonoScript; template <> void RegisterClass<MonoScript>();
class Texture; template <> void RegisterClass<Texture>();
class BaseVideoTexture; 
class MovieTexture; 
class WebCamTexture; 
class CubemapArray; 
class LowerResBlitTexture; template <> void RegisterClass<LowerResBlitTexture>();
class ProceduralTexture; 
class RenderTexture; template <> void RegisterClass<RenderTexture>();
class CustomRenderTexture; 
class SparseTexture; 
class Texture2D; template <> void RegisterClass<Texture2D>();
class Cubemap; template <> void RegisterClass<Cubemap>();
class Texture2DArray; template <> void RegisterClass<Texture2DArray>();
class Texture3D; template <> void RegisterClass<Texture3D>();
class VideoClip; 
class GameManager; template <> void RegisterClass<GameManager>();
class GlobalGameManager; template <> void RegisterClass<GlobalGameManager>();
class AudioManager; template <> void RegisterClass<AudioManager>();
class BuildSettings; template <> void RegisterClass<BuildSettings>();
class CloudWebServicesManager; template <> void RegisterClass<CloudWebServicesManager>();
class CrashReportManager; 
class DelayedCallManager; template <> void RegisterClass<DelayedCallManager>();
class GraphicsSettings; template <> void RegisterClass<GraphicsSettings>();
class InputManager; template <> void RegisterClass<InputManager>();
class MasterServerInterface; template <> void RegisterClass<MasterServerInterface>();
class MonoManager; template <> void RegisterClass<MonoManager>();
class NavMeshProjectSettings; template <> void RegisterClass<NavMeshProjectSettings>();
class NetworkManager; template <> void RegisterClass<NetworkManager>();
class PerformanceReportingManager; 
class Physics2DSettings; template <> void RegisterClass<Physics2DSettings>();
class PhysicsManager; template <> void RegisterClass<PhysicsManager>();
class PlayerSettings; template <> void RegisterClass<PlayerSettings>();
class QualitySettings; template <> void RegisterClass<QualitySettings>();
class ResourceManager; template <> void RegisterClass<ResourceManager>();
class RuntimeInitializeOnLoadManager; template <> void RegisterClass<RuntimeInitializeOnLoadManager>();
class ScriptMapper; template <> void RegisterClass<ScriptMapper>();
class TagManager; template <> void RegisterClass<TagManager>();
class TimeManager; template <> void RegisterClass<TimeManager>();
class UnityAnalyticsManager; 
class UnityConnectSettings; template <> void RegisterClass<UnityConnectSettings>();
class LevelGameManager; template <> void RegisterClass<LevelGameManager>();
class LightmapSettings; template <> void RegisterClass<LightmapSettings>();
class NavMeshSettings; template <> void RegisterClass<NavMeshSettings>();
class OcclusionCullingSettings; 
class RenderSettings; template <> void RegisterClass<RenderSettings>();
class NScreenBridge; 

void RegisterAllClasses()
{
void RegisterBuiltinTypes();
RegisterBuiltinTypes();
	//Total: 99 non stripped classes
	//0. Behaviour
	RegisterClass<Behaviour>();
	//1. Unity::Component
	RegisterClass<Unity::Component>();
	//2. EditorExtension
	RegisterClass<EditorExtension>();
	//3. Camera
	RegisterClass<Camera>();
	//4. GameObject
	RegisterClass<GameObject>();
	//5. RenderSettings
	RegisterClass<RenderSettings>();
	//6. LevelGameManager
	RegisterClass<LevelGameManager>();
	//7. GameManager
	RegisterClass<GameManager>();
	//8. QualitySettings
	RegisterClass<QualitySettings>();
	//9. GlobalGameManager
	RegisterClass<GlobalGameManager>();
	//10. MeshFilter
	RegisterClass<MeshFilter>();
	//11. SkinnedMeshRenderer
	RegisterClass<SkinnedMeshRenderer>();
	//12. Renderer
	RegisterClass<Renderer>();
	//13. LineRenderer
	RegisterClass<LineRenderer>();
	//14. LightProbes
	RegisterClass<LightProbes>();
	//15. NamedObject
	RegisterClass<NamedObject>();
	//16. LightmapSettings
	RegisterClass<LightmapSettings>();
	//17. GUILayer
	RegisterClass<GUILayer>();
	//18. Light
	RegisterClass<Light>();
	//19. Mesh
	RegisterClass<Mesh>();
	//20. MonoBehaviour
	RegisterClass<MonoBehaviour>();
	//21. NetworkView
	RegisterClass<NetworkView>();
	//22. Shader
	RegisterClass<Shader>();
	//23. Material
	RegisterClass<Material>();
	//24. Sprite
	RegisterClass<Sprite>();
	//25. Texture
	RegisterClass<Texture>();
	//26. Texture2D
	RegisterClass<Texture2D>();
	//27. RenderTexture
	RegisterClass<RenderTexture>();
	//28. Transform
	RegisterClass<Transform>();
	//29. UI::RectTransform
	RegisterClass<UI::RectTransform>();
	//30. ParticleSystem
	RegisterClass<ParticleSystem>();
	//31. Rigidbody
	RegisterClass<Rigidbody>();
	//32. Unity::Joint
	RegisterClass<Unity::Joint>();
	//33. Unity::HingeJoint
	RegisterClass<Unity::HingeJoint>();
	//34. Unity::SpringJoint
	RegisterClass<Unity::SpringJoint>();
	//35. Unity::ConfigurableJoint
	RegisterClass<Unity::ConfigurableJoint>();
	//36. ConstantForce
	RegisterClass<ConstantForce>();
	//37. Collider
	RegisterClass<Collider>();
	//38. BoxCollider
	RegisterClass<BoxCollider>();
	//39. SphereCollider
	RegisterClass<SphereCollider>();
	//40. MeshCollider
	RegisterClass<MeshCollider>();
	//41. CapsuleCollider
	RegisterClass<CapsuleCollider>();
	//42. CharacterController
	RegisterClass<CharacterController>();
	//43. Rigidbody2D
	RegisterClass<Rigidbody2D>();
	//44. AudioClip
	RegisterClass<AudioClip>();
	//45. SampleClip
	RegisterClass<SampleClip>();
	//46. AudioSource
	RegisterClass<AudioSource>();
	//47. AudioBehaviour
	RegisterClass<AudioBehaviour>();
	//48. Animation
	RegisterClass<Animation>();
	//49. Animator
	RegisterClass<Animator>();
	//50. TerrainData
	RegisterClass<TerrainData>();
	//51. Terrain
	RegisterClass<Terrain>();
	//52. TextRenderingPrivate::GUIText
	RegisterClass<TextRenderingPrivate::GUIText>();
	//53. GUIElement
	RegisterClass<GUIElement>();
	//54. TextRenderingPrivate::TextMesh
	RegisterClass<TextRenderingPrivate::TextMesh>();
	//55. TextRendering::Font
	RegisterClass<TextRendering::Font>();
	//56. UI::Canvas
	RegisterClass<UI::Canvas>();
	//57. UI::CanvasGroup
	RegisterClass<UI::CanvasGroup>();
	//58. UI::CanvasRenderer
	RegisterClass<UI::CanvasRenderer>();
	//59. AnimationClip
	RegisterClass<AnimationClip>();
	//60. Motion
	RegisterClass<Motion>();
	//61. Unity::FixedJoint
	RegisterClass<Unity::FixedJoint>();
	//62. Collider2D
	RegisterClass<Collider2D>();
	//63. MeshRenderer
	RegisterClass<MeshRenderer>();
	//64. SpriteRenderer
	RegisterClass<SpriteRenderer>();
	//65. PreloadData
	RegisterClass<PreloadData>();
	//66. Cubemap
	RegisterClass<Cubemap>();
	//67. Texture3D
	RegisterClass<Texture3D>();
	//68. Texture2DArray
	RegisterClass<Texture2DArray>();
	//69. LowerResBlitTexture
	RegisterClass<LowerResBlitTexture>();
	//70. MonoScript
	RegisterClass<MonoScript>();
	//71. TextAsset
	RegisterClass<TextAsset>();
	//72. NetworkManager
	RegisterClass<NetworkManager>();
	//73. AudioManager
	RegisterClass<AudioManager>();
	//74. PhysicsManager
	RegisterClass<PhysicsManager>();
	//75. PlayerSettings
	RegisterClass<PlayerSettings>();
	//76. NavMeshSettings
	RegisterClass<NavMeshSettings>();
	//77. BuildSettings
	RegisterClass<BuildSettings>();
	//78. InputManager
	RegisterClass<InputManager>();
	//79. RuntimeInitializeOnLoadManager
	RegisterClass<RuntimeInitializeOnLoadManager>();
	//80. TimeManager
	RegisterClass<TimeManager>();
	//81. TagManager
	RegisterClass<TagManager>();
	//82. GraphicsSettings
	RegisterClass<GraphicsSettings>();
	//83. CloudWebServicesManager
	RegisterClass<CloudWebServicesManager>();
	//84. DelayedCallManager
	RegisterClass<DelayedCallManager>();
	//85. ResourceManager
	RegisterClass<ResourceManager>();
	//86. MonoManager
	RegisterClass<MonoManager>();
	//87. MasterServerInterface
	RegisterClass<MasterServerInterface>();
	//88. Physics2DSettings
	RegisterClass<Physics2DSettings>();
	//89. ScriptMapper
	RegisterClass<ScriptMapper>();
	//90. UnityConnectSettings
	RegisterClass<UnityConnectSettings>();
	//91. PhysicsMaterial2D
	RegisterClass<PhysicsMaterial2D>();
	//92. BoxCollider2D
	RegisterClass<BoxCollider2D>();
	//93. AnimatorController
	RegisterClass<AnimatorController>();
	//94. RuntimeAnimatorController
	RegisterClass<RuntimeAnimatorController>();
	//95. Avatar
	RegisterClass<Avatar>();
	//96. AudioListener
	RegisterClass<AudioListener>();
	//97. FlareLayer
	RegisterClass<FlareLayer>();
	//98. NavMeshProjectSettings
	RegisterClass<NavMeshProjectSettings>();

}
