#include <Il2CppModLoader/app/types/AttachInteractionToPhysicsSystem.h>
#include <Il2CppModLoader/app/types/AttachSpriteToPhysicsSystem_JobSystem.h>
#include <Il2CppModLoader/app/types/AttachSpriteToPhysicsSystem_JobWithMonoBehaviour.h>
#include <Il2CppModLoader/app/types/AttachSpriteToPhysicsSystem_SystemWithMonoBehaviour.h>
#include <Il2CppModLoader/app/types/AttachSpriteToPhysicsSystem_SystemWithMonoBehaviour_c.h>
#include <Il2CppModLoader/app/types/BuildRunningHook.h>
#include <Il2CppModLoader/app/types/CameraFrustumDataCaptureAgent.h>
#include <Il2CppModLoader/app/types/CleanupCaptureAgent.h>
#include <Il2CppModLoader/app/types/DRSCaptureAgent.h>
#include <Il2CppModLoader/app/types/DrawCallCountCaptureAgent.h>
#include <Il2CppModLoader/app/types/DroppedFrameMonitorB.h>
#include <Il2CppModLoader/app/types/DroppedFrameMonitorB_TempData.h>
#include <Il2CppModLoader/app/types/EntityDataCaptureAgent.h>
#include <Il2CppModLoader/app/types/ExceptionCaptureAgent.h>
#include <Il2CppModLoader/app/types/ExceptionsTest_StartExceptionsTest_d_15.h>
#include <Il2CppModLoader/app/types/ExceptionsTest_c.h>
#include <Il2CppModLoader/app/types/FpsGraph.h>
#include <Il2CppModLoader/app/types/FrameCaptureTester.h>
#include <Il2CppModLoader/app/types/FrameCaptureTester_AgentOutput.h>
#include <Il2CppModLoader/app/types/FrameCaptureTester_FrameCaptureTestType__Enum.h>
#include <Il2CppModLoader/app/types/FrameCounter_SecondInfo__Array.h>
#include <Il2CppModLoader/app/types/FrameGraph.h>
#include <Il2CppModLoader/app/types/FrameInfo.h>
#include <Il2CppModLoader/app/types/FrameInfo__Array.h>
#include <Il2CppModLoader/app/types/FrameTimeCaptureAgent.h>
#include <Il2CppModLoader/app/types/GameController_ProfilingConfiguration__Enum.h>
#include <Il2CppModLoader/app/types/IFrameCaptureAgent.h>
#include <Il2CppModLoader/app/types/IMoonShadingZone.h>
#include <Il2CppModLoader/app/types/IMoonShadingZoneTarget.h>
#include <Il2CppModLoader/app/types/IPhysicsCollisionReceiver.h>
#include <Il2CppModLoader/app/types/IProfilingDataProvider.h>
#include <Il2CppModLoader/app/types/IStressTest.h>
#include <Il2CppModLoader/app/types/LightCanvasEditorTextureCache.h>
#include <Il2CppModLoader/app/types/LightCanvasEditorTextureCache_LightCanvasEditorTextureData.h>
#include <Il2CppModLoader/app/types/LightCanvasEditorTextureCache_c.h>
#include <Il2CppModLoader/app/types/LightCanvas_c.h>
#include <Il2CppModLoader/app/types/LightCaptureAgent.h>
#include <Il2CppModLoader/app/types/List_1_MicroProfilerGraph_MarkerCache___Array.h>
#include <Il2CppModLoader/app/types/MemoryCaptureAgent.h>
#include <Il2CppModLoader/app/types/MemoryManagerCaptureAgent.h>
#include <Il2CppModLoader/app/types/MicroProfilerGraph.h>
#include <Il2CppModLoader/app/types/MicroProfilerGraph_FrameCache__Array.h>
#include <Il2CppModLoader/app/types/MicroProfilerGraph_MarkerCache.h>
#include <Il2CppModLoader/app/types/MicroProfilerGraph_MetricCache__Array.h>
#include <Il2CppModLoader/app/types/MicroProfilerInspector.h>
#include <Il2CppModLoader/app/types/MicroProfilerInspector_MetricData.h>
#include <Il2CppModLoader/app/types/MicroProfilerInspector_MetricData__Array.h>
#include <Il2CppModLoader/app/types/MicroProfilerInspector_MetricPreset.h>
#include <Il2CppModLoader/app/types/MicroProfilerInspector_c.h>
#include <Il2CppModLoader/app/types/MirroringData.h>
#include <Il2CppModLoader/app/types/MoonShadingZoneController.h>
#include <Il2CppModLoader/app/types/MoonShadingZoneController_TargetData.h>
#include <Il2CppModLoader/app/types/NegativeScaleFixer_TransformAndWorldMatrix.h>
#include <Il2CppModLoader/app/types/NegativeScaleFixer_c.h>
#include <Il2CppModLoader/app/types/ObjectInstantiationCaptureAgent.h>
#include <Il2CppModLoader/app/types/ObjectProfilingCaptureAgent.h>
#include <Il2CppModLoader/app/types/OptionalInstantiationHandler.h>
#include <Il2CppModLoader/app/types/OptionalInstantiationHandler_InstanceInfo__Array.h>
#include <Il2CppModLoader/app/types/PhysicalSoftInteraction.h>
#include <Il2CppModLoader/app/types/PhysicalSystemManager_TimeSliceActivatePhysics_d_159.h>
#include <Il2CppModLoader/app/types/PhysicalSystemManager_TimeSliceDisablePhysics_d_157.h>
#include <Il2CppModLoader/app/types/PhysicsEdge.h>
#include <Il2CppModLoader/app/types/PhysicsEdge_EdgeSoftInteraction.h>
#include <Il2CppModLoader/app/types/PhysicsEdge_EdgeTurbulence.h>
#include <Il2CppModLoader/app/types/PhysicsSystemPointSet_PhysicsSystemPoint.h>
#include <Il2CppModLoader/app/types/PlayerDataCaptureAgent.h>
#include <Il2CppModLoader/app/types/PoolCaptureAgent.h>
#include <Il2CppModLoader/app/types/ReplayServer.h>
#include <Il2CppModLoader/app/types/SceneDataCaptureAgent.h>
#include <Il2CppModLoader/app/types/SceneInspector.h>
#include <Il2CppModLoader/app/types/SceneInspector_c_DisplayClass51_0.h>
#include <Il2CppModLoader/app/types/SceneLoadingCaptureAgent.h>
#include <Il2CppModLoader/app/types/ServerConfiguration.h>
#include <Il2CppModLoader/app/types/ServerObject.h>
#include <Il2CppModLoader/app/types/ServerObjectComponent.h>
#include <Il2CppModLoader/app/types/ServerObjectReferences.h>
#include <Il2CppModLoader/app/types/ServerPhysicalSystemManager.h>
#include <Il2CppModLoader/app/types/ServerSupport.h>
#include <Il2CppModLoader/app/types/ShadingZoneRendererTarget.h>
#include <Il2CppModLoader/app/types/SimpleFPS.h>
#include <Il2CppModLoader/app/types/SimpleFPS_VideoPlayerDebugInfo.h>
#include <Il2CppModLoader/app/types/SketchupLayer.h>
#include <Il2CppModLoader/app/types/SkinningEdge_SkinningCapsule.h>
#include <Il2CppModLoader/app/types/SkinningEdge_c_DisplayClass2_0.h>
#include <Il2CppModLoader/app/types/SkinningEdge_c_DisplayClass4_0.h>
#include <Il2CppModLoader/app/types/StressTestDataCaptureAgent.h>
#include <Il2CppModLoader/app/types/StressTestPlaylist.h>
#include <Il2CppModLoader/app/types/StressTester.h>
#include <Il2CppModLoader/app/types/StressTester_RecordScreenshot_d_171.h>
#include <Il2CppModLoader/app/types/StressTester_StartTestFromScene_d_134.h>
#include <Il2CppModLoader/app/types/StressTester_TesterState__Enum.h>
#include <Il2CppModLoader/app/types/StressTester_c.h>
#include <Il2CppModLoader/app/types/StressTester_c_DisplayClass134_0.h>
#include <Il2CppModLoader/app/types/StressTester_c_DisplayClass146_0.h>
#include <Il2CppModLoader/app/types/TimesliceLigthCanvasSetPosTask_TimeslicedSetPos_d_6.h>
#include <Il2CppModLoader/app/types/Vector2Ser.h>
#include <Il2CppModLoader/app/types/Vector3Ser.h>
#include <Il2CppModLoader/app/types/Vector4Ser.h>
#include <Il2CppModLoader/app/types/VerletEdge.h>
#include <Il2CppModLoader/app/types/VerletVertex.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IMoonShadingZoneTarget {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IMoonShadingZoneTarget__Class** type_info = (::app::IMoonShadingZoneTarget__Class**)(modloader::win::memory::resolve_rva(0x0474B990));
    }
    namespace ShadingZoneRendererTarget {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ShadingZoneRendererTarget__Class** type_info = (::app::ShadingZoneRendererTarget__Class**)(modloader::win::memory::resolve_rva(0x04765BA8));
    }
    namespace MoonShadingZoneController {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MoonShadingZoneController__Class** type_info = (::app::MoonShadingZoneController__Class**)(modloader::win::memory::resolve_rva(0x04765CE0));
    }
    namespace MoonShadingZoneController_TargetData {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MoonShadingZoneController_TargetData__Class** type_info = (::app::MoonShadingZoneController_TargetData__Class**)(modloader::win::memory::resolve_rva(0x0477C250));
    }
    namespace IMoonShadingZone {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IMoonShadingZone__Class** type_info = (::app::IMoonShadingZone__Class**)(modloader::win::memory::resolve_rva(0x04707F48));
    }
    namespace MirroringData {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MirroringData__Class** type_info = (::app::MirroringData__Class**)(modloader::win::memory::resolve_rva(0x04717BC0));
    }
    namespace NegativeScaleFixer_TransformAndWorldMatrix {
        IL2CPP_MODLOADER_DLLEXPORT ::app::NegativeScaleFixer_TransformAndWorldMatrix__Class** type_info = (::app::NegativeScaleFixer_TransformAndWorldMatrix__Class**)(modloader::win::memory::resolve_rva(0x0470CD70));
    }
    namespace NegativeScaleFixer_c {
        IL2CPP_MODLOADER_DLLEXPORT ::app::NegativeScaleFixer_c__Class** type_info = (::app::NegativeScaleFixer_c__Class**)(modloader::win::memory::resolve_rva(0x0472A368));
    }
    namespace OptionalInstantiationHandler {
        IL2CPP_MODLOADER_DLLEXPORT ::app::OptionalInstantiationHandler__Class** type_info = (::app::OptionalInstantiationHandler__Class**)(modloader::win::memory::resolve_rva(0x0474FC48));
    }
    namespace OptionalInstantiationHandler_InstanceInfo__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::OptionalInstantiationHandler_InstanceInfo__Array__Class** type_info = (::app::OptionalInstantiationHandler_InstanceInfo__Array__Class**)(modloader::win::memory::resolve_rva(0x0471E348));
    }
    namespace AttachInteractionToPhysicsSystem {
        IL2CPP_MODLOADER_DLLEXPORT ::app::AttachInteractionToPhysicsSystem__Class** type_info = (::app::AttachInteractionToPhysicsSystem__Class**)(modloader::win::memory::resolve_rva(0x04739470));
    }
    namespace AttachSpriteToPhysicsSystem_JobSystem {
        IL2CPP_MODLOADER_DLLEXPORT ::app::AttachSpriteToPhysicsSystem_JobSystem__Class** type_info = (::app::AttachSpriteToPhysicsSystem_JobSystem__Class**)(modloader::win::memory::resolve_rva(0x0470D728));
    }
    namespace AttachSpriteToPhysicsSystem_SystemWithMonoBehaviour {
        IL2CPP_MODLOADER_DLLEXPORT ::app::AttachSpriteToPhysicsSystem_SystemWithMonoBehaviour__Class** type_info = (::app::AttachSpriteToPhysicsSystem_SystemWithMonoBehaviour__Class**)(modloader::win::memory::resolve_rva(0x04709DD0));
    }
    namespace AttachSpriteToPhysicsSystem_SystemWithMonoBehaviour_c {
        IL2CPP_MODLOADER_DLLEXPORT ::app::AttachSpriteToPhysicsSystem_SystemWithMonoBehaviour_c__Class** type_info = (::app::AttachSpriteToPhysicsSystem_SystemWithMonoBehaviour_c__Class**)(modloader::win::memory::resolve_rva(0x047170B0));
    }
    namespace AttachSpriteToPhysicsSystem_JobWithMonoBehaviour {
        IL2CPP_MODLOADER_DLLEXPORT ::app::AttachSpriteToPhysicsSystem_JobWithMonoBehaviour__Class** type_info = (::app::AttachSpriteToPhysicsSystem_JobWithMonoBehaviour__Class**)(modloader::win::memory::resolve_rva(0x04799840));
    }
    namespace PhysicalSoftInteraction {
        IL2CPP_MODLOADER_DLLEXPORT ::app::PhysicalSoftInteraction__Class** type_info = (::app::PhysicalSoftInteraction__Class**)(modloader::win::memory::resolve_rva(0x047736E0));
    }
    namespace PhysicalSystemManager_TimeSliceDisablePhysics_d_157 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::PhysicalSystemManager_TimeSliceDisablePhysics_d_157__Class** type_info = (::app::PhysicalSystemManager_TimeSliceDisablePhysics_d_157__Class**)(modloader::win::memory::resolve_rva(0x04755A50));
    }
    namespace PhysicalSystemManager_TimeSliceActivatePhysics_d_159 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::PhysicalSystemManager_TimeSliceActivatePhysics_d_159__Class** type_info = (::app::PhysicalSystemManager_TimeSliceActivatePhysics_d_159__Class**)(modloader::win::memory::resolve_rva(0x0475B378));
    }
    namespace PhysicsEdge {
        IL2CPP_MODLOADER_DLLEXPORT ::app::PhysicsEdge__Class** type_info = (::app::PhysicsEdge__Class**)(modloader::win::memory::resolve_rva(0x0473EDC0));
    }
    namespace SkinningEdge_SkinningCapsule {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SkinningEdge_SkinningCapsule__Class** type_info = (::app::SkinningEdge_SkinningCapsule__Class**)(modloader::win::memory::resolve_rva(0x0474B2A8));
    }
    namespace PhysicsEdge_EdgeTurbulence {
        IL2CPP_MODLOADER_DLLEXPORT ::app::PhysicsEdge_EdgeTurbulence__Class** type_info = (::app::PhysicsEdge_EdgeTurbulence__Class**)(modloader::win::memory::resolve_rva(0x04722DE8));
    }
    namespace PhysicsEdge_EdgeSoftInteraction {
        IL2CPP_MODLOADER_DLLEXPORT ::app::PhysicsEdge_EdgeSoftInteraction__Class** type_info = (::app::PhysicsEdge_EdgeSoftInteraction__Class**)(modloader::win::memory::resolve_rva(0x04776138));
    }
    namespace SkinningEdge_c_DisplayClass2_0 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SkinningEdge_c_DisplayClass2_0__Class** type_info = (::app::SkinningEdge_c_DisplayClass2_0__Class**)(modloader::win::memory::resolve_rva(0x04741BA8));
    }
    namespace SkinningEdge_c_DisplayClass4_0 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SkinningEdge_c_DisplayClass4_0__Class** type_info = (::app::SkinningEdge_c_DisplayClass4_0__Class**)(modloader::win::memory::resolve_rva(0x04799F10));
    }
    namespace VerletEdge {
        IL2CPP_MODLOADER_DLLEXPORT ::app::VerletEdge__Class** type_info = (::app::VerletEdge__Class**)(modloader::win::memory::resolve_rva(0x0470DB20));
    }
    namespace VerletVertex {
        IL2CPP_MODLOADER_DLLEXPORT ::app::VerletVertex__Class** type_info = (::app::VerletVertex__Class**)(modloader::win::memory::resolve_rva(0x04737108));
    }
    namespace IPhysicsCollisionReceiver {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IPhysicsCollisionReceiver__Class** type_info = (::app::IPhysicsCollisionReceiver__Class**)(modloader::win::memory::resolve_rva(0x0475CC70));
    }
    namespace PhysicsSystemPointSet_PhysicsSystemPoint {
        IL2CPP_MODLOADER_DLLEXPORT ::app::PhysicsSystemPointSet_PhysicsSystemPoint__Class** type_info = (::app::PhysicsSystemPointSet_PhysicsSystemPoint__Class**)(modloader::win::memory::resolve_rva(0x0470AB58));
    }
    namespace FrameInfo {
        IL2CPP_MODLOADER_DLLEXPORT ::app::FrameInfo__Class** type_info = (::app::FrameInfo__Class**)(modloader::win::memory::resolve_rva(0x047018B8));
    }
    namespace FpsGraph {
        IL2CPP_MODLOADER_DLLEXPORT ::app::FpsGraph__Class** type_info = (::app::FpsGraph__Class**)(modloader::win::memory::resolve_rva(0x04766B70));
    }
    namespace FrameInfo__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::FrameInfo__Array__Class** type_info = (::app::FrameInfo__Array__Class**)(modloader::win::memory::resolve_rva(0x04797428));
    }
    namespace DroppedFrameMonitorB {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DroppedFrameMonitorB__Class** type_info = (::app::DroppedFrameMonitorB__Class**)(modloader::win::memory::resolve_rva(0x047833D8));
    }
    namespace DroppedFrameMonitorB_TempData {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DroppedFrameMonitorB_TempData__Class** type_info = (::app::DroppedFrameMonitorB_TempData__Class**)(modloader::win::memory::resolve_rva(0x04782140));
    }
    namespace FrameGraph {
        IL2CPP_MODLOADER_DLLEXPORT ::app::FrameGraph__Class** type_info = (::app::FrameGraph__Class**)(modloader::win::memory::resolve_rva(0x04764C50));
    }
    namespace MicroProfilerGraph {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MicroProfilerGraph__Class** type_info = (::app::MicroProfilerGraph__Class**)(modloader::win::memory::resolve_rva(0x04743A88));
    }
    namespace FrameCounter_SecondInfo__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::FrameCounter_SecondInfo__Array__Class** type_info = (::app::FrameCounter_SecondInfo__Array__Class**)(modloader::win::memory::resolve_rva(0x0473B5D0));
    }
    namespace IProfilingDataProvider {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IProfilingDataProvider__Class** type_info = (::app::IProfilingDataProvider__Class**)(modloader::win::memory::resolve_rva(0x0473B468));
    }
    namespace MicroProfilerGraph_FrameCache__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MicroProfilerGraph_FrameCache__Array__Class** type_info = (::app::MicroProfilerGraph_FrameCache__Array__Class**)(modloader::win::memory::resolve_rva(0x047827A0));
    }
    namespace MicroProfilerGraph_MetricCache__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MicroProfilerGraph_MetricCache__Array__Class** type_info = (::app::MicroProfilerGraph_MetricCache__Array__Class**)(modloader::win::memory::resolve_rva(0x047909A8));
    }
    namespace MicroProfilerGraph_MarkerCache {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MicroProfilerGraph_MarkerCache__Class** type_info = (::app::MicroProfilerGraph_MarkerCache__Class**)(modloader::win::memory::resolve_rva(0x047526E8));
    }
    namespace List_1_MicroProfilerGraph_MarkerCache___Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::List_1_MicroProfilerGraph_MarkerCache___Array__Class** type_info = (::app::List_1_MicroProfilerGraph_MarkerCache___Array__Class**)(modloader::win::memory::resolve_rva(0x04727098));
    }
    namespace MicroProfilerInspector {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MicroProfilerInspector__Class** type_info = (::app::MicroProfilerInspector__Class**)(modloader::win::memory::resolve_rva(0x04732EA8));
    }
    namespace MicroProfilerInspector_MetricPreset {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MicroProfilerInspector_MetricPreset__Class** type_info = (::app::MicroProfilerInspector_MetricPreset__Class**)(modloader::win::memory::resolve_rva(0x0471B420));
    }
    namespace MicroProfilerInspector_MetricData {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MicroProfilerInspector_MetricData__Class** type_info = (::app::MicroProfilerInspector_MetricData__Class**)(modloader::win::memory::resolve_rva(0x04747F30));
    }
    namespace MicroProfilerInspector_MetricData__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MicroProfilerInspector_MetricData__Array__Class** type_info = (::app::MicroProfilerInspector_MetricData__Array__Class**)(modloader::win::memory::resolve_rva(0x0477B0A8));
    }
    namespace MicroProfilerInspector_c {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MicroProfilerInspector_c__Class** type_info = (::app::MicroProfilerInspector_c__Class**)(modloader::win::memory::resolve_rva(0x0478EAE8));
    }
    namespace SimpleFPS {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SimpleFPS__Class** type_info = (::app::SimpleFPS__Class**)(modloader::win::memory::resolve_rva(0x04765170));
    }
    namespace SimpleFPS_VideoPlayerDebugInfo {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SimpleFPS_VideoPlayerDebugInfo__Class** type_info = (::app::SimpleFPS_VideoPlayerDebugInfo__Class**)(modloader::win::memory::resolve_rva(0x04732EB8));
    }
    namespace ReplayServer {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ReplayServer__Class** type_info = (::app::ReplayServer__Class**)(modloader::win::memory::resolve_rva(0x04709340));
    }
    namespace ServerObject {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ServerObject__Class** type_info = (::app::ServerObject__Class**)(modloader::win::memory::resolve_rva(0x0475C208));
    }
    namespace ServerObjectComponent {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ServerObjectComponent__Class** type_info = (::app::ServerObjectComponent__Class**)(modloader::win::memory::resolve_rva(0x04794918));
    }
    namespace ServerConfiguration {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ServerConfiguration__Class** type_info = (::app::ServerConfiguration__Class**)(modloader::win::memory::resolve_rva(0x04738948));
    }
    namespace ServerObjectReferences {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ServerObjectReferences__Class** type_info = (::app::ServerObjectReferences__Class**)(modloader::win::memory::resolve_rva(0x0475B930));
    }
    namespace ServerSupport {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ServerSupport__Class** type_info = (::app::ServerSupport__Class**)(modloader::win::memory::resolve_rva(0x04788E50));
    }
    namespace ServerPhysicalSystemManager {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ServerPhysicalSystemManager__Class** type_info = (::app::ServerPhysicalSystemManager__Class**)(modloader::win::memory::resolve_rva(0x0474AB70));
    }
    namespace Vector2Ser {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Vector2Ser__Class** type_info = (::app::Vector2Ser__Class**)(modloader::win::memory::resolve_rva(0x0478A3D8));
    }
    namespace Vector3Ser {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Vector3Ser__Class** type_info = (::app::Vector3Ser__Class**)(modloader::win::memory::resolve_rva(0x04704B40));
    }
    namespace Vector4Ser {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Vector4Ser__Class** type_info = (::app::Vector4Ser__Class**)(modloader::win::memory::resolve_rva(0x047575D8));
    }
    namespace SceneInspector {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SceneInspector__Class** type_info = (::app::SceneInspector__Class**)(modloader::win::memory::resolve_rva(0x0471F8D0));
    }
    namespace SceneInspector_c_DisplayClass51_0 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SceneInspector_c_DisplayClass51_0__Class** type_info = (::app::SceneInspector_c_DisplayClass51_0__Class**)(modloader::win::memory::resolve_rva(0x04785FD0));
    }
    namespace LightCanvas_c {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LightCanvas_c__Class** type_info = (::app::LightCanvas_c__Class**)(modloader::win::memory::resolve_rva(0x047140A8));
    }
    namespace LightCanvasEditorTextureCache {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LightCanvasEditorTextureCache__Class** type_info = (::app::LightCanvasEditorTextureCache__Class**)(modloader::win::memory::resolve_rva(0x0476CAE8));
    }
    namespace LightCanvasEditorTextureCache_LightCanvasEditorTextureData {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LightCanvasEditorTextureCache_LightCanvasEditorTextureData__Class** type_info = (::app::LightCanvasEditorTextureCache_LightCanvasEditorTextureData__Class**)(modloader::win::memory::resolve_rva(0x04784898));
    }
    namespace LightCanvasEditorTextureCache_c {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LightCanvasEditorTextureCache_c__Class** type_info = (::app::LightCanvasEditorTextureCache_c__Class**)(modloader::win::memory::resolve_rva(0x047909B0));
    }
    namespace TimesliceLigthCanvasSetPosTask_TimeslicedSetPos_d_6 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::TimesliceLigthCanvasSetPosTask_TimeslicedSetPos_d_6__Class** type_info = (::app::TimesliceLigthCanvasSetPosTask_TimeslicedSetPos_d_6__Class**)(modloader::win::memory::resolve_rva(0x047637B0));
    }
    namespace SketchupLayer {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SketchupLayer__Class** type_info = (::app::SketchupLayer__Class**)(modloader::win::memory::resolve_rva(0x047240B0));
    }
    namespace BuildRunningHook {
        IL2CPP_MODLOADER_DLLEXPORT ::app::BuildRunningHook__Class** type_info = (::app::BuildRunningHook__Class**)(modloader::win::memory::resolve_rva(0x0474C960));
    }
    namespace FrameCaptureTester_AgentOutput {
        IL2CPP_MODLOADER_DLLEXPORT ::app::FrameCaptureTester_AgentOutput__Class** type_info = (::app::FrameCaptureTester_AgentOutput__Class**)(modloader::win::memory::resolve_rva(0x047279E8));
    }
    namespace FrameCaptureTester_FrameCaptureTestType__Enum {
        IL2CPP_MODLOADER_DLLEXPORT ::app::FrameCaptureTester_FrameCaptureTestType__Enum__Class** type_info = (::app::FrameCaptureTester_FrameCaptureTestType__Enum__Class**)(modloader::win::memory::resolve_rva(0x0475FBB8));
    }
    namespace FrameCaptureTester {
        IL2CPP_MODLOADER_DLLEXPORT ::app::FrameCaptureTester__Class** type_info = (::app::FrameCaptureTester__Class**)(modloader::win::memory::resolve_rva(0x047972E0));
    }
    namespace IFrameCaptureAgent {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IFrameCaptureAgent__Class** type_info = (::app::IFrameCaptureAgent__Class**)(modloader::win::memory::resolve_rva(0x04739828));
    }
    namespace CameraFrustumDataCaptureAgent {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CameraFrustumDataCaptureAgent__Class** type_info = (::app::CameraFrustumDataCaptureAgent__Class**)(modloader::win::memory::resolve_rva(0x04781DD8));
    }
    namespace CleanupCaptureAgent {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CleanupCaptureAgent__Class** type_info = (::app::CleanupCaptureAgent__Class**)(modloader::win::memory::resolve_rva(0x04714458));
    }
    namespace DrawCallCountCaptureAgent {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DrawCallCountCaptureAgent__Class** type_info = (::app::DrawCallCountCaptureAgent__Class**)(modloader::win::memory::resolve_rva(0x0476ABF8));
    }
    namespace DRSCaptureAgent {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DRSCaptureAgent__Class** type_info = (::app::DRSCaptureAgent__Class**)(modloader::win::memory::resolve_rva(0x04762530));
    }
    namespace EntityDataCaptureAgent {
        IL2CPP_MODLOADER_DLLEXPORT ::app::EntityDataCaptureAgent__Class** type_info = (::app::EntityDataCaptureAgent__Class**)(modloader::win::memory::resolve_rva(0x047144E8));
    }
    namespace ExceptionCaptureAgent {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ExceptionCaptureAgent__Class** type_info = (::app::ExceptionCaptureAgent__Class**)(modloader::win::memory::resolve_rva(0x04772CE8));
    }
    namespace FrameTimeCaptureAgent {
        IL2CPP_MODLOADER_DLLEXPORT ::app::FrameTimeCaptureAgent__Class** type_info = (::app::FrameTimeCaptureAgent__Class**)(modloader::win::memory::resolve_rva(0x04791448));
    }
    namespace LightCaptureAgent {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LightCaptureAgent__Class** type_info = (::app::LightCaptureAgent__Class**)(modloader::win::memory::resolve_rva(0x0475A750));
    }
    namespace MemoryCaptureAgent {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MemoryCaptureAgent__Class** type_info = (::app::MemoryCaptureAgent__Class**)(modloader::win::memory::resolve_rva(0x04724B40));
    }
    namespace MemoryManagerCaptureAgent {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MemoryManagerCaptureAgent__Class** type_info = (::app::MemoryManagerCaptureAgent__Class**)(modloader::win::memory::resolve_rva(0x04796500));
    }
    namespace ObjectInstantiationCaptureAgent {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ObjectInstantiationCaptureAgent__Class** type_info = (::app::ObjectInstantiationCaptureAgent__Class**)(modloader::win::memory::resolve_rva(0x04730538));
    }
    namespace ObjectProfilingCaptureAgent {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ObjectProfilingCaptureAgent__Class** type_info = (::app::ObjectProfilingCaptureAgent__Class**)(modloader::win::memory::resolve_rva(0x04751D48));
    }
    namespace PlayerDataCaptureAgent {
        IL2CPP_MODLOADER_DLLEXPORT ::app::PlayerDataCaptureAgent__Class** type_info = (::app::PlayerDataCaptureAgent__Class**)(modloader::win::memory::resolve_rva(0x0478B9A8));
    }
    namespace PoolCaptureAgent {
        IL2CPP_MODLOADER_DLLEXPORT ::app::PoolCaptureAgent__Class** type_info = (::app::PoolCaptureAgent__Class**)(modloader::win::memory::resolve_rva(0x047997F0));
    }
    namespace SceneDataCaptureAgent {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SceneDataCaptureAgent__Class** type_info = (::app::SceneDataCaptureAgent__Class**)(modloader::win::memory::resolve_rva(0x04739500));
    }
    namespace SceneLoadingCaptureAgent {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SceneLoadingCaptureAgent__Class** type_info = (::app::SceneLoadingCaptureAgent__Class**)(modloader::win::memory::resolve_rva(0x0470CE90));
    }
    namespace StressTestDataCaptureAgent {
        IL2CPP_MODLOADER_DLLEXPORT ::app::StressTestDataCaptureAgent__Class** type_info = (::app::StressTestDataCaptureAgent__Class**)(modloader::win::memory::resolve_rva(0x04782680));
    }
    namespace StressTester_TesterState__Enum {
        IL2CPP_MODLOADER_DLLEXPORT ::app::StressTester_TesterState__Enum__Class** type_info = (::app::StressTester_TesterState__Enum__Class**)(modloader::win::memory::resolve_rva(0x04749570));
    }
    namespace StressTester {
        IL2CPP_MODLOADER_DLLEXPORT ::app::StressTester__Class** type_info = (::app::StressTester__Class**)(modloader::win::memory::resolve_rva(0x04733568));
    }
    namespace IStressTest {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IStressTest__Class** type_info = (::app::IStressTest__Class**)(modloader::win::memory::resolve_rva(0x04778190));
    }
    namespace StressTester_c_DisplayClass134_0 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::StressTester_c_DisplayClass134_0__Class** type_info = (::app::StressTester_c_DisplayClass134_0__Class**)(modloader::win::memory::resolve_rva(0x0471B7D0));
    }
    namespace StressTester_c {
        IL2CPP_MODLOADER_DLLEXPORT ::app::StressTester_c__Class** type_info = (::app::StressTester_c__Class**)(modloader::win::memory::resolve_rva(0x04763DA8));
    }
    namespace StressTester_StartTestFromScene_d_134 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::StressTester_StartTestFromScene_d_134__Class** type_info = (::app::StressTester_StartTestFromScene_d_134__Class**)(modloader::win::memory::resolve_rva(0x04702D78));
    }
    namespace StressTester_c_DisplayClass146_0 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::StressTester_c_DisplayClass146_0__Class** type_info = (::app::StressTester_c_DisplayClass146_0__Class**)(modloader::win::memory::resolve_rva(0x04713858));
    }
    namespace StressTester_RecordScreenshot_d_171 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::StressTester_RecordScreenshot_d_171__Class** type_info = (::app::StressTester_RecordScreenshot_d_171__Class**)(modloader::win::memory::resolve_rva(0x04751520));
    }
    namespace StressTestPlaylist {
        IL2CPP_MODLOADER_DLLEXPORT ::app::StressTestPlaylist__Class** type_info = (::app::StressTestPlaylist__Class**)(modloader::win::memory::resolve_rva(0x0477F7E0));
    }
    namespace GameController_ProfilingConfiguration__Enum {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GameController_ProfilingConfiguration__Enum__Class** type_info = (::app::GameController_ProfilingConfiguration__Enum__Class**)(modloader::win::memory::resolve_rva(0x04732308));
    }
    namespace ExceptionsTest_c {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ExceptionsTest_c__Class** type_info = (::app::ExceptionsTest_c__Class**)(modloader::win::memory::resolve_rva(0x0476B588));
    }
    namespace ExceptionsTest_StartExceptionsTest_d_15 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ExceptionsTest_StartExceptionsTest_d_15__Class** type_info = (::app::ExceptionsTest_StartExceptionsTest_d_15__Class**)(modloader::win::memory::resolve_rva(0x04771008));
    }
} // namespace app::classes::types
