#include <Il2CppModLoader/app/types/AssemblyBridge.h>
#include <Il2CppModLoader/app/types/BipedIKSolvers.h>
#include <Il2CppModLoader/app/types/BipedLimbOrientations.h>
#include <Il2CppModLoader/app/types/BipedLimbOrientations_LimbOrientation.h>
#include <Il2CppModLoader/app/types/BipedReferences.h>
#include <Il2CppModLoader/app/types/BulletHole_DestroyDelayed_d_2.h>
#include <Il2CppModLoader/app/types/Button_OnFinishSubmit_c_Iterator0.h>
#include <Il2CppModLoader/app/types/CanvasUpdateRegistry.h>
#include <Il2CppModLoader/app/types/ClipperRegistry.h>
#include <Il2CppModLoader/app/types/DrivableGroup.h>
#include <Il2CppModLoader/app/types/Dropdown.h>
#include <Il2CppModLoader/app/types/Dropdown_DelayedDestroyDropdownList_c_Iterator0.h>
#include <Il2CppModLoader/app/types/Dropdown_DropdownEvent.h>
#include <Il2CppModLoader/app/types/Dropdown_OptionData.h>
#include <Il2CppModLoader/app/types/Dropdown_OptionDataList.h>
#include <Il2CppModLoader/app/types/Dropdown_Show_c_AnonStorey1.h>
#include <Il2CppModLoader/app/types/FontData.h>
#include <Il2CppModLoader/app/types/FrameProfiler.h>
#include <Il2CppModLoader/app/types/FrameProfiler_FrameData.h>
#include <Il2CppModLoader/app/types/FrameProfiler_FrameData__Array.h>
#include <Il2CppModLoader/app/types/FrameProfiler_FrameSample.h>
#include <Il2CppModLoader/app/types/FrameProfiler_FrameSample__Array.h>
#include <Il2CppModLoader/app/types/FrameProfiler_MetricInfo.h>
#include <Il2CppModLoader/app/types/FrameProfiler_c_DisplayClass17_0.h>
#include <Il2CppModLoader/app/types/GraphicRaycaster.h>
#include <Il2CppModLoader/app/types/GraphicRegistry.h>
#include <Il2CppModLoader/app/types/ICanvasElement.h>
#include <Il2CppModLoader/app/types/IClippable.h>
#include <Il2CppModLoader/app/types/IClipper.h>
#include <Il2CppModLoader/app/types/IDrivable.h>
#include <Il2CppModLoader/app/types/IDrivableGroup.h>
#include <Il2CppModLoader/app/types/IExplicitFixedUpdateHandler.h>
#include <Il2CppModLoader/app/types/IExplicitLateUpdateHandler.h>
#include <Il2CppModLoader/app/types/IExplicitUpdateHandler.h>
#include <Il2CppModLoader/app/types/IExplicitUpdateHandlerBase.h>
#include <Il2CppModLoader/app/types/IKSolver.h>
#include <Il2CppModLoader/app/types/IKSolverAim.h>
#include <Il2CppModLoader/app/types/IKSolverHeuristic.h>
#include <Il2CppModLoader/app/types/IKSolverLimb.h>
#include <Il2CppModLoader/app/types/IKSolverTrigonometric.h>
#include <Il2CppModLoader/app/types/IKSolver_Bone.h>
#include <Il2CppModLoader/app/types/IKSolver_Bone__Array.h>
#include <Il2CppModLoader/app/types/IKSolver_Point__Array.h>
#include <Il2CppModLoader/app/types/IKSolver_UpdateDelegate.h>
#include <Il2CppModLoader/app/types/ILayoutElement.h>
#include <Il2CppModLoader/app/types/IMoonDriverExecutionOrderMap.h>
#include <Il2CppModLoader/app/types/IUpdateHandler.h>
#include <Il2CppModLoader/app/types/IUpdateHandlerWithExecutionOrderOffset.h>
#include <Il2CppModLoader/app/types/IUpdateWhileDisabled.h>
#include <Il2CppModLoader/app/types/Image.h>
#include <Il2CppModLoader/app/types/InputField.h>
#include <Il2CppModLoader/app/types/InputField_CaretBlink_c_Iterator0.h>
#include <Il2CppModLoader/app/types/InputField_ContentType__Enum__Array.h>
#include <Il2CppModLoader/app/types/InputField_MouseDragOutsideRect_c_Iterator1.h>
#include <Il2CppModLoader/app/types/InputField_OnChangeEvent.h>
#include <Il2CppModLoader/app/types/InputField_OnValidateInput.h>
#include <Il2CppModLoader/app/types/InputField_SubmitEvent.h>
#include <Il2CppModLoader/app/types/LayoutGroup_DelayedSetDirty_c_Iterator0.h>
#include <Il2CppModLoader/app/types/LayoutRebuilder.h>
#include <Il2CppModLoader/app/types/MaskableGraphic.h>
#include <Il2CppModLoader/app/types/MaskableGraphic_CullStateChangedEvent.h>
#include <Il2CppModLoader/app/types/MetricOutput__Array.h>
#include <Il2CppModLoader/app/types/Metric__Enum.h>
#include <Il2CppModLoader/app/types/Metric__Enum__Array.h>
#include <Il2CppModLoader/app/types/MicroProfiler.h>
#include <Il2CppModLoader/app/types/MicroProfilerDataProvider.h>
#include <Il2CppModLoader/app/types/MicroProfiler_MarkerInfo_FrameFlags__Enum.h>
#include <Il2CppModLoader/app/types/MicroProfiler_MarkerInfo__Array.h>
#include <Il2CppModLoader/app/types/MicroProfiler_MetricStats__Array.h>
#include <Il2CppModLoader/app/types/MicroProfiler_SampleStats.h>
#include <Il2CppModLoader/app/types/MicroProfiler_StatInfo__Array.h>
#include <Il2CppModLoader/app/types/MicroProfiler_c.h>
#include <Il2CppModLoader/app/types/MoonDriver.h>
#include <Il2CppModLoader/app/types/MoonDriverSystem.h>
#include <Il2CppModLoader/app/types/Presentation__Enum.h>
#include <Il2CppModLoader/app/types/RectangularVertexClipper.h>
#include <Il2CppModLoader/app/types/ReflectionMethodsCache.h>
#include <Il2CppModLoader/app/types/ReflectionMethodsCache_GetRayIntersectionAllCallback.h>
#include <Il2CppModLoader/app/types/ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback.h>
#include <Il2CppModLoader/app/types/ReflectionMethodsCache_GetRaycastNonAllocCallback.h>
#include <Il2CppModLoader/app/types/ReflectionMethodsCache_Raycast2DCallback.h>
#include <Il2CppModLoader/app/types/ReflectionMethodsCache_Raycast3DCallback.h>
#include <Il2CppModLoader/app/types/ReflectionMethodsCache_RaycastAllCallback.h>
#include <Il2CppModLoader/app/types/RotationLimitAngle.h>
#include <Il2CppModLoader/app/types/ScrollRect_ScrollRectEvent.h>
#include <Il2CppModLoader/app/types/Scrollbar_ClickRepeat_c_Iterator0.h>
#include <Il2CppModLoader/app/types/Scrollbar_ScrollEvent.h>
#include <Il2CppModLoader/app/types/Slider_SliderEvent.h>
#include <Il2CppModLoader/app/types/Stat__Enum.h>
#include <Il2CppModLoader/app/types/StencilMaterial_MatEntry.h>
#include <Il2CppModLoader/app/types/Text.h>
#include <Il2CppModLoader/app/types/ToggleGroup.h>
#include <Il2CppModLoader/app/types/Toggle_ToggleEvent.h>
#include <Il2CppModLoader/app/types/UpdateManager.h>
#include <Il2CppModLoader/app/types/UpdateManager_ActiveEntryComparer.h>
#include <Il2CppModLoader/app/types/UpdateManager_ExplicitEntry.h>
#include <Il2CppModLoader/app/types/UpdateManager_GenericEntry.h>
#include <Il2CppModLoader/app/types/UpdateManager_UpdatedEntryComparer.h>
#include <Il2CppModLoader/app/types/UpdateManager__Array.h>
#include <Il2CppModLoader/app/types/UpdateManager_c.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Button_OnFinishSubmit_c_Iterator0 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Button_OnFinishSubmit_c_Iterator0__Class** type_info = (::app::Button_OnFinishSubmit_c_Iterator0__Class**)(modloader::win::memory::resolve_rva(0x0471CD38));
    }
    namespace CanvasUpdateRegistry {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CanvasUpdateRegistry__Class** type_info = (::app::CanvasUpdateRegistry__Class**)(modloader::win::memory::resolve_rva(0x0472F578));
    }
    namespace ICanvasElement {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ICanvasElement__Class** type_info = (::app::ICanvasElement__Class**)(modloader::win::memory::resolve_rva(0x047655C8));
    }
    namespace MaskableGraphic {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MaskableGraphic__Class** type_info = (::app::MaskableGraphic__Class**)(modloader::win::memory::resolve_rva(0x04799748));
    }
    namespace Text {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Text__Class** type_info = (::app::Text__Class**)(modloader::win::memory::resolve_rva(0x04798E98));
    }
    namespace RectangularVertexClipper {
        IL2CPP_MODLOADER_DLLEXPORT ::app::RectangularVertexClipper__Class** type_info = (::app::RectangularVertexClipper__Class**)(modloader::win::memory::resolve_rva(0x047540E0));
    }
    namespace IClippable {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IClippable__Class** type_info = (::app::IClippable__Class**)(modloader::win::memory::resolve_rva(0x0478E4A0));
    }
    namespace MaskableGraphic_CullStateChangedEvent {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MaskableGraphic_CullStateChangedEvent__Class** type_info = (::app::MaskableGraphic_CullStateChangedEvent__Class**)(modloader::win::memory::resolve_rva(0x0473D410));
    }
    namespace FontData {
        IL2CPP_MODLOADER_DLLEXPORT ::app::FontData__Class** type_info = (::app::FontData__Class**)(modloader::win::memory::resolve_rva(0x04799650));
    }
    namespace Dropdown {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Dropdown__Class** type_info = (::app::Dropdown__Class**)(modloader::win::memory::resolve_rva(0x04713CF8));
    }
    namespace Image {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Image__Class** type_info = (::app::Image__Class**)(modloader::win::memory::resolve_rva(0x0474F9E8));
    }
    namespace Dropdown_OptionDataList {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Dropdown_OptionDataList__Class** type_info = (::app::Dropdown_OptionDataList__Class**)(modloader::win::memory::resolve_rva(0x047907D0));
    }
    namespace Dropdown_OptionData {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Dropdown_OptionData__Class** type_info = (::app::Dropdown_OptionData__Class**)(modloader::win::memory::resolve_rva(0x04731DA8));
    }
    namespace Dropdown_DropdownEvent {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Dropdown_DropdownEvent__Class** type_info = (::app::Dropdown_DropdownEvent__Class**)(modloader::win::memory::resolve_rva(0x047023C0));
    }
    namespace ToggleGroup {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ToggleGroup__Class** type_info = (::app::ToggleGroup__Class**)(modloader::win::memory::resolve_rva(0x04745F60));
    }
    namespace Toggle_ToggleEvent {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Toggle_ToggleEvent__Class** type_info = (::app::Toggle_ToggleEvent__Class**)(modloader::win::memory::resolve_rva(0x04737EC8));
    }
    namespace Dropdown_Show_c_AnonStorey1 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Dropdown_Show_c_AnonStorey1__Class** type_info = (::app::Dropdown_Show_c_AnonStorey1__Class**)(modloader::win::memory::resolve_rva(0x0476B9B8));
    }
    namespace Dropdown_DelayedDestroyDropdownList_c_Iterator0 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Dropdown_DelayedDestroyDropdownList_c_Iterator0__Class** type_info = (::app::Dropdown_DelayedDestroyDropdownList_c_Iterator0__Class**)(modloader::win::memory::resolve_rva(0x0477AF10));
    }
    namespace GraphicRaycaster {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GraphicRaycaster__Class** type_info = (::app::GraphicRaycaster__Class**)(modloader::win::memory::resolve_rva(0x0478C320));
    }
    namespace GraphicRegistry {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GraphicRegistry__Class** type_info = (::app::GraphicRegistry__Class**)(modloader::win::memory::resolve_rva(0x047934E8));
    }
    namespace InputField {
        IL2CPP_MODLOADER_DLLEXPORT ::app::InputField__Class** type_info = (::app::InputField__Class**)(modloader::win::memory::resolve_rva(0x04748FF8));
    }
    namespace InputField_SubmitEvent {
        IL2CPP_MODLOADER_DLLEXPORT ::app::InputField_SubmitEvent__Class** type_info = (::app::InputField_SubmitEvent__Class**)(modloader::win::memory::resolve_rva(0x0473A418));
    }
    namespace InputField_OnChangeEvent {
        IL2CPP_MODLOADER_DLLEXPORT ::app::InputField_OnChangeEvent__Class** type_info = (::app::InputField_OnChangeEvent__Class**)(modloader::win::memory::resolve_rva(0x04761D58));
    }
    namespace InputField_OnValidateInput {
        IL2CPP_MODLOADER_DLLEXPORT ::app::InputField_OnValidateInput__Class** type_info = (::app::InputField_OnValidateInput__Class**)(modloader::win::memory::resolve_rva(0x047489F0));
    }
    namespace InputField_ContentType__Enum__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::InputField_ContentType__Enum__Array__Class** type_info = (::app::InputField_ContentType__Enum__Array__Class**)(modloader::win::memory::resolve_rva(0x04760E48));
    }
    namespace InputField_CaretBlink_c_Iterator0 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::InputField_CaretBlink_c_Iterator0__Class** type_info = (::app::InputField_CaretBlink_c_Iterator0__Class**)(modloader::win::memory::resolve_rva(0x04762A20));
    }
    namespace InputField_MouseDragOutsideRect_c_Iterator1 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::InputField_MouseDragOutsideRect_c_Iterator1__Class** type_info = (::app::InputField_MouseDragOutsideRect_c_Iterator1__Class**)(modloader::win::memory::resolve_rva(0x04736D40));
    }
    namespace Scrollbar_ScrollEvent {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Scrollbar_ScrollEvent__Class** type_info = (::app::Scrollbar_ScrollEvent__Class**)(modloader::win::memory::resolve_rva(0x047365E8));
    }
    namespace Scrollbar_ClickRepeat_c_Iterator0 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Scrollbar_ClickRepeat_c_Iterator0__Class** type_info = (::app::Scrollbar_ClickRepeat_c_Iterator0__Class**)(modloader::win::memory::resolve_rva(0x04755EB0));
    }
    namespace ScrollRect_ScrollRectEvent {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ScrollRect_ScrollRectEvent__Class** type_info = (::app::ScrollRect_ScrollRectEvent__Class**)(modloader::win::memory::resolve_rva(0x047087A0));
    }
    namespace Slider_SliderEvent {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Slider_SliderEvent__Class** type_info = (::app::Slider_SliderEvent__Class**)(modloader::win::memory::resolve_rva(0x0478EFC0));
    }
    namespace StencilMaterial_MatEntry {
        IL2CPP_MODLOADER_DLLEXPORT ::app::StencilMaterial_MatEntry__Class** type_info = (::app::StencilMaterial_MatEntry__Class**)(modloader::win::memory::resolve_rva(0x047585D8));
    }
    namespace ClipperRegistry {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ClipperRegistry__Class** type_info = (::app::ClipperRegistry__Class**)(modloader::win::memory::resolve_rva(0x04713928));
    }
    namespace IClipper {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IClipper__Class** type_info = (::app::IClipper__Class**)(modloader::win::memory::resolve_rva(0x0478EF48));
    }
    namespace LayoutGroup_DelayedSetDirty_c_Iterator0 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LayoutGroup_DelayedSetDirty_c_Iterator0__Class** type_info = (::app::LayoutGroup_DelayedSetDirty_c_Iterator0__Class**)(modloader::win::memory::resolve_rva(0x047357D8));
    }
    namespace LayoutRebuilder {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LayoutRebuilder__Class** type_info = (::app::LayoutRebuilder__Class**)(modloader::win::memory::resolve_rva(0x0470FF40));
    }
    namespace ILayoutElement {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ILayoutElement__Class** type_info = (::app::ILayoutElement__Class**)(modloader::win::memory::resolve_rva(0x0471CA88));
    }
    namespace ReflectionMethodsCache {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ReflectionMethodsCache__Class** type_info = (::app::ReflectionMethodsCache__Class**)(modloader::win::memory::resolve_rva(0x047089B0));
    }
    namespace ReflectionMethodsCache_Raycast3DCallback {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ReflectionMethodsCache_Raycast3DCallback__Class** type_info = (::app::ReflectionMethodsCache_Raycast3DCallback__Class**)(modloader::win::memory::resolve_rva(0x0477F258));
    }
    namespace ReflectionMethodsCache_RaycastAllCallback {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ReflectionMethodsCache_RaycastAllCallback__Class** type_info = (::app::ReflectionMethodsCache_RaycastAllCallback__Class**)(modloader::win::memory::resolve_rva(0x04769FE0));
    }
    namespace ReflectionMethodsCache_Raycast2DCallback {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ReflectionMethodsCache_Raycast2DCallback__Class** type_info = (::app::ReflectionMethodsCache_Raycast2DCallback__Class**)(modloader::win::memory::resolve_rva(0x0479A1B8));
    }
    namespace ReflectionMethodsCache_GetRayIntersectionAllCallback {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ReflectionMethodsCache_GetRayIntersectionAllCallback__Class** type_info = (::app::ReflectionMethodsCache_GetRayIntersectionAllCallback__Class**)(modloader::win::memory::resolve_rva(0x04717D68));
    }
    namespace ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback__Class** type_info = (::app::ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback__Class**)(modloader::win::memory::resolve_rva(0x0476F730));
    }
    namespace ReflectionMethodsCache_GetRaycastNonAllocCallback {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ReflectionMethodsCache_GetRaycastNonAllocCallback__Class** type_info = (::app::ReflectionMethodsCache_GetRaycastNonAllocCallback__Class**)(modloader::win::memory::resolve_rva(0x0478A9E8));
    }
    namespace FrameProfiler {
        IL2CPP_MODLOADER_DLLEXPORT ::app::FrameProfiler__Class** type_info = (::app::FrameProfiler__Class**)(modloader::win::memory::resolve_rva(0x04728790));
    }
    namespace Metric__Enum {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Metric__Enum__Class** type_info = (::app::Metric__Enum__Class**)(modloader::win::memory::resolve_rva(0x0477AD40));
    }
    namespace FrameProfiler_MetricInfo {
        IL2CPP_MODLOADER_DLLEXPORT ::app::FrameProfiler_MetricInfo__Class** type_info = (::app::FrameProfiler_MetricInfo__Class**)(modloader::win::memory::resolve_rva(0x04759100));
    }
    namespace FrameProfiler_FrameData {
        IL2CPP_MODLOADER_DLLEXPORT ::app::FrameProfiler_FrameData__Class** type_info = (::app::FrameProfiler_FrameData__Class**)(modloader::win::memory::resolve_rva(0x0478E098));
    }
    namespace FrameProfiler_FrameSample {
        IL2CPP_MODLOADER_DLLEXPORT ::app::FrameProfiler_FrameSample__Class** type_info = (::app::FrameProfiler_FrameSample__Class**)(modloader::win::memory::resolve_rva(0x04748C70));
    }
    namespace FrameProfiler_FrameSample__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::FrameProfiler_FrameSample__Array__Class** type_info = (::app::FrameProfiler_FrameSample__Array__Class**)(modloader::win::memory::resolve_rva(0x04742BB0));
    }
    namespace FrameProfiler_FrameData__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::FrameProfiler_FrameData__Array__Class** type_info = (::app::FrameProfiler_FrameData__Array__Class**)(modloader::win::memory::resolve_rva(0x0476BDB8));
    }
    namespace FrameProfiler_c_DisplayClass17_0 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::FrameProfiler_c_DisplayClass17_0__Class** type_info = (::app::FrameProfiler_c_DisplayClass17_0__Class**)(modloader::win::memory::resolve_rva(0x0472E470));
    }
    namespace Stat__Enum {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Stat__Enum__Class** type_info = (::app::Stat__Enum__Class**)(modloader::win::memory::resolve_rva(0x04753600));
    }
    namespace MicroProfiler_SampleStats {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MicroProfiler_SampleStats__Class** type_info = (::app::MicroProfiler_SampleStats__Class**)(modloader::win::memory::resolve_rva(0x04773B28));
    }
    namespace MicroProfiler_MetricStats__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MicroProfiler_MetricStats__Array__Class** type_info = (::app::MicroProfiler_MetricStats__Array__Class**)(modloader::win::memory::resolve_rva(0x04744E90));
    }
    namespace MicroProfiler_StatInfo__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MicroProfiler_StatInfo__Array__Class** type_info = (::app::MicroProfiler_StatInfo__Array__Class**)(modloader::win::memory::resolve_rva(0x04718800));
    }
    namespace MicroProfiler_MarkerInfo_FrameFlags__Enum {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MicroProfiler_MarkerInfo_FrameFlags__Enum__Class** type_info = (::app::MicroProfiler_MarkerInfo_FrameFlags__Enum__Class**)(modloader::win::memory::resolve_rva(0x047605C0));
    }
    namespace MicroProfiler_MarkerInfo__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MicroProfiler_MarkerInfo__Array__Class** type_info = (::app::MicroProfiler_MarkerInfo__Array__Class**)(modloader::win::memory::resolve_rva(0x0476CCF0));
    }
    namespace MicroProfiler {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MicroProfiler__Class** type_info = (::app::MicroProfiler__Class**)(modloader::win::memory::resolve_rva(0x04768898));
    }
    namespace MicroProfiler_c {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MicroProfiler_c__Class** type_info = (::app::MicroProfiler_c__Class**)(modloader::win::memory::resolve_rva(0x04766D60));
    }
    namespace Presentation__Enum {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Presentation__Enum__Class** type_info = (::app::Presentation__Enum__Class**)(modloader::win::memory::resolve_rva(0x0471CD48));
    }
    namespace MetricOutput__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MetricOutput__Array__Class** type_info = (::app::MetricOutput__Array__Class**)(modloader::win::memory::resolve_rva(0x04788D10));
    }
    namespace MicroProfilerDataProvider {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MicroProfilerDataProvider__Class** type_info = (::app::MicroProfilerDataProvider__Class**)(modloader::win::memory::resolve_rva(0x04782AB0));
    }
    namespace Metric__Enum__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Metric__Enum__Array__Class** type_info = (::app::Metric__Enum__Array__Class**)(modloader::win::memory::resolve_rva(0x04764248));
    }
    namespace AssemblyBridge {
        IL2CPP_MODLOADER_DLLEXPORT ::app::AssemblyBridge__Class** type_info = (::app::AssemblyBridge__Class**)(modloader::win::memory::resolve_rva(0x0478B838));
    }
    namespace IMoonDriverExecutionOrderMap {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IMoonDriverExecutionOrderMap__Class** type_info = (::app::IMoonDriverExecutionOrderMap__Class**)(modloader::win::memory::resolve_rva(0x047581E8));
    }
    namespace DrivableGroup {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DrivableGroup__Class** type_info = (::app::DrivableGroup__Class**)(modloader::win::memory::resolve_rva(0x04760FD0));
    }
    namespace IDrivable {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IDrivable__Class** type_info = (::app::IDrivable__Class**)(modloader::win::memory::resolve_rva(0x0478D738));
    }
    namespace MoonDriver {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MoonDriver__Class** type_info = (::app::MoonDriver__Class**)(modloader::win::memory::resolve_rva(0x0471F8D8));
    }
    namespace UpdateManager {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UpdateManager__Class** type_info = (::app::UpdateManager__Class**)(modloader::win::memory::resolve_rva(0x0471DA88));
    }
    namespace IUpdateWhileDisabled {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IUpdateWhileDisabled__Class** type_info = (::app::IUpdateWhileDisabled__Class**)(modloader::win::memory::resolve_rva(0x0472C698));
    }
    namespace UpdateManager_GenericEntry {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UpdateManager_GenericEntry__Class** type_info = (::app::UpdateManager_GenericEntry__Class**)(modloader::win::memory::resolve_rva(0x0476C7A8));
    }
    namespace IUpdateHandler {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IUpdateHandler__Class** type_info = (::app::IUpdateHandler__Class**)(modloader::win::memory::resolve_rva(0x04768B30));
    }
    namespace UpdateManager__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UpdateManager__Array__Class** type_info = (::app::UpdateManager__Array__Class**)(modloader::win::memory::resolve_rva(0x04783BE8));
    }
    namespace UpdateManager_ExplicitEntry {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UpdateManager_ExplicitEntry__Class** type_info = (::app::UpdateManager_ExplicitEntry__Class**)(modloader::win::memory::resolve_rva(0x0472CC78));
    }
    namespace IExplicitUpdateHandler {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IExplicitUpdateHandler__Class** type_info = (::app::IExplicitUpdateHandler__Class**)(modloader::win::memory::resolve_rva(0x04710D00));
    }
    namespace IExplicitFixedUpdateHandler {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IExplicitFixedUpdateHandler__Class** type_info = (::app::IExplicitFixedUpdateHandler__Class**)(modloader::win::memory::resolve_rva(0x0478FCD0));
    }
    namespace IExplicitLateUpdateHandler {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IExplicitLateUpdateHandler__Class** type_info = (::app::IExplicitLateUpdateHandler__Class**)(modloader::win::memory::resolve_rva(0x047371A8));
    }
    namespace IExplicitUpdateHandlerBase {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IExplicitUpdateHandlerBase__Class** type_info = (::app::IExplicitUpdateHandlerBase__Class**)(modloader::win::memory::resolve_rva(0x0475CD70));
    }
    namespace UpdateManager_ActiveEntryComparer {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UpdateManager_ActiveEntryComparer__Class** type_info = (::app::UpdateManager_ActiveEntryComparer__Class**)(modloader::win::memory::resolve_rva(0x04761E70));
    }
    namespace UpdateManager_UpdatedEntryComparer {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UpdateManager_UpdatedEntryComparer__Class** type_info = (::app::UpdateManager_UpdatedEntryComparer__Class**)(modloader::win::memory::resolve_rva(0x04707228));
    }
    namespace IUpdateHandlerWithExecutionOrderOffset {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IUpdateHandlerWithExecutionOrderOffset__Class** type_info = (::app::IUpdateHandlerWithExecutionOrderOffset__Class**)(modloader::win::memory::resolve_rva(0x04767F40));
    }
    namespace MoonDriverSystem {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MoonDriverSystem__Class** type_info = (::app::MoonDriverSystem__Class**)(modloader::win::memory::resolve_rva(0x0478EE20));
    }
    namespace IDrivableGroup {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IDrivableGroup__Class** type_info = (::app::IDrivableGroup__Class**)(modloader::win::memory::resolve_rva(0x04787350));
    }
    namespace UpdateManager_c {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UpdateManager_c__Class** type_info = (::app::UpdateManager_c__Class**)(modloader::win::memory::resolve_rva(0x04725068));
    }
    namespace BulletHole_DestroyDelayed_d_2 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::BulletHole_DestroyDelayed_d_2__Class** type_info = (::app::BulletHole_DestroyDelayed_d_2__Class**)(modloader::win::memory::resolve_rva(0x04793C78));
    }
    namespace BipedLimbOrientations {
        IL2CPP_MODLOADER_DLLEXPORT ::app::BipedLimbOrientations__Class** type_info = (::app::BipedLimbOrientations__Class**)(modloader::win::memory::resolve_rva(0x0478A788));
    }
    namespace BipedLimbOrientations_LimbOrientation {
        IL2CPP_MODLOADER_DLLEXPORT ::app::BipedLimbOrientations_LimbOrientation__Class** type_info = (::app::BipedLimbOrientations_LimbOrientation__Class**)(modloader::win::memory::resolve_rva(0x04767DC0));
    }
    namespace BipedReferences {
        IL2CPP_MODLOADER_DLLEXPORT ::app::BipedReferences__Class** type_info = (::app::BipedReferences__Class**)(modloader::win::memory::resolve_rva(0x0473EA18));
    }
    namespace BipedIKSolvers {
        IL2CPP_MODLOADER_DLLEXPORT ::app::BipedIKSolvers__Class** type_info = (::app::BipedIKSolvers__Class**)(modloader::win::memory::resolve_rva(0x04706CA8));
    }
    namespace IKSolver {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IKSolver__Class** type_info = (::app::IKSolver__Class**)(modloader::win::memory::resolve_rva(0x047036A0));
    }
    namespace IKSolverTrigonometric {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IKSolverTrigonometric__Class** type_info = (::app::IKSolverTrigonometric__Class**)(modloader::win::memory::resolve_rva(0x04791DA0));
    }
    namespace IKSolverLimb {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IKSolverLimb__Class** type_info = (::app::IKSolverLimb__Class**)(modloader::win::memory::resolve_rva(0x0470CA00));
    }
    namespace IKSolver_UpdateDelegate {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IKSolver_UpdateDelegate__Class** type_info = (::app::IKSolver_UpdateDelegate__Class**)(modloader::win::memory::resolve_rva(0x04701310));
    }
    namespace IKSolverHeuristic {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IKSolverHeuristic__Class** type_info = (::app::IKSolverHeuristic__Class**)(modloader::win::memory::resolve_rva(0x04741D88));
    }
    namespace IKSolver_Bone {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IKSolver_Bone__Class** type_info = (::app::IKSolver_Bone__Class**)(modloader::win::memory::resolve_rva(0x04742460));
    }
    namespace RotationLimitAngle {
        IL2CPP_MODLOADER_DLLEXPORT ::app::RotationLimitAngle__Class** type_info = (::app::RotationLimitAngle__Class**)(modloader::win::memory::resolve_rva(0x04775CF0));
    }
    namespace IKSolver_Bone__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IKSolver_Bone__Array__Class** type_info = (::app::IKSolver_Bone__Array__Class**)(modloader::win::memory::resolve_rva(0x04774B60));
    }
    namespace IKSolver_Point__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IKSolver_Point__Array__Class** type_info = (::app::IKSolver_Point__Array__Class**)(modloader::win::memory::resolve_rva(0x04789940));
    }
    namespace IKSolverAim {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IKSolverAim__Class** type_info = (::app::IKSolverAim__Class**)(modloader::win::memory::resolve_rva(0x04754700));
    }
} // namespace app::classes::types
