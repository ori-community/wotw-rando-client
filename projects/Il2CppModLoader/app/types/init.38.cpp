#include <Il2CppModLoader/app/types/AnimationAdditiveStrengthContext.h>
#include <Il2CppModLoader/app/types/BaseUriAnnotation.h>
#include <Il2CppModLoader/app/types/CameraShakeModifierContext.h>
#include <Il2CppModLoader/app/types/ChainLevelAndCount.h>
#include <Il2CppModLoader/app/types/Constraint__Enum.h>
#include <Il2CppModLoader/app/types/ConstraintsMetaData.h>
#include <Il2CppModLoader/app/types/CsvReader.h>
#include <Il2CppModLoader/app/types/CsvReader_Cell.h>
#include <Il2CppModLoader/app/types/CsvReader_ReadRow_d_10.h>
#include <Il2CppModLoader/app/types/CsvReader_ReadToEnd_d_11.h>
#include <Il2CppModLoader/app/types/CsvWriter.h>
#include <Il2CppModLoader/app/types/EntityId.h>
#include <Il2CppModLoader/app/types/Enum__Array.h>
#include <Il2CppModLoader/app/types/ExternalTimelineRecord.h>
#include <Il2CppModLoader/app/types/GameObjectVirtualAnimator.h>
#include <Il2CppModLoader/app/types/GameObjectVirtualAnimator_Context.h>
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
#include <Il2CppModLoader/app/types/LineInfoAnnotation.h>
#include <Il2CppModLoader/app/types/LineInfoEndElementAnnotation.h>
#include <Il2CppModLoader/app/types/MoonTimeline.h>
#include <Il2CppModLoader/app/types/MoonTimeline__Array.h>
#include <Il2CppModLoader/app/types/MoveTowardsColorTweenable.h>
#include <Il2CppModLoader/app/types/MoveTowardsFloatTweenable.h>
#include <Il2CppModLoader/app/types/MoveTowardsVector3Tweenable.h>
#include <Il2CppModLoader/app/types/NamespaceResolver_NamespaceDeclaration.h>
#include <Il2CppModLoader/app/types/PlaybackStatus.h>
#include <Il2CppModLoader/app/types/PostProcessRenderContext.h>
#include <Il2CppModLoader/app/types/Reaction.h>
#include <Il2CppModLoader/app/types/SaveOptions__Enum.h>
#include <Il2CppModLoader/app/types/ScalableAnimationPlayer.h>
#include <Il2CppModLoader/app/types/ScalableAnimationPlayer_Event.h>
#include <Il2CppModLoader/app/types/ScalableAnimationPlayer_ScalingInterval.h>
#include <Il2CppModLoader/app/types/ScalableAnimationPlayer_ScenarioPlaybackData.h>
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
#include <Il2CppModLoader/app/types/TransferCodingWithQualityHeaderValue.h>
#include <Il2CppModLoader/app/types/UberStateModifierTargetVirtualAnimator.h>
#include <Il2CppModLoader/app/types/UberStateModifierTargetVirtualAnimator_Context.h>
#include <Il2CppModLoader/app/types/ViaHeaderValue.h>
#include <Il2CppModLoader/app/types/VirtualClipsBuilder_BuilderScope.h>
#include <Il2CppModLoader/app/types/VirtualMoonTimeline.h>
#include <Il2CppModLoader/app/types/VirtualTimelineEntityPool.h>
#include <Il2CppModLoader/app/types/VirtualTimelineRepresentationGroup__Enum.h>
#include <Il2CppModLoader/app/types/WarningHeaderValue.h>
#include <Il2CppModLoader/app/types/XAttribute.h>
#include <Il2CppModLoader/app/types/XAttributeValuePropertyDescriptor.h>
#include <Il2CppModLoader/app/types/XCData.h>
#include <Il2CppModLoader/app/types/XComment.h>
#include <Il2CppModLoader/app/types/XContainer.h>
#include <Il2CppModLoader/app/types/XContainer_GetDescendants_d_39.h>
#include <Il2CppModLoader/app/types/XContainer_GetElements_d_40.h>
#include <Il2CppModLoader/app/types/XContainer_Nodes_d_18.h>
#include <Il2CppModLoader/app/types/XDeclaration.h>
#include <Il2CppModLoader/app/types/XDocument.h>
#include <Il2CppModLoader/app/types/XDocumentType.h>
#include <Il2CppModLoader/app/types/XElement.h>
#include <Il2CppModLoader/app/types/XElementAttributePropertyDescriptor.h>
#include <Il2CppModLoader/app/types/XElementAttributePropertyDescriptor_c.h>
#include <Il2CppModLoader/app/types/XElementDescendantsPropertyDescriptor.h>
#include <Il2CppModLoader/app/types/XElementDescendantsPropertyDescriptor_c.h>
#include <Il2CppModLoader/app/types/XElementElementPropertyDescriptor.h>
#include <Il2CppModLoader/app/types/XElementElementPropertyDescriptor_c.h>
#include <Il2CppModLoader/app/types/XElementElementsPropertyDescriptor.h>
#include <Il2CppModLoader/app/types/XElementElementsPropertyDescriptor_c.h>
#include <Il2CppModLoader/app/types/XElementValuePropertyDescriptor.h>
#include <Il2CppModLoader/app/types/XElementXmlPropertyDescriptor.h>
#include <Il2CppModLoader/app/types/XElement_GetAttributes_d_105.h>
#include <Il2CppModLoader/app/types/XName.h>
#include <Il2CppModLoader/app/types/XNamespace.h>
#include <Il2CppModLoader/app/types/XNode.h>
#include <Il2CppModLoader/app/types/XObject.h>
#include <Il2CppModLoader/app/types/XObjectChangeAnnotation.h>
#include <Il2CppModLoader/app/types/XObjectChangeEventArgs.h>
#include <Il2CppModLoader/app/types/XProcessingInstruction.h>
#include <Il2CppModLoader/app/types/XStreamingElement.h>
#include <Il2CppModLoader/app/types/XText.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TransferCodingWithQualityHeaderValue {
        IL2CPP_MODLOADER_DLLEXPORT ::app::TransferCodingWithQualityHeaderValue__Class** type_info = (::app::TransferCodingWithQualityHeaderValue__Class**)(modloader::win::memory::resolve_rva(0x04706878));
    }
    namespace ViaHeaderValue {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ViaHeaderValue__Class** type_info = (::app::ViaHeaderValue__Class**)(modloader::win::memory::resolve_rva(0x0474CDC8));
    }
    namespace WarningHeaderValue {
        IL2CPP_MODLOADER_DLLEXPORT ::app::WarningHeaderValue__Class** type_info = (::app::WarningHeaderValue__Class**)(modloader::win::memory::resolve_rva(0x047090C8));
    }
    namespace XName {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XName__Class** type_info = (::app::XName__Class**)(modloader::win::memory::resolve_rva(0x04775B78));
    }
    namespace XNamespace {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XNamespace__Class** type_info = (::app::XNamespace__Class**)(modloader::win::memory::resolve_rva(0x04725360));
    }
    namespace XObject {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XObject__Class** type_info = (::app::XObject__Class**)(modloader::win::memory::resolve_rva(0x0471C1D8));
    }
    namespace XNode {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XNode__Class** type_info = (::app::XNode__Class**)(modloader::win::memory::resolve_rva(0x0473A050));
    }
    namespace XContainer {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XContainer__Class** type_info = (::app::XContainer__Class**)(modloader::win::memory::resolve_rva(0x0476A7F8));
    }
    namespace XText {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XText__Class** type_info = (::app::XText__Class**)(modloader::win::memory::resolve_rva(0x047241B0));
    }
    namespace XElement {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XElement__Class** type_info = (::app::XElement__Class**)(modloader::win::memory::resolve_rva(0x0473D718));
    }
    namespace XAttribute {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XAttribute__Class** type_info = (::app::XAttribute__Class**)(modloader::win::memory::resolve_rva(0x04713338));
    }
    namespace XObjectChangeEventArgs {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XObjectChangeEventArgs__Class** type_info = (::app::XObjectChangeEventArgs__Class**)(modloader::win::memory::resolve_rva(0x04754868));
    }
    namespace SaveOptions__Enum {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SaveOptions__Enum__Class** type_info = (::app::SaveOptions__Enum__Class**)(modloader::win::memory::resolve_rva(0x0472EFD8));
    }
    namespace BaseUriAnnotation {
        IL2CPP_MODLOADER_DLLEXPORT ::app::BaseUriAnnotation__Class** type_info = (::app::BaseUriAnnotation__Class**)(modloader::win::memory::resolve_rva(0x0478B4F0));
    }
    namespace LineInfoAnnotation {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LineInfoAnnotation__Class** type_info = (::app::LineInfoAnnotation__Class**)(modloader::win::memory::resolve_rva(0x04774ED8));
    }
    namespace LineInfoEndElementAnnotation {
        IL2CPP_MODLOADER_DLLEXPORT ::app::LineInfoEndElementAnnotation__Class** type_info = (::app::LineInfoEndElementAnnotation__Class**)(modloader::win::memory::resolve_rva(0x04744C48));
    }
    namespace XObjectChangeAnnotation {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XObjectChangeAnnotation__Class** type_info = (::app::XObjectChangeAnnotation__Class**)(modloader::win::memory::resolve_rva(0x04761918));
    }
    namespace XCData {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XCData__Class** type_info = (::app::XCData__Class**)(modloader::win::memory::resolve_rva(0x047046D8));
    }
    namespace XContainer_Nodes_d_18 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XContainer_Nodes_d_18__Class** type_info = (::app::XContainer_Nodes_d_18__Class**)(modloader::win::memory::resolve_rva(0x047547D8));
    }
    namespace XContainer_GetDescendants_d_39 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XContainer_GetDescendants_d_39__Class** type_info = (::app::XContainer_GetDescendants_d_39__Class**)(modloader::win::memory::resolve_rva(0x047587A8));
    }
    namespace XContainer_GetElements_d_40 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XContainer_GetElements_d_40__Class** type_info = (::app::XContainer_GetElements_d_40__Class**)(modloader::win::memory::resolve_rva(0x0470F928));
    }
    namespace XStreamingElement {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XStreamingElement__Class** type_info = (::app::XStreamingElement__Class**)(modloader::win::memory::resolve_rva(0x04781C90));
    }
    namespace XElement_GetAttributes_d_105 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XElement_GetAttributes_d_105__Class** type_info = (::app::XElement_GetAttributes_d_105__Class**)(modloader::win::memory::resolve_rva(0x047851D0));
    }
    namespace NamespaceResolver_NamespaceDeclaration {
        IL2CPP_MODLOADER_DLLEXPORT ::app::NamespaceResolver_NamespaceDeclaration__Class** type_info = (::app::NamespaceResolver_NamespaceDeclaration__Class**)(modloader::win::memory::resolve_rva(0x0478F918));
    }
    namespace XDocument {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XDocument__Class** type_info = (::app::XDocument__Class**)(modloader::win::memory::resolve_rva(0x0473DB40));
    }
    namespace XDeclaration {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XDeclaration__Class** type_info = (::app::XDeclaration__Class**)(modloader::win::memory::resolve_rva(0x047943C0));
    }
    namespace XComment {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XComment__Class** type_info = (::app::XComment__Class**)(modloader::win::memory::resolve_rva(0x0471FFB8));
    }
    namespace XProcessingInstruction {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XProcessingInstruction__Class** type_info = (::app::XProcessingInstruction__Class**)(modloader::win::memory::resolve_rva(0x04783E88));
    }
    namespace XDocumentType {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XDocumentType__Class** type_info = (::app::XDocumentType__Class**)(modloader::win::memory::resolve_rva(0x047056F8));
    }
    namespace XElementAttributePropertyDescriptor {
        IL2CPP_MODLOADER_DLLEXPORT ::app::XElementAttributePropertyDescriptor__Class** type_info = (::app::XElementAttributePropertyDescriptor__Class**)(modloader::win::memory::resolve_rva(0x047909C0));
    }
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
    namespace TimelineEntity {
        IL2CPP_MODLOADER_DLLEXPORT ::app::TimelineEntity__Class** type_info = (::app::TimelineEntity__Class**)(modloader::win::memory::resolve_rva(0x04735218));
    }
    namespace MoonTimeline {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MoonTimeline__Class** type_info = (::app::MoonTimeline__Class**)(modloader::win::memory::resolve_rva(0x047875E0));
    }
    namespace PlaybackStatus {
        IL2CPP_MODLOADER_DLLEXPORT ::app::PlaybackStatus__Class** type_info = (::app::PlaybackStatus__Class**)(modloader::win::memory::resolve_rva(0x04751EF8));
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
} // namespace app::classes::types
