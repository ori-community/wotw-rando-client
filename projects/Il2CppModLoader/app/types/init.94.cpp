#include <Il2CppModLoader/windows_api/memory.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/app/types/TelemetryComunicator.h>
#include <Il2CppModLoader/app/types/TelemetryComunicator_c.h>
#include <Il2CppModLoader/app/types/TelemetryTimelineScene.h>
#include <Il2CppModLoader/app/types/DrawingContext.h>
#include <Il2CppModLoader/app/types/DataPointIcon_Icons_AssetDatabaseTexture.h>
#include <Il2CppModLoader/app/types/IProfilingSetting.h>
#include <Il2CppModLoader/app/types/ProfilingSettings_SettingType__Enum__Array__Array.h>
#include <Il2CppModLoader/app/types/ProfilingSettings_BulkSettings.h>
#include <Il2CppModLoader/app/types/ProfilingSettings.h>
#include <Il2CppModLoader/app/types/ProfilingSettings_Setting.h>
#include <Il2CppModLoader/app/types/ProfilingSettings_Setting__Array.h>
#include <Il2CppModLoader/app/types/ProfilingSettings_c.h>
#include <Il2CppModLoader/app/types/ProfilingSettings_c_DisplayClass18_0.h>
#include <Il2CppModLoader/app/types/ReportCommentsContainer.h>
#include <Il2CppModLoader/app/types/DataBundle.h>
#include <Il2CppModLoader/app/types/ReportMetadata.h>
#include <Il2CppModLoader/app/types/GLHelper.h>
#include <Il2CppModLoader/app/types/MemoryOverlay.h>
#include <Il2CppModLoader/app/types/MemoryOverlay_c.h>
#include <Il2CppModLoader/app/types/GPUAutoProfilerReport.h>
#include <Il2CppModLoader/app/types/GPUAutoProfilerReport_ReportSampleEntry.h>
#include <Il2CppModLoader/app/types/GPUAutoProfilerReport_ReportBaselineData.h>
#include <Il2CppModLoader/app/types/GPUAutoProfiler_ProfilerState__Enum.h>
#include <Il2CppModLoader/app/types/GPUAutoProfiler.h>
#include <Il2CppModLoader/app/types/GPUAutoProfiler_Sample_SamplingState__Enum.h>
#include <Il2CppModLoader/app/types/GPUAutoProfiler_Sample.h>
#include <Il2CppModLoader/app/types/GPUAutoProfiler_BaselineMeasurementHandler.h>
#include <Il2CppModLoader/app/types/GPUAutoProfiler_LightSpeedMeasurementHandler.h>
#include <Il2CppModLoader/app/types/GPUAutoProfiler_FasterThanLightSpeedMeasurementHandler.h>
#include <Il2CppModLoader/app/types/GPUAutoProfiler_SamplingHandler.h>
#include <Il2CppModLoader/app/types/GPUAutoProfiler_SamplingHandler_c.h>
#include <Il2CppModLoader/app/types/GPUAutoProfilerReportRenderer.h>
#include <Il2CppModLoader/app/types/GPUProfilingMode.h>
#include <Il2CppModLoader/app/types/MoonEffectsWispsInstantionHandler.h>
#include <Il2CppModLoader/app/types/MoonEffectWisps.h>
#include <Il2CppModLoader/app/types/HPerfTestResult.h>
#include <Il2CppModLoader/app/types/HPerfTestResult__Array.h>
#include <Il2CppModLoader/app/types/HierarchyPerformanceTester_Old_HPerfTestResultComparer.h>
#include <Il2CppModLoader/app/types/HierarchyTestBulkOutput.h>
#include <Il2CppModLoader/app/types/HierarchyTestBulkToolData.h>
#include <Il2CppModLoader/app/types/SceneTestData.h>
#include <Il2CppModLoader/app/types/SceneSample.h>
#include <Il2CppModLoader/app/types/HierarchyTestResultAggregator_AggregationType__Enum.h>
#include <Il2CppModLoader/app/types/HierarchyTestResultAggregator.h>
#include <Il2CppModLoader/app/types/HierarchyTestBulkTool_State__Enum.h>
#include <Il2CppModLoader/app/types/HierarchyTestBulkTool.h>
#include <Il2CppModLoader/app/types/HierarchyTester.h>
#include <Il2CppModLoader/app/types/PreparationTask.h>
#include <Il2CppModLoader/app/types/IOptimizationTask.h>
#include <Il2CppModLoader/app/types/FinishTask.h>
#include <Il2CppModLoader/app/types/CompositeTask.h>
#include <Il2CppModLoader/app/types/HierarchyTestOutput.h>
#include <Il2CppModLoader/app/types/SimpleCameraSampler.h>
#include <Il2CppModLoader/app/types/SimpleCameraSampler_c.h>
#include <Il2CppModLoader/app/types/BaselineMeasureTask.h>
#include <Il2CppModLoader/app/types/BaselinePerfAnalyzer.h>
#include <Il2CppModLoader/app/types/MeasureTask.h>
#include <Il2CppModLoader/app/types/IDebugRendererSubscriber.h>
#include <Il2CppModLoader/app/types/DebugRenderer.h>
#include <Il2CppModLoader/app/types/IRenderEntity.h>
#include <Il2CppModLoader/app/types/DebugRenderer_c.h>
#include <Il2CppModLoader/app/types/LineEntity.h>
#include <Il2CppModLoader/app/types/ArtOptimizer.h>
#include <Il2CppModLoader/app/types/OptimizationCache.h>
#include <Il2CppModLoader/app/types/PreparationTask_1.h>
#include <Il2CppModLoader/app/types/ArtOptimizer_c.h>
#include <Il2CppModLoader/app/types/ArtOptimizerDataContainer_c_DisplayClass18_0.h>
#include <Il2CppModLoader/app/types/ArtOptimizerDataContainer_c_DisplayClass18_1.h>
#include <Il2CppModLoader/app/types/ArtOptimizerDataContainer_c.h>
#include <Il2CppModLoader/app/types/SerializableUberShaderWrapperComparer.h>
#include <Il2CppModLoader/app/types/SerializableUberSaderModifierWrapperComparer.h>
#include <Il2CppModLoader/app/types/CameraSampler.h>
#include <Il2CppModLoader/app/types/CameraSampler_c.h>
#include <Il2CppModLoader/app/types/ColorPixelArray.h>
#include <Il2CppModLoader/app/types/OptimizationCache_c.h>
#include <Il2CppModLoader/app/types/AnimationSample.h>
#include <Il2CppModLoader/app/types/ZeroEnergySample.h>
#include <Il2CppModLoader/app/types/OneEnergySample.h>
#include <Il2CppModLoader/app/types/SampleComparer.h>
#include <Il2CppModLoader/app/types/AnimationModifierSampleTask.h>
#include <Il2CppModLoader/app/types/AnimationSampleUberShaderTask.h>
#include <Il2CppModLoader/app/types/FrameDelayTask.h>
#include <Il2CppModLoader/app/types/ModifierSampleTask.h>
#include <Il2CppModLoader/app/types/ResolutionPreset.h>
#include <Il2CppModLoader/app/types/RebindAllUberShadersTask.h>
#include <Il2CppModLoader/app/types/SampleUberShaderTask.h>
#include <Il2CppModLoader/app/types/SceneSampleTask.h>
#include <Il2CppModLoader/app/types/Button_c.h>
#include <Il2CppModLoader/app/types/BitmapFontChar_1.h>
#include <Il2CppModLoader/app/types/MessageBox_c_1.h>
#include <Il2CppModLoader/app/types/MoonIconRenderer_c_1.h>
#include <Il2CppModLoader/app/types/MoonTextMeshRenderer_1.h>
#include <Il2CppModLoader/app/types/TextMeshRenderer_1.h>
#include <Il2CppModLoader/app/types/TextRenderer_1__Array.h>
#include <Il2CppModLoader/app/types/WindowManager_1.h>
#include <Il2CppModLoader/app/types/PlayerStateMap_Mapping.h>
#include <Il2CppModLoader/app/types/PlayerUberStateAbilities_c.h>
#include <Il2CppModLoader/app/types/PlayerUberStateAreaMapInformation_c.h>
#include <Il2CppModLoader/app/types/PlayerUberStateGeneral_c.h>
#include <Il2CppModLoader/app/types/PlayerUberStateHoldables_c.h>

namespace app::classes::types {
    namespace TelemetryComunicator { IL2CPP_MODLOADER_DLLEXPORT ::app::TelemetryComunicator__Class** type_info = (::app::TelemetryComunicator__Class**)(modloader::win::memory::resolve_rva(0x04732858)); }
    namespace TelemetryComunicator_c { IL2CPP_MODLOADER_DLLEXPORT ::app::TelemetryComunicator_c__Class** type_info = (::app::TelemetryComunicator_c__Class**)(modloader::win::memory::resolve_rva(0x04739B28)); }
    namespace TelemetryTimelineScene { IL2CPP_MODLOADER_DLLEXPORT ::app::TelemetryTimelineScene__Class** type_info = (::app::TelemetryTimelineScene__Class**)(modloader::win::memory::resolve_rva(0x047757B8)); }
    namespace DrawingContext { IL2CPP_MODLOADER_DLLEXPORT ::app::DrawingContext__Class** type_info = (::app::DrawingContext__Class**)(modloader::win::memory::resolve_rva(0x0478D1B0)); }
    namespace DataPointIcon_Icons_AssetDatabaseTexture { IL2CPP_MODLOADER_DLLEXPORT ::app::DataPointIcon_Icons_AssetDatabaseTexture__Class** type_info = (::app::DataPointIcon_Icons_AssetDatabaseTexture__Class**)(modloader::win::memory::resolve_rva(0x0470E868)); }
    namespace IProfilingSetting { IL2CPP_MODLOADER_DLLEXPORT ::app::IProfilingSetting__Class** type_info = (::app::IProfilingSetting__Class**)(modloader::win::memory::resolve_rva(0x0474C508)); }
    namespace ProfilingSettings_SettingType__Enum__Array__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::ProfilingSettings_SettingType__Enum__Array__Array__Class** type_info = (::app::ProfilingSettings_SettingType__Enum__Array__Array__Class**)(modloader::win::memory::resolve_rva(0x0476FC60)); }
    namespace ProfilingSettings_BulkSettings { IL2CPP_MODLOADER_DLLEXPORT ::app::ProfilingSettings_BulkSettings__Class** type_info = (::app::ProfilingSettings_BulkSettings__Class**)(modloader::win::memory::resolve_rva(0x047876F0)); }
    namespace ProfilingSettings { IL2CPP_MODLOADER_DLLEXPORT ::app::ProfilingSettings__Class** type_info = (::app::ProfilingSettings__Class**)(modloader::win::memory::resolve_rva(0x0474A270)); }
    namespace ProfilingSettings_Setting { IL2CPP_MODLOADER_DLLEXPORT ::app::ProfilingSettings_Setting__Class** type_info = (::app::ProfilingSettings_Setting__Class**)(modloader::win::memory::resolve_rva(0x04735660)); }
    namespace ProfilingSettings_Setting__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::ProfilingSettings_Setting__Array__Class** type_info = (::app::ProfilingSettings_Setting__Array__Class**)(modloader::win::memory::resolve_rva(0x0472C670)); }
    namespace ProfilingSettings_c { IL2CPP_MODLOADER_DLLEXPORT ::app::ProfilingSettings_c__Class** type_info = (::app::ProfilingSettings_c__Class**)(modloader::win::memory::resolve_rva(0x04708390)); }
    namespace ProfilingSettings_c_DisplayClass18_0 { IL2CPP_MODLOADER_DLLEXPORT ::app::ProfilingSettings_c_DisplayClass18_0__Class** type_info = (::app::ProfilingSettings_c_DisplayClass18_0__Class**)(modloader::win::memory::resolve_rva(0x04745700)); }
    namespace ReportCommentsContainer { IL2CPP_MODLOADER_DLLEXPORT ::app::ReportCommentsContainer__Class** type_info = (::app::ReportCommentsContainer__Class**)(modloader::win::memory::resolve_rva(0x04790670)); }
    namespace DataBundle { IL2CPP_MODLOADER_DLLEXPORT ::app::DataBundle__Class** type_info = (::app::DataBundle__Class**)(modloader::win::memory::resolve_rva(0x04757028)); }
    namespace ReportMetadata { IL2CPP_MODLOADER_DLLEXPORT ::app::ReportMetadata__Class** type_info = (::app::ReportMetadata__Class**)(modloader::win::memory::resolve_rva(0x0475B988)); }
    namespace GLHelper { IL2CPP_MODLOADER_DLLEXPORT ::app::GLHelper__Class** type_info = (::app::GLHelper__Class**)(modloader::win::memory::resolve_rva(0x0476B698)); }
    namespace MemoryOverlay { IL2CPP_MODLOADER_DLLEXPORT ::app::MemoryOverlay__Class** type_info = (::app::MemoryOverlay__Class**)(modloader::win::memory::resolve_rva(0x04752C80)); }
    namespace MemoryOverlay_c { IL2CPP_MODLOADER_DLLEXPORT ::app::MemoryOverlay_c__Class** type_info = (::app::MemoryOverlay_c__Class**)(modloader::win::memory::resolve_rva(0x047738B0)); }
    namespace GPUAutoProfilerReport { IL2CPP_MODLOADER_DLLEXPORT ::app::GPUAutoProfilerReport__Class** type_info = (::app::GPUAutoProfilerReport__Class**)(modloader::win::memory::resolve_rva(0x04765E30)); }
    namespace GPUAutoProfilerReport_ReportSampleEntry { IL2CPP_MODLOADER_DLLEXPORT ::app::GPUAutoProfilerReport_ReportSampleEntry__Class** type_info = (::app::GPUAutoProfilerReport_ReportSampleEntry__Class**)(modloader::win::memory::resolve_rva(0x047230F8)); }
    namespace GPUAutoProfilerReport_ReportBaselineData { IL2CPP_MODLOADER_DLLEXPORT ::app::GPUAutoProfilerReport_ReportBaselineData__Class** type_info = (::app::GPUAutoProfilerReport_ReportBaselineData__Class**)(modloader::win::memory::resolve_rva(0x0473D9A0)); }
    namespace GPUAutoProfiler_ProfilerState__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::GPUAutoProfiler_ProfilerState__Enum__Class** type_info = (::app::GPUAutoProfiler_ProfilerState__Enum__Class**)(modloader::win::memory::resolve_rva(0x04701860)); }
    namespace GPUAutoProfiler { IL2CPP_MODLOADER_DLLEXPORT ::app::GPUAutoProfiler__Class** type_info = (::app::GPUAutoProfiler__Class**)(modloader::win::memory::resolve_rva(0x04726F70)); }
    namespace GPUAutoProfiler_Sample_SamplingState__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::GPUAutoProfiler_Sample_SamplingState__Enum__Class** type_info = (::app::GPUAutoProfiler_Sample_SamplingState__Enum__Class**)(modloader::win::memory::resolve_rva(0x047199B0)); }
    namespace GPUAutoProfiler_Sample { IL2CPP_MODLOADER_DLLEXPORT ::app::GPUAutoProfiler_Sample__Class** type_info = (::app::GPUAutoProfiler_Sample__Class**)(modloader::win::memory::resolve_rva(0x0472BC28)); }
    namespace GPUAutoProfiler_BaselineMeasurementHandler { IL2CPP_MODLOADER_DLLEXPORT ::app::GPUAutoProfiler_BaselineMeasurementHandler__Class** type_info = (::app::GPUAutoProfiler_BaselineMeasurementHandler__Class**)(modloader::win::memory::resolve_rva(0x047656E0)); }
    namespace GPUAutoProfiler_LightSpeedMeasurementHandler { IL2CPP_MODLOADER_DLLEXPORT ::app::GPUAutoProfiler_LightSpeedMeasurementHandler__Class** type_info = (::app::GPUAutoProfiler_LightSpeedMeasurementHandler__Class**)(modloader::win::memory::resolve_rva(0x0472E9D8)); }
    namespace GPUAutoProfiler_FasterThanLightSpeedMeasurementHandler { IL2CPP_MODLOADER_DLLEXPORT ::app::GPUAutoProfiler_FasterThanLightSpeedMeasurementHandler__Class** type_info = (::app::GPUAutoProfiler_FasterThanLightSpeedMeasurementHandler__Class**)(modloader::win::memory::resolve_rva(0x0478F288)); }
    namespace GPUAutoProfiler_SamplingHandler { IL2CPP_MODLOADER_DLLEXPORT ::app::GPUAutoProfiler_SamplingHandler__Class** type_info = (::app::GPUAutoProfiler_SamplingHandler__Class**)(modloader::win::memory::resolve_rva(0x0474C398)); }
    namespace GPUAutoProfiler_SamplingHandler_c { IL2CPP_MODLOADER_DLLEXPORT ::app::GPUAutoProfiler_SamplingHandler_c__Class** type_info = (::app::GPUAutoProfiler_SamplingHandler_c__Class**)(modloader::win::memory::resolve_rva(0x04722EA0)); }
    namespace GPUAutoProfilerReportRenderer { IL2CPP_MODLOADER_DLLEXPORT ::app::GPUAutoProfilerReportRenderer__Class** type_info = (::app::GPUAutoProfilerReportRenderer__Class**)(modloader::win::memory::resolve_rva(0x0478A5E0)); }
    namespace GPUProfilingMode { IL2CPP_MODLOADER_DLLEXPORT ::app::GPUProfilingMode__Class** type_info = (::app::GPUProfilingMode__Class**)(modloader::win::memory::resolve_rva(0x0470C888)); }
    namespace MoonEffectsWispsInstantionHandler { IL2CPP_MODLOADER_DLLEXPORT ::app::MoonEffectsWispsInstantionHandler__Class** type_info = (::app::MoonEffectsWispsInstantionHandler__Class**)(modloader::win::memory::resolve_rva(0x04772C88)); }
    namespace MoonEffectWisps { IL2CPP_MODLOADER_DLLEXPORT ::app::MoonEffectWisps__Class** type_info = (::app::MoonEffectWisps__Class**)(modloader::win::memory::resolve_rva(0x04769650)); }
    namespace HPerfTestResult { IL2CPP_MODLOADER_DLLEXPORT ::app::HPerfTestResult__Class** type_info = (::app::HPerfTestResult__Class**)(modloader::win::memory::resolve_rva(0x04758A78)); }
    namespace HPerfTestResult__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::HPerfTestResult__Array__Class** type_info = (::app::HPerfTestResult__Array__Class**)(modloader::win::memory::resolve_rva(0x0476FF38)); }
    namespace HierarchyPerformanceTester_Old_HPerfTestResultComparer { IL2CPP_MODLOADER_DLLEXPORT ::app::HierarchyPerformanceTester_Old_HPerfTestResultComparer__Class** type_info = (::app::HierarchyPerformanceTester_Old_HPerfTestResultComparer__Class**)(modloader::win::memory::resolve_rva(0x0472CCE8)); }
    namespace HierarchyTestBulkOutput { IL2CPP_MODLOADER_DLLEXPORT ::app::HierarchyTestBulkOutput__Class** type_info = (::app::HierarchyTestBulkOutput__Class**)(modloader::win::memory::resolve_rva(0x04723478)); }
    namespace HierarchyTestBulkToolData { IL2CPP_MODLOADER_DLLEXPORT ::app::HierarchyTestBulkToolData__Class** type_info = (::app::HierarchyTestBulkToolData__Class**)(modloader::win::memory::resolve_rva(0x04740658)); }
    namespace SceneTestData { IL2CPP_MODLOADER_DLLEXPORT ::app::SceneTestData__Class** type_info = (::app::SceneTestData__Class**)(modloader::win::memory::resolve_rva(0x04773B80)); }
    namespace SceneSample { IL2CPP_MODLOADER_DLLEXPORT ::app::SceneSample__Class** type_info = (::app::SceneSample__Class**)(modloader::win::memory::resolve_rva(0x047716C8)); }
    namespace HierarchyTestResultAggregator_AggregationType__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::HierarchyTestResultAggregator_AggregationType__Enum__Class** type_info = (::app::HierarchyTestResultAggregator_AggregationType__Enum__Class**)(modloader::win::memory::resolve_rva(0x04790B90)); }
    namespace HierarchyTestResultAggregator { IL2CPP_MODLOADER_DLLEXPORT ::app::HierarchyTestResultAggregator__Class** type_info = (::app::HierarchyTestResultAggregator__Class**)(modloader::win::memory::resolve_rva(0x04755398)); }
    namespace HierarchyTestBulkTool_State__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::HierarchyTestBulkTool_State__Enum__Class** type_info = (::app::HierarchyTestBulkTool_State__Enum__Class**)(modloader::win::memory::resolve_rva(0x0473CEF8)); }
    namespace HierarchyTestBulkTool { IL2CPP_MODLOADER_DLLEXPORT ::app::HierarchyTestBulkTool__Class** type_info = (::app::HierarchyTestBulkTool__Class**)(modloader::win::memory::resolve_rva(0x047740F8)); }
    namespace HierarchyTester { IL2CPP_MODLOADER_DLLEXPORT ::app::HierarchyTester__Class** type_info = (::app::HierarchyTester__Class**)(modloader::win::memory::resolve_rva(0x047597A0)); }
    namespace PreparationTask { IL2CPP_MODLOADER_DLLEXPORT ::app::PreparationTask__Class** type_info = (::app::PreparationTask__Class**)(modloader::win::memory::resolve_rva(0x047222F8)); }
    namespace IOptimizationTask { IL2CPP_MODLOADER_DLLEXPORT ::app::IOptimizationTask__Class** type_info = (::app::IOptimizationTask__Class**)(modloader::win::memory::resolve_rva(0x04765ED8)); }
    namespace FinishTask { IL2CPP_MODLOADER_DLLEXPORT ::app::FinishTask__Class** type_info = (::app::FinishTask__Class**)(modloader::win::memory::resolve_rva(0x04715478)); }
    namespace CompositeTask { IL2CPP_MODLOADER_DLLEXPORT ::app::CompositeTask__Class** type_info = (::app::CompositeTask__Class**)(modloader::win::memory::resolve_rva(0x0471B9F0)); }
    namespace HierarchyTestOutput { IL2CPP_MODLOADER_DLLEXPORT ::app::HierarchyTestOutput__Class** type_info = (::app::HierarchyTestOutput__Class**)(modloader::win::memory::resolve_rva(0x04785508)); }
    namespace SimpleCameraSampler { IL2CPP_MODLOADER_DLLEXPORT ::app::SimpleCameraSampler__Class** type_info = (::app::SimpleCameraSampler__Class**)(modloader::win::memory::resolve_rva(0x047573A0)); }
    namespace SimpleCameraSampler_c { IL2CPP_MODLOADER_DLLEXPORT ::app::SimpleCameraSampler_c__Class** type_info = (::app::SimpleCameraSampler_c__Class**)(modloader::win::memory::resolve_rva(0x04777828)); }
    namespace BaselineMeasureTask { IL2CPP_MODLOADER_DLLEXPORT ::app::BaselineMeasureTask__Class** type_info = (::app::BaselineMeasureTask__Class**)(modloader::win::memory::resolve_rva(0x0471F188)); }
    namespace BaselinePerfAnalyzer { IL2CPP_MODLOADER_DLLEXPORT ::app::BaselinePerfAnalyzer__Class** type_info = (::app::BaselinePerfAnalyzer__Class**)(modloader::win::memory::resolve_rva(0x0470B0E8)); }
    namespace MeasureTask { IL2CPP_MODLOADER_DLLEXPORT ::app::MeasureTask__Class** type_info = (::app::MeasureTask__Class**)(modloader::win::memory::resolve_rva(0x0472D2F8)); }
    namespace IDebugRendererSubscriber { IL2CPP_MODLOADER_DLLEXPORT ::app::IDebugRendererSubscriber__Class** type_info = (::app::IDebugRendererSubscriber__Class**)(modloader::win::memory::resolve_rva(0x047454F8)); }
    namespace DebugRenderer { IL2CPP_MODLOADER_DLLEXPORT ::app::DebugRenderer__Class** type_info = (::app::DebugRenderer__Class**)(modloader::win::memory::resolve_rva(0x047506E8)); }
    namespace IRenderEntity { IL2CPP_MODLOADER_DLLEXPORT ::app::IRenderEntity__Class** type_info = (::app::IRenderEntity__Class**)(modloader::win::memory::resolve_rva(0x047637A0)); }
    namespace DebugRenderer_c { IL2CPP_MODLOADER_DLLEXPORT ::app::DebugRenderer_c__Class** type_info = (::app::DebugRenderer_c__Class**)(modloader::win::memory::resolve_rva(0x0478CC10)); }
    namespace LineEntity { IL2CPP_MODLOADER_DLLEXPORT ::app::LineEntity__Class** type_info = (::app::LineEntity__Class**)(modloader::win::memory::resolve_rva(0x04765460)); }
    namespace ArtOptimizer { IL2CPP_MODLOADER_DLLEXPORT ::app::ArtOptimizer__Class** type_info = (::app::ArtOptimizer__Class**)(modloader::win::memory::resolve_rva(0x0470D400)); }
    namespace OptimizationCache { IL2CPP_MODLOADER_DLLEXPORT ::app::OptimizationCache__Class** type_info = (::app::OptimizationCache__Class**)(modloader::win::memory::resolve_rva(0x04705258)); }
    namespace PreparationTask_1 { IL2CPP_MODLOADER_DLLEXPORT ::app::PreparationTask_1__Class** type_info = (::app::PreparationTask_1__Class**)(modloader::win::memory::resolve_rva(0x0478FDA0)); }
    namespace ArtOptimizer_c { IL2CPP_MODLOADER_DLLEXPORT ::app::ArtOptimizer_c__Class** type_info = (::app::ArtOptimizer_c__Class**)(modloader::win::memory::resolve_rva(0x047499F8)); }
    namespace ArtOptimizerDataContainer_c_DisplayClass18_0 { IL2CPP_MODLOADER_DLLEXPORT ::app::ArtOptimizerDataContainer_c_DisplayClass18_0__Class** type_info = (::app::ArtOptimizerDataContainer_c_DisplayClass18_0__Class**)(modloader::win::memory::resolve_rva(0x047315E0)); }
    namespace ArtOptimizerDataContainer_c_DisplayClass18_1 { IL2CPP_MODLOADER_DLLEXPORT ::app::ArtOptimizerDataContainer_c_DisplayClass18_1__Class** type_info = (::app::ArtOptimizerDataContainer_c_DisplayClass18_1__Class**)(modloader::win::memory::resolve_rva(0x04715C10)); }
    namespace ArtOptimizerDataContainer_c { IL2CPP_MODLOADER_DLLEXPORT ::app::ArtOptimizerDataContainer_c__Class** type_info = (::app::ArtOptimizerDataContainer_c__Class**)(modloader::win::memory::resolve_rva(0x04741298)); }
    namespace SerializableUberShaderWrapperComparer { IL2CPP_MODLOADER_DLLEXPORT ::app::SerializableUberShaderWrapperComparer__Class** type_info = (::app::SerializableUberShaderWrapperComparer__Class**)(modloader::win::memory::resolve_rva(0x04791290)); }
    namespace SerializableUberSaderModifierWrapperComparer { IL2CPP_MODLOADER_DLLEXPORT ::app::SerializableUberSaderModifierWrapperComparer__Class** type_info = (::app::SerializableUberSaderModifierWrapperComparer__Class**)(modloader::win::memory::resolve_rva(0x0476FC48)); }
    namespace CameraSampler { IL2CPP_MODLOADER_DLLEXPORT ::app::CameraSampler__Class** type_info = (::app::CameraSampler__Class**)(modloader::win::memory::resolve_rva(0x0475B1F0)); }
    namespace CameraSampler_c { IL2CPP_MODLOADER_DLLEXPORT ::app::CameraSampler_c__Class** type_info = (::app::CameraSampler_c__Class**)(modloader::win::memory::resolve_rva(0x0474F2D0)); }
    namespace ColorPixelArray { IL2CPP_MODLOADER_DLLEXPORT ::app::ColorPixelArray__Class** type_info = (::app::ColorPixelArray__Class**)(modloader::win::memory::resolve_rva(0x047693F0)); }
    namespace OptimizationCache_c { IL2CPP_MODLOADER_DLLEXPORT ::app::OptimizationCache_c__Class** type_info = (::app::OptimizationCache_c__Class**)(modloader::win::memory::resolve_rva(0x04738388)); }
    namespace AnimationSample { IL2CPP_MODLOADER_DLLEXPORT ::app::AnimationSample__Class** type_info = (::app::AnimationSample__Class**)(modloader::win::memory::resolve_rva(0x047009F8)); }
    namespace ZeroEnergySample { IL2CPP_MODLOADER_DLLEXPORT ::app::ZeroEnergySample__Class** type_info = (::app::ZeroEnergySample__Class**)(modloader::win::memory::resolve_rva(0x0470B780)); }
    namespace OneEnergySample { IL2CPP_MODLOADER_DLLEXPORT ::app::OneEnergySample__Class** type_info = (::app::OneEnergySample__Class**)(modloader::win::memory::resolve_rva(0x0471F2D0)); }
    namespace SampleComparer { IL2CPP_MODLOADER_DLLEXPORT ::app::SampleComparer__Class** type_info = (::app::SampleComparer__Class**)(modloader::win::memory::resolve_rva(0x0472F730)); }
    namespace AnimationModifierSampleTask { IL2CPP_MODLOADER_DLLEXPORT ::app::AnimationModifierSampleTask__Class** type_info = (::app::AnimationModifierSampleTask__Class**)(modloader::win::memory::resolve_rva(0x0471AA00)); }
    namespace AnimationSampleUberShaderTask { IL2CPP_MODLOADER_DLLEXPORT ::app::AnimationSampleUberShaderTask__Class** type_info = (::app::AnimationSampleUberShaderTask__Class**)(modloader::win::memory::resolve_rva(0x0477A000)); }
    namespace FrameDelayTask { IL2CPP_MODLOADER_DLLEXPORT ::app::FrameDelayTask__Class** type_info = (::app::FrameDelayTask__Class**)(modloader::win::memory::resolve_rva(0x0473B8D8)); }
    namespace ModifierSampleTask { IL2CPP_MODLOADER_DLLEXPORT ::app::ModifierSampleTask__Class** type_info = (::app::ModifierSampleTask__Class**)(modloader::win::memory::resolve_rva(0x0471C9C8)); }
    namespace ResolutionPreset { IL2CPP_MODLOADER_DLLEXPORT ::app::ResolutionPreset__Class** type_info = (::app::ResolutionPreset__Class**)(modloader::win::memory::resolve_rva(0x04770638)); }
    namespace RebindAllUberShadersTask { IL2CPP_MODLOADER_DLLEXPORT ::app::RebindAllUberShadersTask__Class** type_info = (::app::RebindAllUberShadersTask__Class**)(modloader::win::memory::resolve_rva(0x04748E90)); }
    namespace SampleUberShaderTask { IL2CPP_MODLOADER_DLLEXPORT ::app::SampleUberShaderTask__Class** type_info = (::app::SampleUberShaderTask__Class**)(modloader::win::memory::resolve_rva(0x04700CA8)); }
    namespace SceneSampleTask { IL2CPP_MODLOADER_DLLEXPORT ::app::SceneSampleTask__Class** type_info = (::app::SceneSampleTask__Class**)(modloader::win::memory::resolve_rva(0x0470B648)); }
    namespace Button_c { IL2CPP_MODLOADER_DLLEXPORT ::app::Button_c__Class** type_info = (::app::Button_c__Class**)(modloader::win::memory::resolve_rva(0x04787828)); }
    namespace BitmapFontChar_1 { IL2CPP_MODLOADER_DLLEXPORT ::app::BitmapFontChar_1__Class** type_info = (::app::BitmapFontChar_1__Class**)(modloader::win::memory::resolve_rva(0x0474B588)); }
    namespace MessageBox_c_1 { IL2CPP_MODLOADER_DLLEXPORT ::app::MessageBox_c_1__Class** type_info = (::app::MessageBox_c_1__Class**)(modloader::win::memory::resolve_rva(0x0473D3F0)); }
    namespace MoonIconRenderer_c_1 { IL2CPP_MODLOADER_DLLEXPORT ::app::MoonIconRenderer_c_1__Class** type_info = (::app::MoonIconRenderer_c_1__Class**)(modloader::win::memory::resolve_rva(0x0477D538)); }
    namespace MoonTextMeshRenderer_1 { IL2CPP_MODLOADER_DLLEXPORT ::app::MoonTextMeshRenderer_1__Class** type_info = (::app::MoonTextMeshRenderer_1__Class**)(modloader::win::memory::resolve_rva(0x04740F70)); }
    namespace TextMeshRenderer_1 { IL2CPP_MODLOADER_DLLEXPORT ::app::TextMeshRenderer_1__Class** type_info = (::app::TextMeshRenderer_1__Class**)(modloader::win::memory::resolve_rva(0x0474D8A0)); }
    namespace TextRenderer_1__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::TextRenderer_1__Array__Class** type_info = (::app::TextRenderer_1__Array__Class**)(modloader::win::memory::resolve_rva(0x047975D0)); }
    namespace WindowManager_1 { IL2CPP_MODLOADER_DLLEXPORT ::app::WindowManager_1__Class** type_info = (::app::WindowManager_1__Class**)(modloader::win::memory::resolve_rva(0x04770030)); }
    namespace PlayerStateMap_Mapping { IL2CPP_MODLOADER_DLLEXPORT ::app::PlayerStateMap_Mapping__Class** type_info = (::app::PlayerStateMap_Mapping__Class**)(modloader::win::memory::resolve_rva(0x04702160)); }
    namespace PlayerUberStateAbilities_c { IL2CPP_MODLOADER_DLLEXPORT ::app::PlayerUberStateAbilities_c__Class** type_info = (::app::PlayerUberStateAbilities_c__Class**)(modloader::win::memory::resolve_rva(0x04784DC0)); }
    namespace PlayerUberStateAreaMapInformation_c { IL2CPP_MODLOADER_DLLEXPORT ::app::PlayerUberStateAreaMapInformation_c__Class** type_info = (::app::PlayerUberStateAreaMapInformation_c__Class**)(modloader::win::memory::resolve_rva(0x047952D0)); }
    namespace PlayerUberStateGeneral_c { IL2CPP_MODLOADER_DLLEXPORT ::app::PlayerUberStateGeneral_c__Class** type_info = (::app::PlayerUberStateGeneral_c__Class**)(modloader::win::memory::resolve_rva(0x0476E7C8)); }
    namespace PlayerUberStateHoldables_c { IL2CPP_MODLOADER_DLLEXPORT ::app::PlayerUberStateHoldables_c__Class** type_info = (::app::PlayerUberStateHoldables_c__Class**)(modloader::win::memory::resolve_rva(0x0472C4C8)); }
}
