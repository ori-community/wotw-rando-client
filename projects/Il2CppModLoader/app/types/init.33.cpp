#include <Il2CppModLoader/windows_api/memory.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/app/types/TerrainUtility_TerrainGroups.h>
#include <Il2CppModLoader/app/types/TerrainUtility_TerrainMap.h>
#include <Il2CppModLoader/app/types/TerrainUtility_TerrainMap_TerrainFilter.h>
#include <Il2CppModLoader/app/types/TerrainUtility_TerrainMap_CreateFromPlacement_c_AnonStorey0.h>
#include <Il2CppModLoader/app/types/TerrainUtility_CollectTerrains_c_AnonStorey1.h>
#include <Il2CppModLoader/app/types/TerrainUtility_CollectTerrains_c_AnonStorey0.h>
#include <Il2CppModLoader/app/types/ITilemap.h>
#include <Il2CppModLoader/app/types/YogaMeasureMode__Enum.h>
#include <Il2CppModLoader/app/types/Canvas.h>
#include <Il2CppModLoader/app/types/Canvas_WillRenderCanvases.h>
#include <Il2CppModLoader/app/types/CanvasGroup.h>
#include <Il2CppModLoader/app/types/AnalyticsSessionState__Enum.h>
#include <Il2CppModLoader/app/types/WWW.h>
#include <Il2CppModLoader/app/types/VFXExpressionValues.h>
#include <Il2CppModLoader/app/types/VFXSpawnerState.h>
#include <Il2CppModLoader/app/types/VideoPlayer_EventHandler.h>
#include <Il2CppModLoader/app/types/MoonDebug.h>
#include <Il2CppModLoader/app/types/MoonDebugMessageType__Enum.h>
#include <Il2CppModLoader/app/types/MoonDebugMessage.h>
#include <Il2CppModLoader/app/types/MoonAnimator.h>
#include <Il2CppModLoader/app/types/IAnimation.h>
#include <Il2CppModLoader/app/types/MoonAnimatorLayerName.h>
#include <Il2CppModLoader/app/types/MoonAnimation.h>
#include <Il2CppModLoader/app/types/ClipAnimation.h>
#include <Il2CppModLoader/app/types/MoonAnimatorLayerDefinition.h>
#include <Il2CppModLoader/app/types/AnimationTransition.h>
#include <Il2CppModLoader/app/types/AnimationTransition__Array.h>
#include <Il2CppModLoader/app/types/AnimationPostprocessGroup__Array.h>
#include <Il2CppModLoader/app/types/AnimationPostprocessGroupModifier__Array.h>
#include <Il2CppModLoader/app/types/AnimationParameterSet.h>
#include <Il2CppModLoader/app/types/FloatAnimationParameter_Instance.h>
#include <Il2CppModLoader/app/types/FloatAnimationParameter.h>
#include <Il2CppModLoader/app/types/BlendAnimation.h>
#include <Il2CppModLoader/app/types/BlendAnimation_Input__Array.h>
#include <Il2CppModLoader/app/types/MoonAnimation__Array.h>
#include <Il2CppModLoader/app/types/ClipAnimation_EventMetadata__Array.h>
#include <Il2CppModLoader/app/types/ClipAnimation_RootMotionData.h>
#include <Il2CppModLoader/app/types/MoonAnimator_AnimationInstance__Array.h>
#include <Il2CppModLoader/app/types/LayeredAnimation.h>
#include <Il2CppModLoader/app/types/LayeredAnimation_Input__Array.h>
#include <Il2CppModLoader/app/types/BlendAnimation2D.h>
#include <Il2CppModLoader/app/types/Blend2DTriangleState.h>
#include <Il2CppModLoader/app/types/Blend2DVertexState.h>
#include <Il2CppModLoader/app/types/Blend2DVertexState__Array.h>
#include <Il2CppModLoader/app/types/Blend2DSegmentState.h>
#include <Il2CppModLoader/app/types/Blend2DSegmentState__Array.h>
#include <Il2CppModLoader/app/types/Blend2DTriangleState__Array.h>
#include <Il2CppModLoader/app/types/BlendAnimation2D_Input__Array.h>
#include <Il2CppModLoader/app/types/DirectBlendAnimation.h>
#include <Il2CppModLoader/app/types/DirectBlendAnimation_Input__Array.h>
#include <Il2CppModLoader/app/types/MoonAnimator_PreviewAnimation.h>
#include <Il2CppModLoader/app/types/MoonAnimator_TransformData.h>
#include <Il2CppModLoader/app/types/ActiveAnimationHandle.h>
#include <Il2CppModLoader/app/types/IActiveAnimation.h>
#include <Il2CppModLoader/app/types/MoonAnimator_AnimationPostprocessMetadata.h>
#include <Il2CppModLoader/app/types/AnimationPostprocessGroupManager.h>
#include <Il2CppModLoader/app/types/AnimationPostprocessGroupManager_GroupState.h>
#include <Il2CppModLoader/app/types/MoonAnimator_Layer.h>
#include <Il2CppModLoader/app/types/MoonAnimator_ActiveAnimation.h>
#include <Il2CppModLoader/app/types/Renderer__Array.h>
#include <Il2CppModLoader/app/types/MoonAnimator_AnimatorPostprocessData.h>
#include <Il2CppModLoader/app/types/IAnimatorPostprocessBase.h>
#include <Il2CppModLoader/app/types/ISuspendable.h>
#include <Il2CppModLoader/app/types/SuspensionManager_SuspensionTicket.h>
#include <Il2CppModLoader/app/types/EventSystem.h>
#include <Il2CppModLoader/app/types/RaycastResult.h>
#include <Il2CppModLoader/app/types/PhysicsRaycaster.h>
#include <Il2CppModLoader/app/types/BaseEventData.h>
#include <Il2CppModLoader/app/types/PointerEventData.h>
#include <Il2CppModLoader/app/types/AxisEventData.h>
#include <Il2CppModLoader/app/types/PointerInputModule_MouseState.h>
#include <Il2CppModLoader/app/types/PointerInputModule_ButtonState.h>
#include <Il2CppModLoader/app/types/PointerInputModule_MouseButtonEventData.h>
#include <Il2CppModLoader/app/types/EventTrigger_TriggerEvent.h>
#include <Il2CppModLoader/app/types/IPointerEnterHandler.h>
#include <Il2CppModLoader/app/types/IPointerExitHandler.h>
#include <Il2CppModLoader/app/types/IPointerDownHandler.h>
#include <Il2CppModLoader/app/types/IPointerUpHandler.h>
#include <Il2CppModLoader/app/types/IPointerClickHandler.h>
#include <Il2CppModLoader/app/types/IInitializePotentialDragHandler.h>
#include <Il2CppModLoader/app/types/IBeginDragHandler.h>
#include <Il2CppModLoader/app/types/IDragHandler.h>
#include <Il2CppModLoader/app/types/IEndDragHandler.h>
#include <Il2CppModLoader/app/types/IDropHandler.h>
#include <Il2CppModLoader/app/types/IScrollHandler.h>
#include <Il2CppModLoader/app/types/IUpdateSelectedHandler.h>
#include <Il2CppModLoader/app/types/ISelectHandler.h>
#include <Il2CppModLoader/app/types/IDeselectHandler.h>
#include <Il2CppModLoader/app/types/IMoveHandler.h>
#include <Il2CppModLoader/app/types/ISubmitHandler.h>
#include <Il2CppModLoader/app/types/ICancelHandler.h>
#include <Il2CppModLoader/app/types/IEventSystemHandler.h>
#include <Il2CppModLoader/app/types/ColorTween_ColorTweenCallback.h>
#include <Il2CppModLoader/app/types/FloatTween_FloatTweenCallback.h>
#include <Il2CppModLoader/app/types/AnimationTriggers.h>
#include <Il2CppModLoader/app/types/ColorBlock.h>
#include <Il2CppModLoader/app/types/Selectable.h>
#include <Il2CppModLoader/app/types/Graphic.h>
#include <Il2CppModLoader/app/types/VertexHelper.h>
#include <Il2CppModLoader/app/types/Button_ButtonClickedEvent.h>

namespace app::classes::types {
    namespace TerrainUtility_TerrainGroups { IL2CPP_MODLOADER_DLLEXPORT ::app::TerrainUtility_TerrainGroups__Class** type_info = (::app::TerrainUtility_TerrainGroups__Class**)(modloader::win::memory::resolve_rva(0x04789B80)); }
    namespace TerrainUtility_TerrainMap { IL2CPP_MODLOADER_DLLEXPORT ::app::TerrainUtility_TerrainMap__Class** type_info = (::app::TerrainUtility_TerrainMap__Class**)(modloader::win::memory::resolve_rva(0x04764230)); }
    namespace TerrainUtility_TerrainMap_TerrainFilter { IL2CPP_MODLOADER_DLLEXPORT ::app::TerrainUtility_TerrainMap_TerrainFilter__Class** type_info = (::app::TerrainUtility_TerrainMap_TerrainFilter__Class**)(modloader::win::memory::resolve_rva(0x0473A340)); }
    namespace TerrainUtility_TerrainMap_CreateFromPlacement_c_AnonStorey0 { IL2CPP_MODLOADER_DLLEXPORT ::app::TerrainUtility_TerrainMap_CreateFromPlacement_c_AnonStorey0__Class** type_info = (::app::TerrainUtility_TerrainMap_CreateFromPlacement_c_AnonStorey0__Class**)(modloader::win::memory::resolve_rva(0x04726A58)); }
    namespace TerrainUtility_CollectTerrains_c_AnonStorey1 { IL2CPP_MODLOADER_DLLEXPORT ::app::TerrainUtility_CollectTerrains_c_AnonStorey1__Class** type_info = (::app::TerrainUtility_CollectTerrains_c_AnonStorey1__Class**)(modloader::win::memory::resolve_rva(0x04758178)); }
    namespace TerrainUtility_CollectTerrains_c_AnonStorey0 { IL2CPP_MODLOADER_DLLEXPORT ::app::TerrainUtility_CollectTerrains_c_AnonStorey0__Class** type_info = (::app::TerrainUtility_CollectTerrains_c_AnonStorey0__Class**)(modloader::win::memory::resolve_rva(0x04710E38)); }
    namespace ITilemap { IL2CPP_MODLOADER_DLLEXPORT ::app::ITilemap__Class** type_info = (::app::ITilemap__Class**)(modloader::win::memory::resolve_rva(0x0475C5A8)); }
    namespace YogaMeasureMode__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::YogaMeasureMode__Enum__Class** type_info = (::app::YogaMeasureMode__Enum__Class**)(modloader::win::memory::resolve_rva(0x0476C8E0)); }
    namespace Canvas { IL2CPP_MODLOADER_DLLEXPORT ::app::Canvas__Class** type_info = (::app::Canvas__Class**)(modloader::win::memory::resolve_rva(0x04734B70)); }
    namespace Canvas_WillRenderCanvases { IL2CPP_MODLOADER_DLLEXPORT ::app::Canvas_WillRenderCanvases__Class** type_info = (::app::Canvas_WillRenderCanvases__Class**)(modloader::win::memory::resolve_rva(0x04707570)); }
    namespace CanvasGroup { IL2CPP_MODLOADER_DLLEXPORT ::app::CanvasGroup__Class** type_info = (::app::CanvasGroup__Class**)(modloader::win::memory::resolve_rva(0x04784EC0)); }
    namespace AnalyticsSessionState__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::AnalyticsSessionState__Enum__Class** type_info = (::app::AnalyticsSessionState__Enum__Class**)(modloader::win::memory::resolve_rva(0x04776E20)); }
    namespace WWW { IL2CPP_MODLOADER_DLLEXPORT ::app::WWW__Class** type_info = (::app::WWW__Class**)(modloader::win::memory::resolve_rva(0x04761AC0)); }
    namespace VFXExpressionValues { IL2CPP_MODLOADER_DLLEXPORT ::app::VFXExpressionValues__Class** type_info = (::app::VFXExpressionValues__Class**)(modloader::win::memory::resolve_rva(0x04799208)); }
    namespace VFXSpawnerState { IL2CPP_MODLOADER_DLLEXPORT ::app::VFXSpawnerState__Class** type_info = (::app::VFXSpawnerState__Class**)(modloader::win::memory::resolve_rva(0x0478DB78)); }
    namespace VideoPlayer_EventHandler { IL2CPP_MODLOADER_DLLEXPORT ::app::VideoPlayer_EventHandler__Class** type_info = (::app::VideoPlayer_EventHandler__Class**)(modloader::win::memory::resolve_rva(0x04707510)); }
    namespace MoonDebug { IL2CPP_MODLOADER_DLLEXPORT ::app::MoonDebug__Class** type_info = (::app::MoonDebug__Class**)(modloader::win::memory::resolve_rva(0x047640F8)); }
    namespace MoonDebugMessageType__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::MoonDebugMessageType__Enum__Class** type_info = (::app::MoonDebugMessageType__Enum__Class**)(modloader::win::memory::resolve_rva(0x04741C70)); }
    namespace MoonDebugMessage { IL2CPP_MODLOADER_DLLEXPORT ::app::MoonDebugMessage__Class** type_info = (::app::MoonDebugMessage__Class**)(modloader::win::memory::resolve_rva(0x047457C0)); }
    namespace MoonAnimator { IL2CPP_MODLOADER_DLLEXPORT ::app::MoonAnimator__Class** type_info = (::app::MoonAnimator__Class**)(modloader::win::memory::resolve_rva(0x04734798)); }
    namespace IAnimation { IL2CPP_MODLOADER_DLLEXPORT ::app::IAnimation__Class** type_info = (::app::IAnimation__Class**)(modloader::win::memory::resolve_rva(0x047123D0)); }
    namespace MoonAnimatorLayerName { IL2CPP_MODLOADER_DLLEXPORT ::app::MoonAnimatorLayerName__Class** type_info = (::app::MoonAnimatorLayerName__Class**)(modloader::win::memory::resolve_rva(0x04786850)); }
    namespace MoonAnimation { IL2CPP_MODLOADER_DLLEXPORT ::app::MoonAnimation__Class** type_info = (::app::MoonAnimation__Class**)(modloader::win::memory::resolve_rva(0x04772048)); }
    namespace ClipAnimation { IL2CPP_MODLOADER_DLLEXPORT ::app::ClipAnimation__Class** type_info = (::app::ClipAnimation__Class**)(modloader::win::memory::resolve_rva(0x04751C08)); }
    namespace MoonAnimatorLayerDefinition { IL2CPP_MODLOADER_DLLEXPORT ::app::MoonAnimatorLayerDefinition__Class** type_info = (::app::MoonAnimatorLayerDefinition__Class**)(modloader::win::memory::resolve_rva(0x04741280)); }
    namespace AnimationTransition { IL2CPP_MODLOADER_DLLEXPORT ::app::AnimationTransition__Class** type_info = (::app::AnimationTransition__Class**)(modloader::win::memory::resolve_rva(0x047253B0)); }
    namespace AnimationTransition__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::AnimationTransition__Array__Class** type_info = (::app::AnimationTransition__Array__Class**)(modloader::win::memory::resolve_rva(0x04724890)); }
    namespace AnimationPostprocessGroup__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::AnimationPostprocessGroup__Array__Class** type_info = (::app::AnimationPostprocessGroup__Array__Class**)(modloader::win::memory::resolve_rva(0x04759958)); }
    namespace AnimationPostprocessGroupModifier__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::AnimationPostprocessGroupModifier__Array__Class** type_info = (::app::AnimationPostprocessGroupModifier__Array__Class**)(modloader::win::memory::resolve_rva(0x04752180)); }
    namespace AnimationParameterSet { IL2CPP_MODLOADER_DLLEXPORT ::app::AnimationParameterSet__Class** type_info = (::app::AnimationParameterSet__Class**)(modloader::win::memory::resolve_rva(0x0474F858)); }
    namespace FloatAnimationParameter_Instance { IL2CPP_MODLOADER_DLLEXPORT ::app::FloatAnimationParameter_Instance__Class** type_info = (::app::FloatAnimationParameter_Instance__Class**)(modloader::win::memory::resolve_rva(0x0475DB58)); }
    namespace FloatAnimationParameter { IL2CPP_MODLOADER_DLLEXPORT ::app::FloatAnimationParameter__Class** type_info = (::app::FloatAnimationParameter__Class**)(modloader::win::memory::resolve_rva(0x0475CF70)); }
    namespace BlendAnimation { IL2CPP_MODLOADER_DLLEXPORT ::app::BlendAnimation__Class** type_info = (::app::BlendAnimation__Class**)(modloader::win::memory::resolve_rva(0x0473FF00)); }
    namespace BlendAnimation_Input__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::BlendAnimation_Input__Array__Class** type_info = (::app::BlendAnimation_Input__Array__Class**)(modloader::win::memory::resolve_rva(0x0475BF90)); }
    namespace MoonAnimation__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::MoonAnimation__Array__Class** type_info = (::app::MoonAnimation__Array__Class**)(modloader::win::memory::resolve_rva(0x0472E150)); }
    namespace ClipAnimation_EventMetadata__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::ClipAnimation_EventMetadata__Array__Class** type_info = (::app::ClipAnimation_EventMetadata__Array__Class**)(modloader::win::memory::resolve_rva(0x04789958)); }
    namespace ClipAnimation_RootMotionData { IL2CPP_MODLOADER_DLLEXPORT ::app::ClipAnimation_RootMotionData__Class** type_info = (::app::ClipAnimation_RootMotionData__Class**)(modloader::win::memory::resolve_rva(0x047543A0)); }
    namespace MoonAnimator_AnimationInstance__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::MoonAnimator_AnimationInstance__Array__Class** type_info = (::app::MoonAnimator_AnimationInstance__Array__Class**)(modloader::win::memory::resolve_rva(0x0470B0B8)); }
    namespace LayeredAnimation { IL2CPP_MODLOADER_DLLEXPORT ::app::LayeredAnimation__Class** type_info = (::app::LayeredAnimation__Class**)(modloader::win::memory::resolve_rva(0x04724AD0)); }
    namespace LayeredAnimation_Input__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::LayeredAnimation_Input__Array__Class** type_info = (::app::LayeredAnimation_Input__Array__Class**)(modloader::win::memory::resolve_rva(0x04781E68)); }
    namespace BlendAnimation2D { IL2CPP_MODLOADER_DLLEXPORT ::app::BlendAnimation2D__Class** type_info = (::app::BlendAnimation2D__Class**)(modloader::win::memory::resolve_rva(0x0475C860)); }
    namespace Blend2DTriangleState { IL2CPP_MODLOADER_DLLEXPORT ::app::Blend2DTriangleState__Class** type_info = (::app::Blend2DTriangleState__Class**)(modloader::win::memory::resolve_rva(0x047794C8)); }
    namespace Blend2DVertexState { IL2CPP_MODLOADER_DLLEXPORT ::app::Blend2DVertexState__Class** type_info = (::app::Blend2DVertexState__Class**)(modloader::win::memory::resolve_rva(0x04704F60)); }
    namespace Blend2DVertexState__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::Blend2DVertexState__Array__Class** type_info = (::app::Blend2DVertexState__Array__Class**)(modloader::win::memory::resolve_rva(0x0475C4E8)); }
    namespace Blend2DSegmentState { IL2CPP_MODLOADER_DLLEXPORT ::app::Blend2DSegmentState__Class** type_info = (::app::Blend2DSegmentState__Class**)(modloader::win::memory::resolve_rva(0x0471ACD0)); }
    namespace Blend2DSegmentState__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::Blend2DSegmentState__Array__Class** type_info = (::app::Blend2DSegmentState__Array__Class**)(modloader::win::memory::resolve_rva(0x0471BA28)); }
    namespace Blend2DTriangleState__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::Blend2DTriangleState__Array__Class** type_info = (::app::Blend2DTriangleState__Array__Class**)(modloader::win::memory::resolve_rva(0x047607A0)); }
    namespace BlendAnimation2D_Input__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::BlendAnimation2D_Input__Array__Class** type_info = (::app::BlendAnimation2D_Input__Array__Class**)(modloader::win::memory::resolve_rva(0x0471EE30)); }
    namespace DirectBlendAnimation { IL2CPP_MODLOADER_DLLEXPORT ::app::DirectBlendAnimation__Class** type_info = (::app::DirectBlendAnimation__Class**)(modloader::win::memory::resolve_rva(0x0472A9B0)); }
    namespace DirectBlendAnimation_Input__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::DirectBlendAnimation_Input__Array__Class** type_info = (::app::DirectBlendAnimation_Input__Array__Class**)(modloader::win::memory::resolve_rva(0x04752AE0)); }
    namespace MoonAnimator_PreviewAnimation { IL2CPP_MODLOADER_DLLEXPORT ::app::MoonAnimator_PreviewAnimation__Class** type_info = (::app::MoonAnimator_PreviewAnimation__Class**)(modloader::win::memory::resolve_rva(0x04767BA8)); }
    namespace MoonAnimator_TransformData { IL2CPP_MODLOADER_DLLEXPORT ::app::MoonAnimator_TransformData__Class** type_info = (::app::MoonAnimator_TransformData__Class**)(modloader::win::memory::resolve_rva(0x047010E0)); }
    namespace ActiveAnimationHandle { IL2CPP_MODLOADER_DLLEXPORT ::app::ActiveAnimationHandle__Class** type_info = (::app::ActiveAnimationHandle__Class**)(modloader::win::memory::resolve_rva(0x04793938)); }
    namespace IActiveAnimation { IL2CPP_MODLOADER_DLLEXPORT ::app::IActiveAnimation__Class** type_info = (::app::IActiveAnimation__Class**)(modloader::win::memory::resolve_rva(0x0475ED30)); }
    namespace MoonAnimator_AnimationPostprocessMetadata { IL2CPP_MODLOADER_DLLEXPORT ::app::MoonAnimator_AnimationPostprocessMetadata__Class** type_info = (::app::MoonAnimator_AnimationPostprocessMetadata__Class**)(modloader::win::memory::resolve_rva(0x0477B5E8)); }
    namespace AnimationPostprocessGroupManager { IL2CPP_MODLOADER_DLLEXPORT ::app::AnimationPostprocessGroupManager__Class** type_info = (::app::AnimationPostprocessGroupManager__Class**)(modloader::win::memory::resolve_rva(0x047855F0)); }
    namespace AnimationPostprocessGroupManager_GroupState { IL2CPP_MODLOADER_DLLEXPORT ::app::AnimationPostprocessGroupManager_GroupState__Class** type_info = (::app::AnimationPostprocessGroupManager_GroupState__Class**)(modloader::win::memory::resolve_rva(0x0471CD40)); }
    namespace MoonAnimator_Layer { IL2CPP_MODLOADER_DLLEXPORT ::app::MoonAnimator_Layer__Class** type_info = (::app::MoonAnimator_Layer__Class**)(modloader::win::memory::resolve_rva(0x04711F90)); }
    namespace MoonAnimator_ActiveAnimation { IL2CPP_MODLOADER_DLLEXPORT ::app::MoonAnimator_ActiveAnimation__Class** type_info = (::app::MoonAnimator_ActiveAnimation__Class**)(modloader::win::memory::resolve_rva(0x04773BA0)); }
    namespace Renderer__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::Renderer__Array__Class** type_info = (::app::Renderer__Array__Class**)(modloader::win::memory::resolve_rva(0x04724EC8)); }
    namespace MoonAnimator_AnimatorPostprocessData { IL2CPP_MODLOADER_DLLEXPORT ::app::MoonAnimator_AnimatorPostprocessData__Class** type_info = (::app::MoonAnimator_AnimatorPostprocessData__Class**)(modloader::win::memory::resolve_rva(0x04797C00)); }
    namespace IAnimatorPostprocessBase { IL2CPP_MODLOADER_DLLEXPORT ::app::IAnimatorPostprocessBase__Class** type_info = (::app::IAnimatorPostprocessBase__Class**)(modloader::win::memory::resolve_rva(0x0475CE00)); }
    namespace ISuspendable { IL2CPP_MODLOADER_DLLEXPORT ::app::ISuspendable__Class** type_info = (::app::ISuspendable__Class**)(modloader::win::memory::resolve_rva(0x04799580)); }
    namespace SuspensionManager_SuspensionTicket { IL2CPP_MODLOADER_DLLEXPORT ::app::SuspensionManager_SuspensionTicket__Class** type_info = (::app::SuspensionManager_SuspensionTicket__Class**)(modloader::win::memory::resolve_rva(0x047715A8)); }
    namespace EventSystem { IL2CPP_MODLOADER_DLLEXPORT ::app::EventSystem__Class** type_info = (::app::EventSystem__Class**)(modloader::win::memory::resolve_rva(0x04780620)); }
    namespace RaycastResult { IL2CPP_MODLOADER_DLLEXPORT ::app::RaycastResult__Class** type_info = (::app::RaycastResult__Class**)(modloader::win::memory::resolve_rva(0x0471CED8)); }
    namespace PhysicsRaycaster { IL2CPP_MODLOADER_DLLEXPORT ::app::PhysicsRaycaster__Class** type_info = (::app::PhysicsRaycaster__Class**)(modloader::win::memory::resolve_rva(0x0471A688)); }
    namespace BaseEventData { IL2CPP_MODLOADER_DLLEXPORT ::app::BaseEventData__Class** type_info = (::app::BaseEventData__Class**)(modloader::win::memory::resolve_rva(0x04791630)); }
    namespace PointerEventData { IL2CPP_MODLOADER_DLLEXPORT ::app::PointerEventData__Class** type_info = (::app::PointerEventData__Class**)(modloader::win::memory::resolve_rva(0x04773630)); }
    namespace AxisEventData { IL2CPP_MODLOADER_DLLEXPORT ::app::AxisEventData__Class** type_info = (::app::AxisEventData__Class**)(modloader::win::memory::resolve_rva(0x04745B08)); }
    namespace PointerInputModule_MouseState { IL2CPP_MODLOADER_DLLEXPORT ::app::PointerInputModule_MouseState__Class** type_info = (::app::PointerInputModule_MouseState__Class**)(modloader::win::memory::resolve_rva(0x04729E00)); }
    namespace PointerInputModule_ButtonState { IL2CPP_MODLOADER_DLLEXPORT ::app::PointerInputModule_ButtonState__Class** type_info = (::app::PointerInputModule_ButtonState__Class**)(modloader::win::memory::resolve_rva(0x04778278)); }
    namespace PointerInputModule_MouseButtonEventData { IL2CPP_MODLOADER_DLLEXPORT ::app::PointerInputModule_MouseButtonEventData__Class** type_info = (::app::PointerInputModule_MouseButtonEventData__Class**)(modloader::win::memory::resolve_rva(0x04768930)); }
    namespace EventTrigger_TriggerEvent { IL2CPP_MODLOADER_DLLEXPORT ::app::EventTrigger_TriggerEvent__Class** type_info = (::app::EventTrigger_TriggerEvent__Class**)(modloader::win::memory::resolve_rva(0x04700DD8)); }
    namespace IPointerEnterHandler { IL2CPP_MODLOADER_DLLEXPORT ::app::IPointerEnterHandler__Class** type_info = (::app::IPointerEnterHandler__Class**)(modloader::win::memory::resolve_rva(0x047301D0)); }
    namespace IPointerExitHandler { IL2CPP_MODLOADER_DLLEXPORT ::app::IPointerExitHandler__Class** type_info = (::app::IPointerExitHandler__Class**)(modloader::win::memory::resolve_rva(0x04790238)); }
    namespace IPointerDownHandler { IL2CPP_MODLOADER_DLLEXPORT ::app::IPointerDownHandler__Class** type_info = (::app::IPointerDownHandler__Class**)(modloader::win::memory::resolve_rva(0x04728688)); }
    namespace IPointerUpHandler { IL2CPP_MODLOADER_DLLEXPORT ::app::IPointerUpHandler__Class** type_info = (::app::IPointerUpHandler__Class**)(modloader::win::memory::resolve_rva(0x047691B0)); }
    namespace IPointerClickHandler { IL2CPP_MODLOADER_DLLEXPORT ::app::IPointerClickHandler__Class** type_info = (::app::IPointerClickHandler__Class**)(modloader::win::memory::resolve_rva(0x0470B668)); }
    namespace IInitializePotentialDragHandler { IL2CPP_MODLOADER_DLLEXPORT ::app::IInitializePotentialDragHandler__Class** type_info = (::app::IInitializePotentialDragHandler__Class**)(modloader::win::memory::resolve_rva(0x0476DDA8)); }
    namespace IBeginDragHandler { IL2CPP_MODLOADER_DLLEXPORT ::app::IBeginDragHandler__Class** type_info = (::app::IBeginDragHandler__Class**)(modloader::win::memory::resolve_rva(0x047186B0)); }
    namespace IDragHandler { IL2CPP_MODLOADER_DLLEXPORT ::app::IDragHandler__Class** type_info = (::app::IDragHandler__Class**)(modloader::win::memory::resolve_rva(0x04767630)); }
    namespace IEndDragHandler { IL2CPP_MODLOADER_DLLEXPORT ::app::IEndDragHandler__Class** type_info = (::app::IEndDragHandler__Class**)(modloader::win::memory::resolve_rva(0x0471ACC0)); }
    namespace IDropHandler { IL2CPP_MODLOADER_DLLEXPORT ::app::IDropHandler__Class** type_info = (::app::IDropHandler__Class**)(modloader::win::memory::resolve_rva(0x0477D420)); }
    namespace IScrollHandler { IL2CPP_MODLOADER_DLLEXPORT ::app::IScrollHandler__Class** type_info = (::app::IScrollHandler__Class**)(modloader::win::memory::resolve_rva(0x0472FFF0)); }
    namespace IUpdateSelectedHandler { IL2CPP_MODLOADER_DLLEXPORT ::app::IUpdateSelectedHandler__Class** type_info = (::app::IUpdateSelectedHandler__Class**)(modloader::win::memory::resolve_rva(0x047388A8)); }
    namespace ISelectHandler { IL2CPP_MODLOADER_DLLEXPORT ::app::ISelectHandler__Class** type_info = (::app::ISelectHandler__Class**)(modloader::win::memory::resolve_rva(0x04763450)); }
    namespace IDeselectHandler { IL2CPP_MODLOADER_DLLEXPORT ::app::IDeselectHandler__Class** type_info = (::app::IDeselectHandler__Class**)(modloader::win::memory::resolve_rva(0x04702F08)); }
    namespace IMoveHandler { IL2CPP_MODLOADER_DLLEXPORT ::app::IMoveHandler__Class** type_info = (::app::IMoveHandler__Class**)(modloader::win::memory::resolve_rva(0x0474F398)); }
    namespace ISubmitHandler { IL2CPP_MODLOADER_DLLEXPORT ::app::ISubmitHandler__Class** type_info = (::app::ISubmitHandler__Class**)(modloader::win::memory::resolve_rva(0x04773E58)); }
    namespace ICancelHandler { IL2CPP_MODLOADER_DLLEXPORT ::app::ICancelHandler__Class** type_info = (::app::ICancelHandler__Class**)(modloader::win::memory::resolve_rva(0x0475B4A0)); }
    namespace IEventSystemHandler { IL2CPP_MODLOADER_DLLEXPORT ::app::IEventSystemHandler__Class** type_info = (::app::IEventSystemHandler__Class**)(modloader::win::memory::resolve_rva(0x047469E0)); }
    namespace ColorTween_ColorTweenCallback { IL2CPP_MODLOADER_DLLEXPORT ::app::ColorTween_ColorTweenCallback__Class** type_info = (::app::ColorTween_ColorTweenCallback__Class**)(modloader::win::memory::resolve_rva(0x0470C900)); }
    namespace FloatTween_FloatTweenCallback { IL2CPP_MODLOADER_DLLEXPORT ::app::FloatTween_FloatTweenCallback__Class** type_info = (::app::FloatTween_FloatTweenCallback__Class**)(modloader::win::memory::resolve_rva(0x04764DE0)); }
    namespace AnimationTriggers { IL2CPP_MODLOADER_DLLEXPORT ::app::AnimationTriggers__Class** type_info = (::app::AnimationTriggers__Class**)(modloader::win::memory::resolve_rva(0x04768588)); }
    namespace ColorBlock { IL2CPP_MODLOADER_DLLEXPORT ::app::ColorBlock__Class** type_info = (::app::ColorBlock__Class**)(modloader::win::memory::resolve_rva(0x0471A3B8)); }
    namespace Selectable { IL2CPP_MODLOADER_DLLEXPORT ::app::Selectable__Class** type_info = (::app::Selectable__Class**)(modloader::win::memory::resolve_rva(0x04771388)); }
    namespace Graphic { IL2CPP_MODLOADER_DLLEXPORT ::app::Graphic__Class** type_info = (::app::Graphic__Class**)(modloader::win::memory::resolve_rva(0x04721918)); }
    namespace VertexHelper { IL2CPP_MODLOADER_DLLEXPORT ::app::VertexHelper__Class** type_info = (::app::VertexHelper__Class**)(modloader::win::memory::resolve_rva(0x04710068)); }
    namespace Button_ButtonClickedEvent { IL2CPP_MODLOADER_DLLEXPORT ::app::Button_ButtonClickedEvent__Class** type_info = (::app::Button_ButtonClickedEvent__Class**)(modloader::win::memory::resolve_rva(0x0472F270)); }
}
