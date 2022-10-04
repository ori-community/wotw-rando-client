#include <Il2CppModLoader/app/types/ActivateAnimator.h>
#include <Il2CppModLoader/app/types/AnimationAdditiveStrengthContext.h>
#include <Il2CppModLoader/app/types/CameraShakeModifierContext.h>
#include <Il2CppModLoader/app/types/ChainLevelAndCount.h>
#include <Il2CppModLoader/app/types/Constraint__Enum.h>
#include <Il2CppModLoader/app/types/ConstraintsMetaData.h>
#include <Il2CppModLoader/app/types/CsvReader.h>
#include <Il2CppModLoader/app/types/CsvReader_Cell.h>
#include <Il2CppModLoader/app/types/CsvReader_ReadRow_d_10.h>
#include <Il2CppModLoader/app/types/CsvReader_ReadToEnd_d_11.h>
#include <Il2CppModLoader/app/types/CsvWriter.h>
#include <Il2CppModLoader/app/types/DesiredStateTransition.h>
#include <Il2CppModLoader/app/types/DesiredStateTransitionInfo.h>
#include <Il2CppModLoader/app/types/EntityId.h>
#include <Il2CppModLoader/app/types/Enum__Array.h>
#include <Il2CppModLoader/app/types/EulerXYZRotationAnimatorEntity.h>
#include <Il2CppModLoader/app/types/EulerXYZRotationTweenAnimator.h>
#include <Il2CppModLoader/app/types/EventDescriptorSet.h>
#include <Il2CppModLoader/app/types/EventTriggerAnimator_c.h>
#include <Il2CppModLoader/app/types/EventTriggerGameplayAnimator_c_DisplayClass2_0.h>
#include <Il2CppModLoader/app/types/ExternalTimelineEntity.h>
#include <Il2CppModLoader/app/types/ExternalTimelineRecord.h>
#include <Il2CppModLoader/app/types/GameObjectVirtualAnimator.h>
#include <Il2CppModLoader/app/types/GameObjectVirtualAnimator_Context.h>
#include <Il2CppModLoader/app/types/GennadiysDice.h>
#include <Il2CppModLoader/app/types/IBrainController.h>
#include <Il2CppModLoader/app/types/IConstrainedEntity.h>
#include <Il2CppModLoader/app/types/IConstrainedEntityWithChildren.h>
#include <Il2CppModLoader/app/types/IConstraint.h>
#include <Il2CppModLoader/app/types/IEventDescriptor.h>
#include <Il2CppModLoader/app/types/IEventReciever.h>
#include <Il2CppModLoader/app/types/IPoolableTimelineEntity.h>
#include <Il2CppModLoader/app/types/ITimelineEntity.h>
#include <Il2CppModLoader/app/types/ITimelineEntityParent.h>
#include <Il2CppModLoader/app/types/ITimelineStateRequirementResolver.h>
#include <Il2CppModLoader/app/types/ITweenLerpInputProvider.h>
#include <Il2CppModLoader/app/types/ITweenSpeedProvider.h>
#include <Il2CppModLoader/app/types/IntensityMultiplierContext.h>
#include <Il2CppModLoader/app/types/JsonBuilder.h>
#include <Il2CppModLoader/app/types/JsonBuilder_Slot.h>
#include <Il2CppModLoader/app/types/JsonParser.h>
#include <Il2CppModLoader/app/types/JsonParser_Array.h>
#include <Il2CppModLoader/app/types/JsonParser_Object.h>
#include <Il2CppModLoader/app/types/JsonParser_Slot.h>
#include <Il2CppModLoader/app/types/JsonToken__Enum.h>
#include <Il2CppModLoader/app/types/LerpFloatTweenable.h>
#include <Il2CppModLoader/app/types/LerpVector3Tweenable.h>
#include <Il2CppModLoader/app/types/MoonTimeline.h>
#include <Il2CppModLoader/app/types/MoonTimeline__Array.h>
#include <Il2CppModLoader/app/types/MoveTowardsColorTweenable.h>
#include <Il2CppModLoader/app/types/MoveTowardsFloatTweenable.h>
#include <Il2CppModLoader/app/types/MoveTowardsVector3Tweenable.h>
#include <Il2CppModLoader/app/types/ParticleSystem__Array.h>
#include <Il2CppModLoader/app/types/PassiveStateVolitileOverrideAnimator.h>
#include <Il2CppModLoader/app/types/PlaybackStatus.h>
#include <Il2CppModLoader/app/types/PositionAnimatorEntity.h>
#include <Il2CppModLoader/app/types/PositionTweenAnimator.h>
#include <Il2CppModLoader/app/types/PositionTweenCurveAnimator.h>
#include <Il2CppModLoader/app/types/PostProcessRenderContext.h>
#include <Il2CppModLoader/app/types/QuaternionRotationAnimatorEntity.h>
#include <Il2CppModLoader/app/types/Reaction.h>
#include <Il2CppModLoader/app/types/ScalableAnimationPlayer.h>
#include <Il2CppModLoader/app/types/ScalableAnimationPlayer_Event.h>
#include <Il2CppModLoader/app/types/ScalableAnimationPlayer_ScalingInterval.h>
#include <Il2CppModLoader/app/types/ScalableAnimationPlayer_ScenarioPlaybackData.h>
#include <Il2CppModLoader/app/types/ScalableAnimationPlayer_c.h>
#include <Il2CppModLoader/app/types/ScenarioRecorderTracker.h>
#include <Il2CppModLoader/app/types/SerializationSetupObserverNotifier.h>
#include <Il2CppModLoader/app/types/SetupStateVirtualAnimator.h>
#include <Il2CppModLoader/app/types/SetupStateVirtualAnimator_Context.h>
#include <Il2CppModLoader/app/types/SharedJsonBuilder.h>
#include <Il2CppModLoader/app/types/SharedJsonBuilder_c.h>
#include <Il2CppModLoader/app/types/SharedJsonParser.h>
#include <Il2CppModLoader/app/types/SharedJsonParser_c.h>
#include <Il2CppModLoader/app/types/Substr.h>
#include <Il2CppModLoader/app/types/TimelineConstraint.h>
#include <Il2CppModLoader/app/types/TimelineContext.h>
#include <Il2CppModLoader/app/types/TimelineDoubleEndQueue.h>
#include <Il2CppModLoader/app/types/TimelineEntity.h>
#include <Il2CppModLoader/app/types/TimelineEntityRecord.h>
#include <Il2CppModLoader/app/types/TimelineMarkerRecord.h>
#include <Il2CppModLoader/app/types/TimelineParentOwnerUtils.h>
#include <Il2CppModLoader/app/types/TimelineParentOwnerUtils_c.h>
#include <Il2CppModLoader/app/types/UberStateModifierTargetVirtualAnimator.h>
#include <Il2CppModLoader/app/types/UberStateModifierTargetVirtualAnimator_Context.h>
#include <Il2CppModLoader/app/types/UberStateVolitileOverrideAnimator.h>
#include <Il2CppModLoader/app/types/VirtualClipsBuilder_BuilderScope.h>
#include <Il2CppModLoader/app/types/VirtualMoonTimeline.h>
#include <Il2CppModLoader/app/types/VirtualTimelineEntityPool.h>
#include <Il2CppModLoader/app/types/VirtualTimelineRepresentationGroup__Enum.h>
#include <Il2CppModLoader/app/types/XAttributeValuePropertyDescriptor.h>
#include <Il2CppModLoader/app/types/XElementAttributePropertyDescriptor_c.h>
#include <Il2CppModLoader/app/types/XElementDescendantsPropertyDescriptor.h>
#include <Il2CppModLoader/app/types/XElementDescendantsPropertyDescriptor_c.h>
#include <Il2CppModLoader/app/types/XElementElementPropertyDescriptor.h>
#include <Il2CppModLoader/app/types/XElementElementPropertyDescriptor_c.h>
#include <Il2CppModLoader/app/types/XElementElementsPropertyDescriptor.h>
#include <Il2CppModLoader/app/types/XElementElementsPropertyDescriptor_c.h>
#include <Il2CppModLoader/app/types/XElementValuePropertyDescriptor.h>
#include <Il2CppModLoader/app/types/XElementXmlPropertyDescriptor.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XElementAttributePropertyDescriptor_c {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XElementAttributePropertyDescriptor_c__Class** type_info = (::app::XElementAttributePropertyDescriptor_c__Class**)(modloader::win::memory::resolve_rva(0x047096C8));
    }
    namespace XElementDescendantsPropertyDescriptor {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XElementDescendantsPropertyDescriptor__Class** type_info = (::app::XElementDescendantsPropertyDescriptor__Class**)(modloader::win::memory::resolve_rva(0x04730DD0));
    }
    namespace XElementDescendantsPropertyDescriptor_c {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XElementDescendantsPropertyDescriptor_c__Class** type_info = (::app::XElementDescendantsPropertyDescriptor_c__Class**)(modloader::win::memory::resolve_rva(0x0478B1B8));
    }
    namespace XElementElementPropertyDescriptor {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XElementElementPropertyDescriptor__Class** type_info = (::app::XElementElementPropertyDescriptor__Class**)(modloader::win::memory::resolve_rva(0x0471C178));
    }
    namespace XElementElementPropertyDescriptor_c {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XElementElementPropertyDescriptor_c__Class** type_info = (::app::XElementElementPropertyDescriptor_c__Class**)(modloader::win::memory::resolve_rva(0x0473CF78));
    }
    namespace XElementElementsPropertyDescriptor {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XElementElementsPropertyDescriptor__Class** type_info = (::app::XElementElementsPropertyDescriptor__Class**)(modloader::win::memory::resolve_rva(0x0470F7A8));
    }
    namespace XElementElementsPropertyDescriptor_c {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XElementElementsPropertyDescriptor_c__Class** type_info = (::app::XElementElementsPropertyDescriptor_c__Class**)(modloader::win::memory::resolve_rva(0x0472B3A0));
    }
    namespace XElementValuePropertyDescriptor {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XElementValuePropertyDescriptor__Class** type_info = (::app::XElementValuePropertyDescriptor__Class**)(modloader::win::memory::resolve_rva(0x04703620));
    }
    namespace XElementXmlPropertyDescriptor {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XElementXmlPropertyDescriptor__Class** type_info = (::app::XElementXmlPropertyDescriptor__Class**)(modloader::win::memory::resolve_rva(0x047848C0));
    }
    namespace XAttributeValuePropertyDescriptor {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XAttributeValuePropertyDescriptor__Class** type_info = (::app::XAttributeValuePropertyDescriptor__Class**)(modloader::win::memory::resolve_rva(0x0477E3A8));
    }
    namespace CsvReader_Cell {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CsvReader_Cell__Class** type_info = (::app::CsvReader_Cell__Class**)(modloader::win::memory::resolve_rva(0x04790D38));
    }
    namespace CsvReader {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CsvReader__Class** type_info = (::app::CsvReader__Class**)(modloader::win::memory::resolve_rva(0x047616C0));
    }
    namespace CsvReader_ReadRow_d_10 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CsvReader_ReadRow_d_10__Class** type_info = (::app::CsvReader_ReadRow_d_10__Class**)(modloader::win::memory::resolve_rva(0x04720AE8));
    }
    namespace CsvReader_ReadToEnd_d_11 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CsvReader_ReadToEnd_d_11__Class** type_info = (::app::CsvReader_ReadToEnd_d_11__Class**)(modloader::win::memory::resolve_rva(0x0476C0B8));
    }
    namespace CsvWriter {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CsvWriter__Class** type_info = (::app::CsvWriter__Class**)(modloader::win::memory::resolve_rva(0x04789C08));
    }
    namespace JsonBuilder {
        IL2CPP_MODLOADER_DLLEXPORT ::app::JsonBuilder__Class** type_info = (::app::JsonBuilder__Class**)(modloader::win::memory::resolve_rva(0x0477CC48));
    }
    namespace JsonBuilder_Slot {
        IL2CPP_MODLOADER_DLLEXPORT ::app::JsonBuilder_Slot__Class** type_info = (::app::JsonBuilder_Slot__Class**)(modloader::win::memory::resolve_rva(0x0476E340));
    }
    namespace Substr {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Substr__Class** type_info = (::app::Substr__Class**)(modloader::win::memory::resolve_rva(0x047792D8));
    }
    namespace JsonParser {
        IL2CPP_MODLOADER_DLLEXPORT ::app::JsonParser__Class** type_info = (::app::JsonParser__Class**)(modloader::win::memory::resolve_rva(0x047294A0));
    }
    namespace JsonParser_Slot {
        IL2CPP_MODLOADER_DLLEXPORT ::app::JsonParser_Slot__Class** type_info = (::app::JsonParser_Slot__Class**)(modloader::win::memory::resolve_rva(0x0477D798));
    }
    namespace JsonToken__Enum {
        IL2CPP_MODLOADER_DLLEXPORT ::app::JsonToken__Enum__Class** type_info = (::app::JsonToken__Enum__Class**)(modloader::win::memory::resolve_rva(0x0471E728));
    }
    namespace JsonParser_Object {
        IL2CPP_MODLOADER_DLLEXPORT ::app::JsonParser_Object__Class** type_info = (::app::JsonParser_Object__Class**)(modloader::win::memory::resolve_rva(0x04725DB0));
    }
    namespace JsonParser_Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::JsonParser_Array__Class** type_info = (::app::JsonParser_Array__Class**)(modloader::win::memory::resolve_rva(0x04784790));
    }
    namespace SharedJsonBuilder {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SharedJsonBuilder__Class** type_info = (::app::SharedJsonBuilder__Class**)(modloader::win::memory::resolve_rva(0x04738260));
    }
    namespace SharedJsonBuilder_c {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SharedJsonBuilder_c__Class** type_info = (::app::SharedJsonBuilder_c__Class**)(modloader::win::memory::resolve_rva(0x04708630));
    }
    namespace SharedJsonParser {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SharedJsonParser__Class** type_info = (::app::SharedJsonParser__Class**)(modloader::win::memory::resolve_rva(0x04735210));
    }
    namespace SharedJsonParser_c {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SharedJsonParser_c__Class** type_info = (::app::SharedJsonParser_c__Class**)(modloader::win::memory::resolve_rva(0x04791348));
    }
    namespace PostProcessRenderContext {
        IL2CPP_MODLOADER_DLLEXPORT ::app::PostProcessRenderContext__Class** type_info = (::app::PostProcessRenderContext__Class**)(modloader::win::memory::resolve_rva(0x04708F38));
    }
    namespace Enum__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Enum__Array__Class** type_info = (::app::Enum__Array__Class**)(modloader::win::memory::resolve_rva(0x04782038));
    }
    namespace SerializationSetupObserverNotifier {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SerializationSetupObserverNotifier__Class** type_info = (::app::SerializationSetupObserverNotifier__Class**)(modloader::win::memory::resolve_rva(0x0474AC98));
    }
    namespace ITimelineStateRequirementResolver {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ITimelineStateRequirementResolver__Class** type_info = (::app::ITimelineStateRequirementResolver__Class**)(modloader::win::memory::resolve_rva(0x04770D78));
    }
    namespace TimelineEntity {
        IL2CPP_MODLOADER_DLLEXPORT ::app::TimelineEntity__Class** type_info = (::app::TimelineEntity__Class**)(modloader::win::memory::resolve_rva(0x04735218));
    }
    namespace MoonTimeline {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MoonTimeline__Class** type_info = (::app::MoonTimeline__Class**)(modloader::win::memory::resolve_rva(0x047875E0));
    }
    namespace PlaybackStatus {
        IL2CPP_MODLOADER_DLLEXPORT ::app::PlaybackStatus__Class** type_info = (::app::PlaybackStatus__Class**)(modloader::win::memory::resolve_rva(0x04751EF8));
    }
    namespace IEventReciever {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IEventReciever__Class** type_info = (::app::IEventReciever__Class**)(modloader::win::memory::resolve_rva(0x0471ED88));
    }
    namespace ITimelineEntityParent {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ITimelineEntityParent__Class** type_info = (::app::ITimelineEntityParent__Class**)(modloader::win::memory::resolve_rva(0x047660F8));
    }
    namespace EntityId {
        IL2CPP_MODLOADER_DLLEXPORT ::app::EntityId__Class** type_info = (::app::EntityId__Class**)(modloader::win::memory::resolve_rva(0x04774920));
    }
    namespace TimelineEntityRecord {
        IL2CPP_MODLOADER_DLLEXPORT ::app::TimelineEntityRecord__Class** type_info = (::app::TimelineEntityRecord__Class**)(modloader::win::memory::resolve_rva(0x04777718));
    }
    namespace TimelineConstraint {
        IL2CPP_MODLOADER_DLLEXPORT ::app::TimelineConstraint__Class** type_info = (::app::TimelineConstraint__Class**)(modloader::win::memory::resolve_rva(0x047244E0));
    }
    namespace ITimelineEntity {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ITimelineEntity__Class** type_info = (::app::ITimelineEntity__Class**)(modloader::win::memory::resolve_rva(0x0476FF20));
    }
    namespace IConstrainedEntity {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IConstrainedEntity__Class** type_info = (::app::IConstrainedEntity__Class**)(modloader::win::memory::resolve_rva(0x0478DD18));
    }
    namespace Constraint__Enum {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Constraint__Enum__Class** type_info = (::app::Constraint__Enum__Class**)(modloader::win::memory::resolve_rva(0x0472EF60));
    }
    namespace Reaction {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Reaction__Class** type_info = (::app::Reaction__Class**)(modloader::win::memory::resolve_rva(0x0474B000));
    }
    namespace TimelineDoubleEndQueue {
        IL2CPP_MODLOADER_DLLEXPORT ::app::TimelineDoubleEndQueue__Class** type_info = (::app::TimelineDoubleEndQueue__Class**)(modloader::win::memory::resolve_rva(0x047644F0));
    }
    namespace MoonTimeline__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MoonTimeline__Array__Class** type_info = (::app::MoonTimeline__Array__Class**)(modloader::win::memory::resolve_rva(0x04749778));
    }
    namespace ConstraintsMetaData {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ConstraintsMetaData__Class** type_info = (::app::ConstraintsMetaData__Class**)(modloader::win::memory::resolve_rva(0x04769C48));
    }
    namespace TimelineMarkerRecord {
        IL2CPP_MODLOADER_DLLEXPORT ::app::TimelineMarkerRecord__Class** type_info = (::app::TimelineMarkerRecord__Class**)(modloader::win::memory::resolve_rva(0x0475DF88));
    }
    namespace ExternalTimelineRecord {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ExternalTimelineRecord__Class** type_info = (::app::ExternalTimelineRecord__Class**)(modloader::win::memory::resolve_rva(0x0477A570));
    }
    namespace TimelineContext {
        IL2CPP_MODLOADER_DLLEXPORT ::app::TimelineContext__Class** type_info = (::app::TimelineContext__Class**)(modloader::win::memory::resolve_rva(0x04779578));
    }
    namespace IConstrainedEntityWithChildren {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IConstrainedEntityWithChildren__Class** type_info = (::app::IConstrainedEntityWithChildren__Class**)(modloader::win::memory::resolve_rva(0x047729A8));
    }
    namespace IConstraint {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IConstraint__Class** type_info = (::app::IConstraint__Class**)(modloader::win::memory::resolve_rva(0x04749108));
    }
    namespace IEventDescriptor {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IEventDescriptor__Class** type_info = (::app::IEventDescriptor__Class**)(modloader::win::memory::resolve_rva(0x04703BA8));
    }
    namespace VirtualTimelineRepresentationGroup__Enum {
        IL2CPP_MODLOADER_DLLEXPORT ::app::VirtualTimelineRepresentationGroup__Enum__Class** type_info = (::app::VirtualTimelineRepresentationGroup__Enum__Class**)(modloader::win::memory::resolve_rva(0x04768478));
    }
    namespace GameObjectVirtualAnimator {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GameObjectVirtualAnimator__Class** type_info = (::app::GameObjectVirtualAnimator__Class**)(modloader::win::memory::resolve_rva(0x0477E4A8));
    }
    namespace GameObjectVirtualAnimator_Context {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GameObjectVirtualAnimator_Context__Class** type_info = (::app::GameObjectVirtualAnimator_Context__Class**)(modloader::win::memory::resolve_rva(0x0472B8A8));
    }
    namespace VirtualClipsBuilder_BuilderScope {
        IL2CPP_MODLOADER_DLLEXPORT ::app::VirtualClipsBuilder_BuilderScope__Class** type_info = (::app::VirtualClipsBuilder_BuilderScope__Class**)(modloader::win::memory::resolve_rva(0x04704F80));
    }
    namespace VirtualMoonTimeline {
        IL2CPP_MODLOADER_DLLEXPORT ::app::VirtualMoonTimeline__Class** type_info = (::app::VirtualMoonTimeline__Class**)(modloader::win::memory::resolve_rva(0x047947A0));
    }
    namespace VirtualTimelineEntityPool {
        IL2CPP_MODLOADER_DLLEXPORT ::app::VirtualTimelineEntityPool__Class** type_info = (::app::VirtualTimelineEntityPool__Class**)(modloader::win::memory::resolve_rva(0x0470CD68));
    }
    namespace IPoolableTimelineEntity {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IPoolableTimelineEntity__Class** type_info = (::app::IPoolableTimelineEntity__Class**)(modloader::win::memory::resolve_rva(0x04747C18));
    }
    namespace ScenarioRecorderTracker {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ScenarioRecorderTracker__Class** type_info = (::app::ScenarioRecorderTracker__Class**)(modloader::win::memory::resolve_rva(0x04789CC0));
    }
    namespace SetupStateVirtualAnimator {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SetupStateVirtualAnimator__Class** type_info = (::app::SetupStateVirtualAnimator__Class**)(modloader::win::memory::resolve_rva(0x04784B48));
    }
    namespace SetupStateVirtualAnimator_Context {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SetupStateVirtualAnimator_Context__Class** type_info = (::app::SetupStateVirtualAnimator_Context__Class**)(modloader::win::memory::resolve_rva(0x047102E0));
    }
    namespace TimelineParentOwnerUtils {
        IL2CPP_MODLOADER_DLLEXPORT ::app::TimelineParentOwnerUtils__Class** type_info = (::app::TimelineParentOwnerUtils__Class**)(modloader::win::memory::resolve_rva(0x04734B80));
    }
    namespace TimelineParentOwnerUtils_c {
        IL2CPP_MODLOADER_DLLEXPORT ::app::TimelineParentOwnerUtils_c__Class** type_info = (::app::TimelineParentOwnerUtils_c__Class**)(modloader::win::memory::resolve_rva(0x04703958));
    }
    namespace UberStateModifierTargetVirtualAnimator {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UberStateModifierTargetVirtualAnimator__Class** type_info = (::app::UberStateModifierTargetVirtualAnimator__Class**)(modloader::win::memory::resolve_rva(0x04727CE8));
    }
    namespace UberStateModifierTargetVirtualAnimator_Context {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UberStateModifierTargetVirtualAnimator_Context__Class** type_info = (::app::UberStateModifierTargetVirtualAnimator_Context__Class**)(modloader::win::memory::resolve_rva(0x047789A8));
    }
    namespace ChainLevelAndCount {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ChainLevelAndCount__Class** type_info = (::app::ChainLevelAndCount__Class**)(modloader::win::memory::resolve_rva(0x047423C0));
    }
    namespace ITweenLerpInputProvider {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ITweenLerpInputProvider__Class** type_info = (::app::ITweenLerpInputProvider__Class**)(modloader::win::memory::resolve_rva(0x0476C1B0));
    }
    namespace LerpVector3Tweenable {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LerpVector3Tweenable__Class** type_info = (::app::LerpVector3Tweenable__Class**)(modloader::win::memory::resolve_rva(0x0473C8F0));
    }
    namespace LerpFloatTweenable {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LerpFloatTweenable__Class** type_info = (::app::LerpFloatTweenable__Class**)(modloader::win::memory::resolve_rva(0x0471BA38));
    }
    namespace MoveTowardsColorTweenable {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MoveTowardsColorTweenable__Class** type_info = (::app::MoveTowardsColorTweenable__Class**)(modloader::win::memory::resolve_rva(0x0477F9E0));
    }
    namespace MoveTowardsFloatTweenable {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MoveTowardsFloatTweenable__Class** type_info = (::app::MoveTowardsFloatTweenable__Class**)(modloader::win::memory::resolve_rva(0x0470ED40));
    }
    namespace MoveTowardsVector3Tweenable {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MoveTowardsVector3Tweenable__Class** type_info = (::app::MoveTowardsVector3Tweenable__Class**)(modloader::win::memory::resolve_rva(0x04794730));
    }
    namespace AnimationAdditiveStrengthContext {
        IL2CPP_MODLOADER_DLLEXPORT ::app::AnimationAdditiveStrengthContext__Class** type_info = (::app::AnimationAdditiveStrengthContext__Class**)(modloader::win::memory::resolve_rva(0x0475B890));
    }
    namespace IBrainController {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IBrainController__Class** type_info = (::app::IBrainController__Class**)(modloader::win::memory::resolve_rva(0x047982A8));
    }
    namespace IntensityMultiplierContext {
        IL2CPP_MODLOADER_DLLEXPORT ::app::IntensityMultiplierContext__Class** type_info = (::app::IntensityMultiplierContext__Class**)(modloader::win::memory::resolve_rva(0x047941C0));
    }
    namespace CameraShakeModifierContext {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CameraShakeModifierContext__Class** type_info = (::app::CameraShakeModifierContext__Class**)(modloader::win::memory::resolve_rva(0x04721EA0));
    }
    namespace ScalableAnimationPlayer {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ScalableAnimationPlayer__Class** type_info = (::app::ScalableAnimationPlayer__Class**)(modloader::win::memory::resolve_rva(0x04760028));
    }
    namespace ScalableAnimationPlayer_Event {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ScalableAnimationPlayer_Event__Class** type_info = (::app::ScalableAnimationPlayer_Event__Class**)(modloader::win::memory::resolve_rva(0x04728100));
    }
    namespace ScalableAnimationPlayer_ScalingInterval {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ScalableAnimationPlayer_ScalingInterval__Class** type_info = (::app::ScalableAnimationPlayer_ScalingInterval__Class**)(modloader::win::memory::resolve_rva(0x04740108));
    }
    namespace ScalableAnimationPlayer_ScenarioPlaybackData {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ScalableAnimationPlayer_ScenarioPlaybackData__Class** type_info = (::app::ScalableAnimationPlayer_ScenarioPlaybackData__Class**)(modloader::win::memory::resolve_rva(0x047304C8));
    }
    namespace ScalableAnimationPlayer_c {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ScalableAnimationPlayer_c__Class** type_info = (::app::ScalableAnimationPlayer_c__Class**)(modloader::win::memory::resolve_rva(0x04780758));
    }
    namespace DesiredStateTransition {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DesiredStateTransition__Class** type_info = (::app::DesiredStateTransition__Class**)(modloader::win::memory::resolve_rva(0x0471C450));
    }
    namespace DesiredStateTransitionInfo {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DesiredStateTransitionInfo__Class** type_info = (::app::DesiredStateTransitionInfo__Class**)(modloader::win::memory::resolve_rva(0x047248B8));
    }
    namespace ActivateAnimator {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ActivateAnimator__Class** type_info = (::app::ActivateAnimator__Class**)(modloader::win::memory::resolve_rva(0x0473F488));
    }
    namespace GennadiysDice {
        IL2CPP_MODLOADER_DLLEXPORT ::app::GennadiysDice__Class** type_info = (::app::GennadiysDice__Class**)(modloader::win::memory::resolve_rva(0x0478DDB8));
    }
    namespace EventDescriptorSet {
        IL2CPP_MODLOADER_DLLEXPORT ::app::EventDescriptorSet__Class** type_info = (::app::EventDescriptorSet__Class**)(modloader::win::memory::resolve_rva(0x047903F0));
    }
    namespace ParticleSystem__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ParticleSystem__Array__Class** type_info = (::app::ParticleSystem__Array__Class**)(modloader::win::memory::resolve_rva(0x04752998));
    }
    namespace PassiveStateVolitileOverrideAnimator {
        IL2CPP_MODLOADER_DLLEXPORT ::app::PassiveStateVolitileOverrideAnimator__Class** type_info = (::app::PassiveStateVolitileOverrideAnimator__Class**)(modloader::win::memory::resolve_rva(0x04718808));
    }
    namespace UberStateVolitileOverrideAnimator {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UberStateVolitileOverrideAnimator__Class** type_info = (::app::UberStateVolitileOverrideAnimator__Class**)(modloader::win::memory::resolve_rva(0x04704CB8));
    }
    namespace EventTriggerAnimator_c {
        IL2CPP_MODLOADER_DLLEXPORT ::app::EventTriggerAnimator_c__Class** type_info = (::app::EventTriggerAnimator_c__Class**)(modloader::win::memory::resolve_rva(0x0477EF00));
    }
    namespace EventTriggerGameplayAnimator_c_DisplayClass2_0 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::EventTriggerGameplayAnimator_c_DisplayClass2_0__Class** type_info = (::app::EventTriggerGameplayAnimator_c_DisplayClass2_0__Class**)(modloader::win::memory::resolve_rva(0x04733FC0));
    }
    namespace ExternalTimelineEntity {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ExternalTimelineEntity__Class** type_info = (::app::ExternalTimelineEntity__Class**)(modloader::win::memory::resolve_rva(0x04786178));
    }
    namespace EulerXYZRotationAnimatorEntity {
        IL2CPP_MODLOADER_DLLEXPORT ::app::EulerXYZRotationAnimatorEntity__Class** type_info = (::app::EulerXYZRotationAnimatorEntity__Class**)(modloader::win::memory::resolve_rva(0x04719EE8));
    }
    namespace PositionAnimatorEntity {
        IL2CPP_MODLOADER_DLLEXPORT ::app::PositionAnimatorEntity__Class** type_info = (::app::PositionAnimatorEntity__Class**)(modloader::win::memory::resolve_rva(0x04745768));
    }
    namespace QuaternionRotationAnimatorEntity {
        IL2CPP_MODLOADER_DLLEXPORT ::app::QuaternionRotationAnimatorEntity__Class** type_info = (::app::QuaternionRotationAnimatorEntity__Class**)(modloader::win::memory::resolve_rva(0x04791AB0));
    }
    namespace EulerXYZRotationTweenAnimator {
        IL2CPP_MODLOADER_DLLEXPORT ::app::EulerXYZRotationTweenAnimator__Class** type_info = (::app::EulerXYZRotationTweenAnimator__Class**)(modloader::win::memory::resolve_rva(0x04714598));
    }
    namespace PositionTweenAnimator {
        IL2CPP_MODLOADER_DLLEXPORT ::app::PositionTweenAnimator__Class** type_info = (::app::PositionTweenAnimator__Class**)(modloader::win::memory::resolve_rva(0x0476BDC0));
    }
    namespace PositionTweenCurveAnimator {
        IL2CPP_MODLOADER_DLLEXPORT ::app::PositionTweenCurveAnimator__Class** type_info = (::app::PositionTweenCurveAnimator__Class**)(modloader::win::memory::resolve_rva(0x04739878));
    }
    namespace ITweenSpeedProvider {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ITweenSpeedProvider__Class** type_info = (::app::ITweenSpeedProvider__Class**)(modloader::win::memory::resolve_rva(0x047687E8));
    }
} // namespace app::classes::types
