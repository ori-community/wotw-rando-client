#include <Il2CppModLoader/windows_api/memory.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/app/types/SweepLine_SplayNode.h>
#include <Il2CppModLoader/app/types/SweepLine_SweepEvent.h>
#include <Il2CppModLoader/app/types/SweepLine_SweepEvent__Array.h>
#include <Il2CppModLoader/app/types/SweepLine_SweepEventVertex.h>
#include <Il2CppModLoader/app/types/DebugWriter.h>
#include <Il2CppModLoader/app/types/IFileFormat.h>
#include <Il2CppModLoader/app/types/InputTriangle.h>
#include <Il2CppModLoader/app/types/TriangleFormat.h>
#include <Il2CppModLoader/app/types/TriangleReader.h>
#include <Il2CppModLoader/app/types/TriangleWriter.h>
#include <Il2CppModLoader/app/types/Segment.h>
#include <Il2CppModLoader/app/types/AudioListenerExtension.h>
#include <Il2CppModLoader/app/types/AudioListener.h>
#include <Il2CppModLoader/app/types/AudioSourceExtension.h>
#include <Il2CppModLoader/app/types/AudioSource.h>
#include <Il2CppModLoader/app/types/AudioClip.h>
#include <Il2CppModLoader/app/types/AudioClip_PCMReaderCallback.h>
#include <Il2CppModLoader/app/types/AudioClip_PCMSetPositionCallback.h>
#include <Il2CppModLoader/app/types/AudioMixer.h>
#include <Il2CppModLoader/app/types/MovieTexture.h>
#include <Il2CppModLoader/app/types/PhysicsScene2D.h>
#include <Il2CppModLoader/app/types/RaycastHit2D__Array.h>
#include <Il2CppModLoader/app/types/Collider2D.h>
#include <Il2CppModLoader/app/types/ContactPoint2D__Array.h>
#include <Il2CppModLoader/app/types/DownloadHandlerAssetBundle.h>
#include <Il2CppModLoader/app/types/TrackableId.h>
#include <Il2CppModLoader/app/types/IntegratedSubsystem.h>
#include <Il2CppModLoader/app/types/ISubsystemDescriptorImpl.h>
#include <Il2CppModLoader/app/types/InputTracking_TrackingStateEventType__Enum.h>
#include <Il2CppModLoader/app/types/XRNodeState.h>
#include <Il2CppModLoader/app/types/FrameReceivedEventArgs.h>
#include <Il2CppModLoader/app/types/PointCloudUpdatedEventArgs.h>
#include <Il2CppModLoader/app/types/MeshGenerationStatus__Enum.h>
#include <Il2CppModLoader/app/types/MeshVertexAttributes__Enum.h>
#include <Il2CppModLoader/app/types/MeshGenerationResult.h>
#include <Il2CppModLoader/app/types/PlaneAddedEventArgs.h>
#include <Il2CppModLoader/app/types/PlaneUpdatedEventArgs.h>
#include <Il2CppModLoader/app/types/PlaneRemovedEventArgs.h>
#include <Il2CppModLoader/app/types/ReferencePointUpdatedEventArgs.h>
#include <Il2CppModLoader/app/types/SessionTrackingStateChangedEventArgs.h>
#include <Il2CppModLoader/app/types/ContextSet.h>
#include <Il2CppModLoader/app/types/IContext__Array.h>
#include <Il2CppModLoader/app/types/FixedRandom.h>
#include <Il2CppModLoader/app/types/MoonApplication_c.h>
#include <Il2CppModLoader/app/types/ActionDisposable.h>
#include <Il2CppModLoader/app/types/HyperHasher.h>
#include <Il2CppModLoader/app/types/MoonMath_VerletDynamicsValue.h>
#include <Il2CppModLoader/app/types/IRecordable.h>
#include <Il2CppModLoader/app/types/SceneWarningManager.h>
#include <Il2CppModLoader/app/types/SelectionUtility.h>
#include <Il2CppModLoader/app/types/SmartGUIText.h>
#include <Il2CppModLoader/app/types/NintendoSaveFileSystem.h>
#include <Il2CppModLoader/app/types/NSAsyncQueueInfo.h>
#include <Il2CppModLoader/app/types/NintendoSaveFileSystemAsync.h>
#include <Il2CppModLoader/app/types/NintendoSwitch.h>
#include <Il2CppModLoader/app/types/CatmullSpline.h>
#include <Il2CppModLoader/app/types/GameTimeExtensions_ExecuteAfterAsync_d_1.h>
#include <Il2CppModLoader/app/types/GUIContext.h>
#include <Il2CppModLoader/app/types/RectExtensions_c_DisplayClass75_0.h>
#include <Il2CppModLoader/app/types/RectExtensions_c.h>
#include <Il2CppModLoader/app/types/LehmerRng.h>
#include <Il2CppModLoader/app/types/IRng.h>
#include <Il2CppModLoader/app/types/ReflectionExtensions_c.h>
#include <Il2CppModLoader/app/types/CollisionEventHandler_c.h>
#include <Il2CppModLoader/app/types/MoonTrail_MoonTrailParticle__Array.h>
#include <Il2CppModLoader/app/types/MoonTrail.h>
#include <Il2CppModLoader/app/types/TrailPathProvider.h>
#include <Il2CppModLoader/app/types/MoonTrail_SimulationFrameData.h>
#include <Il2CppModLoader/app/types/IMaterialPropertyBlockProvider.h>
#include <Il2CppModLoader/app/types/MoonTrailSystem.h>
#include <Il2CppModLoader/app/types/MoonTrailSystem_ComputeBufferWrapper.h>
#include <Il2CppModLoader/app/types/Mesh__Array.h>
#include <Il2CppModLoader/app/types/MoonTrailUpdateContext__Array.h>
#include <Il2CppModLoader/app/types/MoonTrailSystem_SimulateJob.h>
#include <Il2CppModLoader/app/types/TerrainMesher_TerrainProxy.h>
#include <Il2CppModLoader/app/types/Trail.h>
#include <Il2CppModLoader/app/types/Trail_Point.h>
#include <Il2CppModLoader/app/types/UberTransformFollow.h>
#include <Il2CppModLoader/app/types/StateMachine.h>
#include <Il2CppModLoader/app/types/IState.h>
#include <Il2CppModLoader/app/types/IInterruptState.h>
#include <Il2CppModLoader/app/types/IInterruptable.h>
#include <Il2CppModLoader/app/types/NavMeshPath.h>
#include <Il2CppModLoader/app/types/AnimatorControllerPlayable.h>
#include <Il2CppModLoader/app/types/AnimatorClipInfo.h>
#include <Il2CppModLoader/app/types/AnimationState.h>
#include <Il2CppModLoader/app/types/AnimationEvent__Array.h>
#include <Il2CppModLoader/app/types/AnimationLayerMixerPlayable.h>
#include <Il2CppModLoader/app/types/AnimationMixerPlayable.h>
#include <Il2CppModLoader/app/types/AnimationMotionXToDeltaPlayable.h>
#include <Il2CppModLoader/app/types/AnimationOffsetPlayable.h>
#include <Il2CppModLoader/app/types/AnimationPosePlayable.h>
#include <Il2CppModLoader/app/types/AnimationRemoveScalePlayable.h>
#include <Il2CppModLoader/app/types/AnimationScriptPlayable.h>
#include <Il2CppModLoader/app/types/HumanBodyBones__Enum.h>
#include <Il2CppModLoader/app/types/StateMachineBehaviour__Array.h>
#include <Il2CppModLoader/app/types/AnimatorControllerParameter.h>
#include <Il2CppModLoader/app/types/Animation_Enumerator.h>
#include <Il2CppModLoader/app/types/NativeInputUpdateType__Enum.h>
#include <Il2CppModLoader/app/types/TerrainData_1.h>

namespace app::classes::types {
    namespace SweepLine_SplayNode { IL2CPP_MODLOADER_DLLEXPORT ::app::SweepLine_SplayNode__Class** type_info = (::app::SweepLine_SplayNode__Class**)(modloader::win::memory::resolve_rva(0x047121C0)); }
    namespace SweepLine_SweepEvent { IL2CPP_MODLOADER_DLLEXPORT ::app::SweepLine_SweepEvent__Class** type_info = (::app::SweepLine_SweepEvent__Class**)(modloader::win::memory::resolve_rva(0x04721108)); }
    namespace SweepLine_SweepEvent__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::SweepLine_SweepEvent__Array__Class** type_info = (::app::SweepLine_SweepEvent__Array__Class**)(modloader::win::memory::resolve_rva(0x04733548)); }
    namespace SweepLine_SweepEventVertex { IL2CPP_MODLOADER_DLLEXPORT ::app::SweepLine_SweepEventVertex__Class** type_info = (::app::SweepLine_SweepEventVertex__Class**)(modloader::win::memory::resolve_rva(0x04795B00)); }
    namespace DebugWriter { IL2CPP_MODLOADER_DLLEXPORT ::app::DebugWriter__Class** type_info = (::app::DebugWriter__Class**)(modloader::win::memory::resolve_rva(0x0475C728)); }
    namespace IFileFormat { IL2CPP_MODLOADER_DLLEXPORT ::app::IFileFormat__Class** type_info = (::app::IFileFormat__Class**)(modloader::win::memory::resolve_rva(0x04788A08)); }
    namespace InputTriangle { IL2CPP_MODLOADER_DLLEXPORT ::app::InputTriangle__Class** type_info = (::app::InputTriangle__Class**)(modloader::win::memory::resolve_rva(0x04793750)); }
    namespace TriangleFormat { IL2CPP_MODLOADER_DLLEXPORT ::app::TriangleFormat__Class** type_info = (::app::TriangleFormat__Class**)(modloader::win::memory::resolve_rva(0x047081F0)); }
    namespace TriangleReader { IL2CPP_MODLOADER_DLLEXPORT ::app::TriangleReader__Class** type_info = (::app::TriangleReader__Class**)(modloader::win::memory::resolve_rva(0x0477FF30)); }
    namespace TriangleWriter { IL2CPP_MODLOADER_DLLEXPORT ::app::TriangleWriter__Class** type_info = (::app::TriangleWriter__Class**)(modloader::win::memory::resolve_rva(0x04705600)); }
    namespace Segment { IL2CPP_MODLOADER_DLLEXPORT ::app::Segment__Class** type_info = (::app::Segment__Class**)(modloader::win::memory::resolve_rva(0x047794D0)); }
    namespace AudioListenerExtension { IL2CPP_MODLOADER_DLLEXPORT ::app::AudioListenerExtension__Class** type_info = (::app::AudioListenerExtension__Class**)(modloader::win::memory::resolve_rva(0x04729E18)); }
    namespace AudioListener { IL2CPP_MODLOADER_DLLEXPORT ::app::AudioListener__Class** type_info = (::app::AudioListener__Class**)(modloader::win::memory::resolve_rva(0x0475F668)); }
    namespace AudioSourceExtension { IL2CPP_MODLOADER_DLLEXPORT ::app::AudioSourceExtension__Class** type_info = (::app::AudioSourceExtension__Class**)(modloader::win::memory::resolve_rva(0x0475ECD8)); }
    namespace AudioSource { IL2CPP_MODLOADER_DLLEXPORT ::app::AudioSource__Class** type_info = (::app::AudioSource__Class**)(modloader::win::memory::resolve_rva(0x04750C10)); }
    namespace AudioClip { IL2CPP_MODLOADER_DLLEXPORT ::app::AudioClip__Class** type_info = (::app::AudioClip__Class**)(modloader::win::memory::resolve_rva(0x04781FD8)); }
    namespace AudioClip_PCMReaderCallback { IL2CPP_MODLOADER_DLLEXPORT ::app::AudioClip_PCMReaderCallback__Class** type_info = (::app::AudioClip_PCMReaderCallback__Class**)(modloader::win::memory::resolve_rva(0x0472EF80)); }
    namespace AudioClip_PCMSetPositionCallback { IL2CPP_MODLOADER_DLLEXPORT ::app::AudioClip_PCMSetPositionCallback__Class** type_info = (::app::AudioClip_PCMSetPositionCallback__Class**)(modloader::win::memory::resolve_rva(0x0475C870)); }
    namespace AudioMixer { IL2CPP_MODLOADER_DLLEXPORT ::app::AudioMixer__Class** type_info = (::app::AudioMixer__Class**)(modloader::win::memory::resolve_rva(0x04757968)); }
    namespace MovieTexture { IL2CPP_MODLOADER_DLLEXPORT ::app::MovieTexture__Class** type_info = (::app::MovieTexture__Class**)(modloader::win::memory::resolve_rva(0x0475F3D0)); }
    namespace PhysicsScene2D { IL2CPP_MODLOADER_DLLEXPORT ::app::PhysicsScene2D__Class** type_info = (::app::PhysicsScene2D__Class**)(modloader::win::memory::resolve_rva(0x04777D20)); }
    namespace RaycastHit2D__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::RaycastHit2D__Array__Class** type_info = (::app::RaycastHit2D__Array__Class**)(modloader::win::memory::resolve_rva(0x047268F0)); }
    namespace Collider2D { IL2CPP_MODLOADER_DLLEXPORT ::app::Collider2D__Class** type_info = (::app::Collider2D__Class**)(modloader::win::memory::resolve_rva(0x0470EC10)); }
    namespace ContactPoint2D__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::ContactPoint2D__Array__Class** type_info = (::app::ContactPoint2D__Array__Class**)(modloader::win::memory::resolve_rva(0x0470D4C8)); }
    namespace DownloadHandlerAssetBundle { IL2CPP_MODLOADER_DLLEXPORT ::app::DownloadHandlerAssetBundle__Class** type_info = (::app::DownloadHandlerAssetBundle__Class**)(modloader::win::memory::resolve_rva(0x047247C8)); }
    namespace TrackableId { IL2CPP_MODLOADER_DLLEXPORT ::app::TrackableId__Class** type_info = (::app::TrackableId__Class**)(modloader::win::memory::resolve_rva(0x04706A40)); }
    namespace IntegratedSubsystem { IL2CPP_MODLOADER_DLLEXPORT ::app::IntegratedSubsystem__Class** type_info = (::app::IntegratedSubsystem__Class**)(modloader::win::memory::resolve_rva(0x0474CF90)); }
    namespace ISubsystemDescriptorImpl { IL2CPP_MODLOADER_DLLEXPORT ::app::ISubsystemDescriptorImpl__Class** type_info = (::app::ISubsystemDescriptorImpl__Class**)(modloader::win::memory::resolve_rva(0x04738818)); }
    namespace InputTracking_TrackingStateEventType__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::InputTracking_TrackingStateEventType__Enum__Class** type_info = (::app::InputTracking_TrackingStateEventType__Enum__Class**)(modloader::win::memory::resolve_rva(0x04799068)); }
    namespace XRNodeState { IL2CPP_MODLOADER_DLLEXPORT ::app::XRNodeState__Class** type_info = (::app::XRNodeState__Class**)(modloader::win::memory::resolve_rva(0x047556A0)); }
    namespace FrameReceivedEventArgs { IL2CPP_MODLOADER_DLLEXPORT ::app::FrameReceivedEventArgs__Class** type_info = (::app::FrameReceivedEventArgs__Class**)(modloader::win::memory::resolve_rva(0x04720F70)); }
    namespace PointCloudUpdatedEventArgs { IL2CPP_MODLOADER_DLLEXPORT ::app::PointCloudUpdatedEventArgs__Class** type_info = (::app::PointCloudUpdatedEventArgs__Class**)(modloader::win::memory::resolve_rva(0x047045B8)); }
    namespace MeshGenerationStatus__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::MeshGenerationStatus__Enum__Class** type_info = (::app::MeshGenerationStatus__Enum__Class**)(modloader::win::memory::resolve_rva(0x04793180)); }
    namespace MeshVertexAttributes__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::MeshVertexAttributes__Enum__Class** type_info = (::app::MeshVertexAttributes__Enum__Class**)(modloader::win::memory::resolve_rva(0x04771AB0)); }
    namespace MeshGenerationResult { IL2CPP_MODLOADER_DLLEXPORT ::app::MeshGenerationResult__Class** type_info = (::app::MeshGenerationResult__Class**)(modloader::win::memory::resolve_rva(0x047960B8)); }
    namespace PlaneAddedEventArgs { IL2CPP_MODLOADER_DLLEXPORT ::app::PlaneAddedEventArgs__Class** type_info = (::app::PlaneAddedEventArgs__Class**)(modloader::win::memory::resolve_rva(0x0476F900)); }
    namespace PlaneUpdatedEventArgs { IL2CPP_MODLOADER_DLLEXPORT ::app::PlaneUpdatedEventArgs__Class** type_info = (::app::PlaneUpdatedEventArgs__Class**)(modloader::win::memory::resolve_rva(0x0472CF38)); }
    namespace PlaneRemovedEventArgs { IL2CPP_MODLOADER_DLLEXPORT ::app::PlaneRemovedEventArgs__Class** type_info = (::app::PlaneRemovedEventArgs__Class**)(modloader::win::memory::resolve_rva(0x04763580)); }
    namespace ReferencePointUpdatedEventArgs { IL2CPP_MODLOADER_DLLEXPORT ::app::ReferencePointUpdatedEventArgs__Class** type_info = (::app::ReferencePointUpdatedEventArgs__Class**)(modloader::win::memory::resolve_rva(0x0477EA80)); }
    namespace SessionTrackingStateChangedEventArgs { IL2CPP_MODLOADER_DLLEXPORT ::app::SessionTrackingStateChangedEventArgs__Class** type_info = (::app::SessionTrackingStateChangedEventArgs__Class**)(modloader::win::memory::resolve_rva(0x04794170)); }
    namespace ContextSet { IL2CPP_MODLOADER_DLLEXPORT ::app::ContextSet__Class** type_info = (::app::ContextSet__Class**)(modloader::win::memory::resolve_rva(0x04708F30)); }
    namespace IContext__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::IContext__Array__Class** type_info = (::app::IContext__Array__Class**)(modloader::win::memory::resolve_rva(0x04778198)); }
    namespace FixedRandom { IL2CPP_MODLOADER_DLLEXPORT ::app::FixedRandom__Class** type_info = (::app::FixedRandom__Class**)(modloader::win::memory::resolve_rva(0x04777500)); }
    namespace MoonApplication_c { IL2CPP_MODLOADER_DLLEXPORT ::app::MoonApplication_c__Class** type_info = (::app::MoonApplication_c__Class**)(modloader::win::memory::resolve_rva(0x0474D240)); }
    namespace ActionDisposable { IL2CPP_MODLOADER_DLLEXPORT ::app::ActionDisposable__Class** type_info = (::app::ActionDisposable__Class**)(modloader::win::memory::resolve_rva(0x0476FE28)); }
    namespace HyperHasher { IL2CPP_MODLOADER_DLLEXPORT ::app::HyperHasher__Class** type_info = (::app::HyperHasher__Class**)(modloader::win::memory::resolve_rva(0x047184F0)); }
    namespace MoonMath_VerletDynamicsValue { IL2CPP_MODLOADER_DLLEXPORT ::app::MoonMath_VerletDynamicsValue__Class** type_info = (::app::MoonMath_VerletDynamicsValue__Class**)(modloader::win::memory::resolve_rva(0x04741C78)); }
    namespace IRecordable { IL2CPP_MODLOADER_DLLEXPORT ::app::IRecordable__Class** type_info = (::app::IRecordable__Class**)(modloader::win::memory::resolve_rva(0x04780E50)); }
    namespace SceneWarningManager { IL2CPP_MODLOADER_DLLEXPORT ::app::SceneWarningManager__Class** type_info = (::app::SceneWarningManager__Class**)(modloader::win::memory::resolve_rva(0x047846A0)); }
    namespace SelectionUtility { IL2CPP_MODLOADER_DLLEXPORT ::app::SelectionUtility__Class** type_info = (::app::SelectionUtility__Class**)(modloader::win::memory::resolve_rva(0x04742BA0)); }
    namespace SmartGUIText { IL2CPP_MODLOADER_DLLEXPORT ::app::SmartGUIText__Class** type_info = (::app::SmartGUIText__Class**)(modloader::win::memory::resolve_rva(0x0475EA68)); }
    namespace NintendoSaveFileSystem { IL2CPP_MODLOADER_DLLEXPORT ::app::NintendoSaveFileSystem__Class** type_info = (::app::NintendoSaveFileSystem__Class**)(modloader::win::memory::resolve_rva(0x04780D88)); }
    namespace NSAsyncQueueInfo { IL2CPP_MODLOADER_DLLEXPORT ::app::NSAsyncQueueInfo__Class** type_info = (::app::NSAsyncQueueInfo__Class**)(modloader::win::memory::resolve_rva(0x04709018)); }
    namespace NintendoSaveFileSystemAsync { IL2CPP_MODLOADER_DLLEXPORT ::app::NintendoSaveFileSystemAsync__Class** type_info = (::app::NintendoSaveFileSystemAsync__Class**)(modloader::win::memory::resolve_rva(0x0478B9B0)); }
    namespace NintendoSwitch { IL2CPP_MODLOADER_DLLEXPORT ::app::NintendoSwitch__Class** type_info = (::app::NintendoSwitch__Class**)(modloader::win::memory::resolve_rva(0x04773C68)); }
    namespace CatmullSpline { IL2CPP_MODLOADER_DLLEXPORT ::app::CatmullSpline__Class** type_info = (::app::CatmullSpline__Class**)(modloader::win::memory::resolve_rva(0x04735708)); }
    namespace GameTimeExtensions_ExecuteAfterAsync_d_1 { IL2CPP_MODLOADER_DLLEXPORT ::app::GameTimeExtensions_ExecuteAfterAsync_d_1__Class** type_info = (::app::GameTimeExtensions_ExecuteAfterAsync_d_1__Class**)(modloader::win::memory::resolve_rva(0x047135C0)); }
    namespace GUIContext { IL2CPP_MODLOADER_DLLEXPORT ::app::GUIContext__Class** type_info = (::app::GUIContext__Class**)(modloader::win::memory::resolve_rva(0x0474C230)); }
    namespace RectExtensions_c_DisplayClass75_0 { IL2CPP_MODLOADER_DLLEXPORT ::app::RectExtensions_c_DisplayClass75_0__Class** type_info = (::app::RectExtensions_c_DisplayClass75_0__Class**)(modloader::win::memory::resolve_rva(0x04745998)); }
    namespace RectExtensions_c { IL2CPP_MODLOADER_DLLEXPORT ::app::RectExtensions_c__Class** type_info = (::app::RectExtensions_c__Class**)(modloader::win::memory::resolve_rva(0x04778F80)); }
    namespace LehmerRng { IL2CPP_MODLOADER_DLLEXPORT ::app::LehmerRng__Class** type_info = (::app::LehmerRng__Class**)(modloader::win::memory::resolve_rva(0x04734268)); }
    namespace IRng { IL2CPP_MODLOADER_DLLEXPORT ::app::IRng__Class** type_info = (::app::IRng__Class**)(modloader::win::memory::resolve_rva(0x047837D0)); }
    namespace ReflectionExtensions_c { IL2CPP_MODLOADER_DLLEXPORT ::app::ReflectionExtensions_c__Class** type_info = (::app::ReflectionExtensions_c__Class**)(modloader::win::memory::resolve_rva(0x047457D8)); }
    namespace CollisionEventHandler_c { IL2CPP_MODLOADER_DLLEXPORT ::app::CollisionEventHandler_c__Class** type_info = (::app::CollisionEventHandler_c__Class**)(modloader::win::memory::resolve_rva(0x04739068)); }
    namespace MoonTrail_MoonTrailParticle__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::MoonTrail_MoonTrailParticle__Array__Class** type_info = (::app::MoonTrail_MoonTrailParticle__Array__Class**)(modloader::win::memory::resolve_rva(0x04710530)); }
    namespace MoonTrail { IL2CPP_MODLOADER_DLLEXPORT ::app::MoonTrail__Class** type_info = (::app::MoonTrail__Class**)(modloader::win::memory::resolve_rva(0x0476CC70)); }
    namespace TrailPathProvider { IL2CPP_MODLOADER_DLLEXPORT ::app::TrailPathProvider__Class** type_info = (::app::TrailPathProvider__Class**)(modloader::win::memory::resolve_rva(0x04798F10)); }
    namespace MoonTrail_SimulationFrameData { IL2CPP_MODLOADER_DLLEXPORT ::app::MoonTrail_SimulationFrameData__Class** type_info = (::app::MoonTrail_SimulationFrameData__Class**)(modloader::win::memory::resolve_rva(0x04722B28)); }
    namespace IMaterialPropertyBlockProvider { IL2CPP_MODLOADER_DLLEXPORT ::app::IMaterialPropertyBlockProvider__Class** type_info = (::app::IMaterialPropertyBlockProvider__Class**)(modloader::win::memory::resolve_rva(0x04700E30)); }
    namespace MoonTrailSystem { IL2CPP_MODLOADER_DLLEXPORT ::app::MoonTrailSystem__Class** type_info = (::app::MoonTrailSystem__Class**)(modloader::win::memory::resolve_rva(0x0471FC90)); }
    namespace MoonTrailSystem_ComputeBufferWrapper { IL2CPP_MODLOADER_DLLEXPORT ::app::MoonTrailSystem_ComputeBufferWrapper__Class** type_info = (::app::MoonTrailSystem_ComputeBufferWrapper__Class**)(modloader::win::memory::resolve_rva(0x0477A2A8)); }
    namespace Mesh__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::Mesh__Array__Class** type_info = (::app::Mesh__Array__Class**)(modloader::win::memory::resolve_rva(0x04779838)); }
    namespace MoonTrailUpdateContext__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::MoonTrailUpdateContext__Array__Class** type_info = (::app::MoonTrailUpdateContext__Array__Class**)(modloader::win::memory::resolve_rva(0x047897D0)); }
    namespace MoonTrailSystem_SimulateJob { IL2CPP_MODLOADER_DLLEXPORT ::app::MoonTrailSystem_SimulateJob__Class** type_info = (::app::MoonTrailSystem_SimulateJob__Class**)(modloader::win::memory::resolve_rva(0x0476C9D8)); }
    namespace TerrainMesher_TerrainProxy { IL2CPP_MODLOADER_DLLEXPORT ::app::TerrainMesher_TerrainProxy__Class** type_info = (::app::TerrainMesher_TerrainProxy__Class**)(modloader::win::memory::resolve_rva(0x04732248)); }
    namespace Trail { IL2CPP_MODLOADER_DLLEXPORT ::app::Trail__Class** type_info = (::app::Trail__Class**)(modloader::win::memory::resolve_rva(0x0474ED20)); }
    namespace Trail_Point { IL2CPP_MODLOADER_DLLEXPORT ::app::Trail_Point__Class** type_info = (::app::Trail_Point__Class**)(modloader::win::memory::resolve_rva(0x0472E2E8)); }
    namespace UberTransformFollow { IL2CPP_MODLOADER_DLLEXPORT ::app::UberTransformFollow__Class** type_info = (::app::UberTransformFollow__Class**)(modloader::win::memory::resolve_rva(0x0475C4E0)); }
    namespace StateMachine { IL2CPP_MODLOADER_DLLEXPORT ::app::StateMachine__Class** type_info = (::app::StateMachine__Class**)(modloader::win::memory::resolve_rva(0x0471F5F0)); }
    namespace IState { IL2CPP_MODLOADER_DLLEXPORT ::app::IState__Class** type_info = (::app::IState__Class**)(modloader::win::memory::resolve_rva(0x0473E340)); }
    namespace IInterruptState { IL2CPP_MODLOADER_DLLEXPORT ::app::IInterruptState__Class** type_info = (::app::IInterruptState__Class**)(modloader::win::memory::resolve_rva(0x04773118)); }
    namespace IInterruptable { IL2CPP_MODLOADER_DLLEXPORT ::app::IInterruptable__Class** type_info = (::app::IInterruptable__Class**)(modloader::win::memory::resolve_rva(0x04786B08)); }
    namespace NavMeshPath { IL2CPP_MODLOADER_DLLEXPORT ::app::NavMeshPath__Class** type_info = (::app::NavMeshPath__Class**)(modloader::win::memory::resolve_rva(0x04712E40)); }
    namespace AnimatorControllerPlayable { IL2CPP_MODLOADER_DLLEXPORT ::app::AnimatorControllerPlayable__Class** type_info = (::app::AnimatorControllerPlayable__Class**)(modloader::win::memory::resolve_rva(0x04709170)); }
    namespace AnimatorClipInfo { IL2CPP_MODLOADER_DLLEXPORT ::app::AnimatorClipInfo__Class** type_info = (::app::AnimatorClipInfo__Class**)(modloader::win::memory::resolve_rva(0x04750C50)); }
    namespace AnimationState { IL2CPP_MODLOADER_DLLEXPORT ::app::AnimationState__Class** type_info = (::app::AnimationState__Class**)(modloader::win::memory::resolve_rva(0x0472B288)); }
    namespace AnimationEvent__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::AnimationEvent__Array__Class** type_info = (::app::AnimationEvent__Array__Class**)(modloader::win::memory::resolve_rva(0x04703B10)); }
    namespace AnimationLayerMixerPlayable { IL2CPP_MODLOADER_DLLEXPORT ::app::AnimationLayerMixerPlayable__Class** type_info = (::app::AnimationLayerMixerPlayable__Class**)(modloader::win::memory::resolve_rva(0x0471DA80)); }
    namespace AnimationMixerPlayable { IL2CPP_MODLOADER_DLLEXPORT ::app::AnimationMixerPlayable__Class** type_info = (::app::AnimationMixerPlayable__Class**)(modloader::win::memory::resolve_rva(0x04757178)); }
    namespace AnimationMotionXToDeltaPlayable { IL2CPP_MODLOADER_DLLEXPORT ::app::AnimationMotionXToDeltaPlayable__Class** type_info = (::app::AnimationMotionXToDeltaPlayable__Class**)(modloader::win::memory::resolve_rva(0x0471E970)); }
    namespace AnimationOffsetPlayable { IL2CPP_MODLOADER_DLLEXPORT ::app::AnimationOffsetPlayable__Class** type_info = (::app::AnimationOffsetPlayable__Class**)(modloader::win::memory::resolve_rva(0x04731218)); }
    namespace AnimationPosePlayable { IL2CPP_MODLOADER_DLLEXPORT ::app::AnimationPosePlayable__Class** type_info = (::app::AnimationPosePlayable__Class**)(modloader::win::memory::resolve_rva(0x047246E8)); }
    namespace AnimationRemoveScalePlayable { IL2CPP_MODLOADER_DLLEXPORT ::app::AnimationRemoveScalePlayable__Class** type_info = (::app::AnimationRemoveScalePlayable__Class**)(modloader::win::memory::resolve_rva(0x047368C0)); }
    namespace AnimationScriptPlayable { IL2CPP_MODLOADER_DLLEXPORT ::app::AnimationScriptPlayable__Class** type_info = (::app::AnimationScriptPlayable__Class**)(modloader::win::memory::resolve_rva(0x0472F418)); }
    namespace HumanBodyBones__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::HumanBodyBones__Enum__Class** type_info = (::app::HumanBodyBones__Enum__Class**)(modloader::win::memory::resolve_rva(0x04714E98)); }
    namespace StateMachineBehaviour__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::StateMachineBehaviour__Array__Class** type_info = (::app::StateMachineBehaviour__Array__Class**)(modloader::win::memory::resolve_rva(0x047529B8)); }
    namespace AnimatorControllerParameter { IL2CPP_MODLOADER_DLLEXPORT ::app::AnimatorControllerParameter__Class** type_info = (::app::AnimatorControllerParameter__Class**)(modloader::win::memory::resolve_rva(0x0473F270)); }
    namespace Animation_Enumerator { IL2CPP_MODLOADER_DLLEXPORT ::app::Animation_Enumerator__Class** type_info = (::app::Animation_Enumerator__Class**)(modloader::win::memory::resolve_rva(0x0475C580)); }
    namespace NativeInputUpdateType__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::NativeInputUpdateType__Enum__Class** type_info = (::app::NativeInputUpdateType__Enum__Class**)(modloader::win::memory::resolve_rva(0x04704330)); }
    namespace TerrainData_1 { IL2CPP_MODLOADER_DLLEXPORT ::app::TerrainData_1__Class** type_info = (::app::TerrainData_1__Class**)(modloader::win::memory::resolve_rva(0x04749640)); }
}
