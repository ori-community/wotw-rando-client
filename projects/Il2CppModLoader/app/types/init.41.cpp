#include <Il2CppModLoader/windows_api/memory.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/app/types/IWaitContext.h>
#include <Il2CppModLoader/app/types/StaticEventDescriptor.h>
#include <Il2CppModLoader/app/types/AutoFillOnCreationAttribute.h>
#include <Il2CppModLoader/app/types/MoonTimeline_c_DisplayClass128_0.h>
#include <Il2CppModLoader/app/types/MoonTimeline_c.h>
#include <Il2CppModLoader/app/types/RecordingContext.h>
#include <Il2CppModLoader/app/types/AnimationContext.h>
#include <Il2CppModLoader/app/types/MoonTimelineNotifier.h>
#include <Il2CppModLoader/app/types/MoonTimelineNotifier_c.h>
#include <Il2CppModLoader/app/types/TimelineConstrainedEntity.h>
#include <Il2CppModLoader/app/types/TimelineConstrainedTimelineEntity.h>
#include <Il2CppModLoader/app/types/VirtualTimelineConstrainedTimelineEntity.h>
#include <Il2CppModLoader/app/types/TimelineHelper_c_DisplayClass6_0.h>
#include <Il2CppModLoader/app/types/TimelineHelper_c_DisplayClass8_0.h>
#include <Il2CppModLoader/app/types/TimelineHelper_c_DisplayClass10_0.h>
#include <Il2CppModLoader/app/types/TimelineHelper_EverythingConstrainedTo_d_28.h>
#include <Il2CppModLoader/app/types/ITimelineStateObserver.h>
#include <Il2CppModLoader/app/types/TimelineState.h>
#include <Il2CppModLoader/app/types/TimelineState_NewTimelineStateTempHook.h>
#include <Il2CppModLoader/app/types/TimelineState_c.h>
#include <Il2CppModLoader/app/types/IUberStateModifierDataVirtualAnimator.h>
#include <Il2CppModLoader/app/types/StateControllerVirtualTimeline_Context.h>
#include <Il2CppModLoader/app/types/VirtualMoonTimelineCustomGroup.h>
#include <Il2CppModLoader/app/types/ActionDisposable_1.h>
#include <Il2CppModLoader/app/types/IConstraintEntityCache.h>
#include <Il2CppModLoader/app/types/ICustomConstrainable.h>
#include <Il2CppModLoader/app/types/ITimelineEventProvider.h>
#include <Il2CppModLoader/app/types/ConstraintEvaluator_c_DisplayClass1_0.h>
#include <Il2CppModLoader/app/types/XInputGamepad.h>
#include <Il2CppModLoader/app/types/XInputState.h>
#include <Il2CppModLoader/app/types/XboxController.h>
#include <Il2CppModLoader/app/types/XboxController__Array.h>
#include <Il2CppModLoader/app/types/XboxControllerStateChangedEventArgs.h>
#include <Il2CppModLoader/app/types/DefaultJsonNameTable.h>
#include <Il2CppModLoader/app/types/DefaultJsonNameTable_Entry.h>
#include <Il2CppModLoader/app/types/DefaultJsonNameTable_Entry__Array.h>
#include <Il2CppModLoader/app/types/NamingStrategy.h>
#include <Il2CppModLoader/app/types/CamelCaseNamingStrategy.h>
#include <Il2CppModLoader/app/types/JsonSerializerSettings.h>
#include <Il2CppModLoader/app/types/IContractResolver.h>
#include <Il2CppModLoader/app/types/IReferenceResolver.h>
#include <Il2CppModLoader/app/types/ITraceWriter.h>
#include <Il2CppModLoader/app/types/ISerializationBinder.h>
#include <Il2CppModLoader/app/types/ErrorEventArgs.h>
#include <Il2CppModLoader/app/types/ErrorContext.h>
#include <Il2CppModLoader/app/types/JsonConverter.h>
#include <Il2CppModLoader/app/types/BinaryConverter_1.h>
#include <Il2CppModLoader/app/types/ReflectionObject.h>
#include <Il2CppModLoader/app/types/JsonContainerType__Enum.h>
#include <Il2CppModLoader/app/types/JsonPosition.h>
#include <Il2CppModLoader/app/types/JsonWriter_State__Enum.h>
#include <Il2CppModLoader/app/types/JsonWriter.h>
#include <Il2CppModLoader/app/types/JsonWriter_State__Enum__Array.h>
#include <Il2CppModLoader/app/types/JsonWriter_State__Enum__Array__Array.h>
#include <Il2CppModLoader/app/types/JsonToken__Enum_1.h>
#include <Il2CppModLoader/app/types/JsonReader_State__Enum.h>
#include <Il2CppModLoader/app/types/JsonTextReader.h>
#include <Il2CppModLoader/app/types/JsonSerializer.h>
#include <Il2CppModLoader/app/types/JsonConverterCollection.h>
#include <Il2CppModLoader/app/types/JsonConverter__Array.h>
#include <Il2CppModLoader/app/types/JsonException.h>
#include <Il2CppModLoader/app/types/JsonObjectAttribute.h>
#include <Il2CppModLoader/app/types/IJsonLineInfo.h>
#include <Il2CppModLoader/app/types/JsonReaderException.h>
#include <Il2CppModLoader/app/types/SerializationCallback.h>
#include <Il2CppModLoader/app/types/JsonSerializationException.h>
#include <Il2CppModLoader/app/types/TraceJsonReader.h>
#include <Il2CppModLoader/app/types/JsonTextWriter.h>
#include <Il2CppModLoader/app/types/Base64Encoder_1.h>
#include <Il2CppModLoader/app/types/PrimitiveTypeCode__Enum.h>
#include <Il2CppModLoader/app/types/JsonWriterException.h>
#include <Il2CppModLoader/app/types/TypeInformation_1.h>
#include <Il2CppModLoader/app/types/ConvertUtils_c_DisplayClass8_0.h>
#include <Il2CppModLoader/app/types/DateTimeParser.h>
#include <Il2CppModLoader/app/types/DynamicReflectionDelegateFactory.h>
#include <Il2CppModLoader/app/types/IDynamicMetaObjectProvider.h>
#include <Il2CppModLoader/app/types/NoThrowExpressionVisitor.h>
#include <Il2CppModLoader/app/types/EnumInfo.h>
#include <Il2CppModLoader/app/types/EnumUtils_c.h>
#include <Il2CppModLoader/app/types/FSharpFunction.h>
#include <Il2CppModLoader/app/types/FSharpUtils_c_DisplayClass49_0.h>
#include <Il2CppModLoader/app/types/ImmutableCollectionsUtils_ImmutableCollectionTypeInfo.h>
#include <Il2CppModLoader/app/types/ImmutableCollectionsUtils_c_DisplayClass24_0.h>
#include <Il2CppModLoader/app/types/ImmutableCollectionsUtils_c.h>
#include <Il2CppModLoader/app/types/ImmutableCollectionsUtils_c_DisplayClass25_0.h>
#include <Il2CppModLoader/app/types/LateBoundReflectionDelegateFactory.h>
#include <Il2CppModLoader/app/types/LateBoundReflectionDelegateFactory_c_DisplayClass3_0.h>
#include <Il2CppModLoader/app/types/ReflectionMember.h>
#include <Il2CppModLoader/app/types/ReflectionObject_c_DisplayClass11_0.h>
#include <Il2CppModLoader/app/types/ReflectionObject_c_DisplayClass11_1.h>
#include <Il2CppModLoader/app/types/ReflectionObject_c_DisplayClass11_2.h>
#include <Il2CppModLoader/app/types/ReflectionUtils_c.h>
#include <Il2CppModLoader/app/types/ReflectionUtils_c_DisplayClass31_0.h>
#include <Il2CppModLoader/app/types/ReflectionUtils_c_DisplayClass44_0.h>
#include <Il2CppModLoader/app/types/ReflectionUtils_c_DisplayClass44_1.h>
#include <Il2CppModLoader/app/types/ReflectionUtils_c_DisplayClass45_0.h>
#include <Il2CppModLoader/app/types/DefaultContractResolver.h>
#include <Il2CppModLoader/app/types/JsonObjectContract.h>
#include <Il2CppModLoader/app/types/JsonPropertyCollection.h>
#include <Il2CppModLoader/app/types/JsonProperty.h>

namespace app::classes::types {
    namespace IWaitContext { IL2CPP_MODLOADER_DLLEXPORT ::app::IWaitContext__Class** type_info = (::app::IWaitContext__Class**)(modloader::win::memory::resolve_rva(0x04707240)); }
    namespace StaticEventDescriptor { IL2CPP_MODLOADER_DLLEXPORT ::app::StaticEventDescriptor__Class** type_info = (::app::StaticEventDescriptor__Class**)(modloader::win::memory::resolve_rva(0x0474E028)); }
    namespace AutoFillOnCreationAttribute { IL2CPP_MODLOADER_DLLEXPORT ::app::AutoFillOnCreationAttribute__Class** type_info = (::app::AutoFillOnCreationAttribute__Class**)(modloader::win::memory::resolve_rva(0x04739EB8)); }
    namespace MoonTimeline_c_DisplayClass128_0 { IL2CPP_MODLOADER_DLLEXPORT ::app::MoonTimeline_c_DisplayClass128_0__Class** type_info = (::app::MoonTimeline_c_DisplayClass128_0__Class**)(modloader::win::memory::resolve_rva(0x0470BF88)); }
    namespace MoonTimeline_c { IL2CPP_MODLOADER_DLLEXPORT ::app::MoonTimeline_c__Class** type_info = (::app::MoonTimeline_c__Class**)(modloader::win::memory::resolve_rva(0x0476DA68)); }
    namespace RecordingContext { IL2CPP_MODLOADER_DLLEXPORT ::app::RecordingContext__Class** type_info = (::app::RecordingContext__Class**)(modloader::win::memory::resolve_rva(0x0470B0C8)); }
    namespace AnimationContext { IL2CPP_MODLOADER_DLLEXPORT ::app::AnimationContext__Class** type_info = (::app::AnimationContext__Class**)(modloader::win::memory::resolve_rva(0x04790FD0)); }
    namespace MoonTimelineNotifier { IL2CPP_MODLOADER_DLLEXPORT ::app::MoonTimelineNotifier__Class** type_info = (::app::MoonTimelineNotifier__Class**)(modloader::win::memory::resolve_rva(0x0476B6A8)); }
    namespace MoonTimelineNotifier_c { IL2CPP_MODLOADER_DLLEXPORT ::app::MoonTimelineNotifier_c__Class** type_info = (::app::MoonTimelineNotifier_c__Class**)(modloader::win::memory::resolve_rva(0x047945A0)); }
    namespace TimelineConstrainedEntity { IL2CPP_MODLOADER_DLLEXPORT ::app::TimelineConstrainedEntity__Class** type_info = (::app::TimelineConstrainedEntity__Class**)(modloader::win::memory::resolve_rva(0x047706B0)); }
    namespace TimelineConstrainedTimelineEntity { IL2CPP_MODLOADER_DLLEXPORT ::app::TimelineConstrainedTimelineEntity__Class** type_info = (::app::TimelineConstrainedTimelineEntity__Class**)(modloader::win::memory::resolve_rva(0x0473AF90)); }
    namespace VirtualTimelineConstrainedTimelineEntity { IL2CPP_MODLOADER_DLLEXPORT ::app::VirtualTimelineConstrainedTimelineEntity__Class** type_info = (::app::VirtualTimelineConstrainedTimelineEntity__Class**)(modloader::win::memory::resolve_rva(0x04720FB8)); }
    namespace TimelineHelper_c_DisplayClass6_0 { IL2CPP_MODLOADER_DLLEXPORT ::app::TimelineHelper_c_DisplayClass6_0__Class** type_info = (::app::TimelineHelper_c_DisplayClass6_0__Class**)(modloader::win::memory::resolve_rva(0x0476A7A8)); }
    namespace TimelineHelper_c_DisplayClass8_0 { IL2CPP_MODLOADER_DLLEXPORT ::app::TimelineHelper_c_DisplayClass8_0__Class** type_info = (::app::TimelineHelper_c_DisplayClass8_0__Class**)(modloader::win::memory::resolve_rva(0x04703D38)); }
    namespace TimelineHelper_c_DisplayClass10_0 { IL2CPP_MODLOADER_DLLEXPORT ::app::TimelineHelper_c_DisplayClass10_0__Class** type_info = (::app::TimelineHelper_c_DisplayClass10_0__Class**)(modloader::win::memory::resolve_rva(0x04773110)); }
    namespace TimelineHelper_EverythingConstrainedTo_d_28 { IL2CPP_MODLOADER_DLLEXPORT ::app::TimelineHelper_EverythingConstrainedTo_d_28__Class** type_info = (::app::TimelineHelper_EverythingConstrainedTo_d_28__Class**)(modloader::win::memory::resolve_rva(0x047805E8)); }
    namespace ITimelineStateObserver { IL2CPP_MODLOADER_DLLEXPORT ::app::ITimelineStateObserver__Class** type_info = (::app::ITimelineStateObserver__Class**)(modloader::win::memory::resolve_rva(0x04732070)); }
    namespace TimelineState { IL2CPP_MODLOADER_DLLEXPORT ::app::TimelineState__Class** type_info = (::app::TimelineState__Class**)(modloader::win::memory::resolve_rva(0x0472FC88)); }
    namespace TimelineState_NewTimelineStateTempHook { IL2CPP_MODLOADER_DLLEXPORT ::app::TimelineState_NewTimelineStateTempHook__Class** type_info = (::app::TimelineState_NewTimelineStateTempHook__Class**)(modloader::win::memory::resolve_rva(0x04732978)); }
    namespace TimelineState_c { IL2CPP_MODLOADER_DLLEXPORT ::app::TimelineState_c__Class** type_info = (::app::TimelineState_c__Class**)(modloader::win::memory::resolve_rva(0x04752980)); }
    namespace IUberStateModifierDataVirtualAnimator { IL2CPP_MODLOADER_DLLEXPORT ::app::IUberStateModifierDataVirtualAnimator__Class** type_info = (::app::IUberStateModifierDataVirtualAnimator__Class**)(modloader::win::memory::resolve_rva(0x04738198)); }
    namespace StateControllerVirtualTimeline_Context { IL2CPP_MODLOADER_DLLEXPORT ::app::StateControllerVirtualTimeline_Context__Class** type_info = (::app::StateControllerVirtualTimeline_Context__Class**)(modloader::win::memory::resolve_rva(0x047652C0)); }
    namespace VirtualMoonTimelineCustomGroup { IL2CPP_MODLOADER_DLLEXPORT ::app::VirtualMoonTimelineCustomGroup__Class** type_info = (::app::VirtualMoonTimelineCustomGroup__Class**)(modloader::win::memory::resolve_rva(0x0473A908)); }
    namespace ActionDisposable_1 { IL2CPP_MODLOADER_DLLEXPORT ::app::ActionDisposable_1__Class** type_info = (::app::ActionDisposable_1__Class**)(modloader::win::memory::resolve_rva(0x04741188)); }
    namespace IConstraintEntityCache { IL2CPP_MODLOADER_DLLEXPORT ::app::IConstraintEntityCache__Class** type_info = (::app::IConstraintEntityCache__Class**)(modloader::win::memory::resolve_rva(0x0474D328)); }
    namespace ICustomConstrainable { IL2CPP_MODLOADER_DLLEXPORT ::app::ICustomConstrainable__Class** type_info = (::app::ICustomConstrainable__Class**)(modloader::win::memory::resolve_rva(0x047135D0)); }
    namespace ITimelineEventProvider { IL2CPP_MODLOADER_DLLEXPORT ::app::ITimelineEventProvider__Class** type_info = (::app::ITimelineEventProvider__Class**)(modloader::win::memory::resolve_rva(0x047556D0)); }
    namespace ConstraintEvaluator_c_DisplayClass1_0 { IL2CPP_MODLOADER_DLLEXPORT ::app::ConstraintEvaluator_c_DisplayClass1_0__Class** type_info = (::app::ConstraintEvaluator_c_DisplayClass1_0__Class**)(modloader::win::memory::resolve_rva(0x047767F0)); }
    namespace XInputGamepad { IL2CPP_MODLOADER_DLLEXPORT ::app::XInputGamepad__Class** type_info = (::app::XInputGamepad__Class**)(modloader::win::memory::resolve_rva(0x04750400)); }
    namespace XInputState { IL2CPP_MODLOADER_DLLEXPORT ::app::XInputState__Class** type_info = (::app::XInputState__Class**)(modloader::win::memory::resolve_rva(0x04756EB0)); }
    namespace XboxController { IL2CPP_MODLOADER_DLLEXPORT ::app::XboxController__Class** type_info = (::app::XboxController__Class**)(modloader::win::memory::resolve_rva(0x04799C08)); }
    namespace XboxController__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::XboxController__Array__Class** type_info = (::app::XboxController__Array__Class**)(modloader::win::memory::resolve_rva(0x0476E410)); }
    namespace XboxControllerStateChangedEventArgs { IL2CPP_MODLOADER_DLLEXPORT ::app::XboxControllerStateChangedEventArgs__Class** type_info = (::app::XboxControllerStateChangedEventArgs__Class**)(modloader::win::memory::resolve_rva(0x04770448)); }
    namespace DefaultJsonNameTable { IL2CPP_MODLOADER_DLLEXPORT ::app::DefaultJsonNameTable__Class** type_info = (::app::DefaultJsonNameTable__Class**)(modloader::win::memory::resolve_rva(0x0474B180)); }
    namespace DefaultJsonNameTable_Entry { IL2CPP_MODLOADER_DLLEXPORT ::app::DefaultJsonNameTable_Entry__Class** type_info = (::app::DefaultJsonNameTable_Entry__Class**)(modloader::win::memory::resolve_rva(0x04797B10)); }
    namespace DefaultJsonNameTable_Entry__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::DefaultJsonNameTable_Entry__Array__Class** type_info = (::app::DefaultJsonNameTable_Entry__Array__Class**)(modloader::win::memory::resolve_rva(0x0471E048)); }
    namespace NamingStrategy { IL2CPP_MODLOADER_DLLEXPORT ::app::NamingStrategy__Class** type_info = (::app::NamingStrategy__Class**)(modloader::win::memory::resolve_rva(0x04728B90)); }
    namespace CamelCaseNamingStrategy { IL2CPP_MODLOADER_DLLEXPORT ::app::CamelCaseNamingStrategy__Class** type_info = (::app::CamelCaseNamingStrategy__Class**)(modloader::win::memory::resolve_rva(0x04742AA0)); }
    namespace JsonSerializerSettings { IL2CPP_MODLOADER_DLLEXPORT ::app::JsonSerializerSettings__Class** type_info = (::app::JsonSerializerSettings__Class**)(modloader::win::memory::resolve_rva(0x04717918)); }
    namespace IContractResolver { IL2CPP_MODLOADER_DLLEXPORT ::app::IContractResolver__Class** type_info = (::app::IContractResolver__Class**)(modloader::win::memory::resolve_rva(0x04725CA0)); }
    namespace IReferenceResolver { IL2CPP_MODLOADER_DLLEXPORT ::app::IReferenceResolver__Class** type_info = (::app::IReferenceResolver__Class**)(modloader::win::memory::resolve_rva(0x04735B60)); }
    namespace ITraceWriter { IL2CPP_MODLOADER_DLLEXPORT ::app::ITraceWriter__Class** type_info = (::app::ITraceWriter__Class**)(modloader::win::memory::resolve_rva(0x04702DD8)); }
    namespace ISerializationBinder { IL2CPP_MODLOADER_DLLEXPORT ::app::ISerializationBinder__Class** type_info = (::app::ISerializationBinder__Class**)(modloader::win::memory::resolve_rva(0x04748E28)); }
    namespace ErrorEventArgs { IL2CPP_MODLOADER_DLLEXPORT ::app::ErrorEventArgs__Class** type_info = (::app::ErrorEventArgs__Class**)(modloader::win::memory::resolve_rva(0x0473DAD8)); }
    namespace ErrorContext { IL2CPP_MODLOADER_DLLEXPORT ::app::ErrorContext__Class** type_info = (::app::ErrorContext__Class**)(modloader::win::memory::resolve_rva(0x047332E0)); }
    namespace JsonConverter { IL2CPP_MODLOADER_DLLEXPORT ::app::JsonConverter__Class** type_info = (::app::JsonConverter__Class**)(modloader::win::memory::resolve_rva(0x04781530)); }
    namespace BinaryConverter_1 { IL2CPP_MODLOADER_DLLEXPORT ::app::BinaryConverter_1__Class** type_info = (::app::BinaryConverter_1__Class**)(modloader::win::memory::resolve_rva(0x0474D9C0)); }
    namespace ReflectionObject { IL2CPP_MODLOADER_DLLEXPORT ::app::ReflectionObject__Class** type_info = (::app::ReflectionObject__Class**)(modloader::win::memory::resolve_rva(0x0473C570)); }
    namespace JsonContainerType__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::JsonContainerType__Enum__Class** type_info = (::app::JsonContainerType__Enum__Class**)(modloader::win::memory::resolve_rva(0x04791648)); }
    namespace JsonPosition { IL2CPP_MODLOADER_DLLEXPORT ::app::JsonPosition__Class** type_info = (::app::JsonPosition__Class**)(modloader::win::memory::resolve_rva(0x047942C8)); }
    namespace JsonWriter_State__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::JsonWriter_State__Enum__Class** type_info = (::app::JsonWriter_State__Enum__Class**)(modloader::win::memory::resolve_rva(0x04758BF8)); }
    namespace JsonWriter { IL2CPP_MODLOADER_DLLEXPORT ::app::JsonWriter__Class** type_info = (::app::JsonWriter__Class**)(modloader::win::memory::resolve_rva(0x04743CC0)); }
    namespace JsonWriter_State__Enum__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::JsonWriter_State__Enum__Array__Class** type_info = (::app::JsonWriter_State__Enum__Array__Class**)(modloader::win::memory::resolve_rva(0x04713F70)); }
    namespace JsonWriter_State__Enum__Array__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::JsonWriter_State__Enum__Array__Array__Class** type_info = (::app::JsonWriter_State__Enum__Array__Array__Class**)(modloader::win::memory::resolve_rva(0x0478ED18)); }
    namespace JsonToken__Enum_1 { IL2CPP_MODLOADER_DLLEXPORT ::app::JsonToken__Enum_1__Class** type_info = (::app::JsonToken__Enum_1__Class**)(modloader::win::memory::resolve_rva(0x04770FF0)); }
    namespace JsonReader_State__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::JsonReader_State__Enum__Class** type_info = (::app::JsonReader_State__Enum__Class**)(modloader::win::memory::resolve_rva(0x04757260)); }
    namespace JsonTextReader { IL2CPP_MODLOADER_DLLEXPORT ::app::JsonTextReader__Class** type_info = (::app::JsonTextReader__Class**)(modloader::win::memory::resolve_rva(0x04796BC8)); }
    namespace JsonSerializer { IL2CPP_MODLOADER_DLLEXPORT ::app::JsonSerializer__Class** type_info = (::app::JsonSerializer__Class**)(modloader::win::memory::resolve_rva(0x0472B7C8)); }
    namespace JsonConverterCollection { IL2CPP_MODLOADER_DLLEXPORT ::app::JsonConverterCollection__Class** type_info = (::app::JsonConverterCollection__Class**)(modloader::win::memory::resolve_rva(0x0476DE10)); }
    namespace JsonConverter__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::JsonConverter__Array__Class** type_info = (::app::JsonConverter__Array__Class**)(modloader::win::memory::resolve_rva(0x047346B8)); }
    namespace JsonException { IL2CPP_MODLOADER_DLLEXPORT ::app::JsonException__Class** type_info = (::app::JsonException__Class**)(modloader::win::memory::resolve_rva(0x04781DA8)); }
    namespace JsonObjectAttribute { IL2CPP_MODLOADER_DLLEXPORT ::app::JsonObjectAttribute__Class** type_info = (::app::JsonObjectAttribute__Class**)(modloader::win::memory::resolve_rva(0x04758A30)); }
    namespace IJsonLineInfo { IL2CPP_MODLOADER_DLLEXPORT ::app::IJsonLineInfo__Class** type_info = (::app::IJsonLineInfo__Class**)(modloader::win::memory::resolve_rva(0x04778C98)); }
    namespace JsonReaderException { IL2CPP_MODLOADER_DLLEXPORT ::app::JsonReaderException__Class** type_info = (::app::JsonReaderException__Class**)(modloader::win::memory::resolve_rva(0x0476CFB0)); }
    namespace SerializationCallback { IL2CPP_MODLOADER_DLLEXPORT ::app::SerializationCallback__Class** type_info = (::app::SerializationCallback__Class**)(modloader::win::memory::resolve_rva(0x047301F0)); }
    namespace JsonSerializationException { IL2CPP_MODLOADER_DLLEXPORT ::app::JsonSerializationException__Class** type_info = (::app::JsonSerializationException__Class**)(modloader::win::memory::resolve_rva(0x04792720)); }
    namespace TraceJsonReader { IL2CPP_MODLOADER_DLLEXPORT ::app::TraceJsonReader__Class** type_info = (::app::TraceJsonReader__Class**)(modloader::win::memory::resolve_rva(0x0474F7C8)); }
    namespace JsonTextWriter { IL2CPP_MODLOADER_DLLEXPORT ::app::JsonTextWriter__Class** type_info = (::app::JsonTextWriter__Class**)(modloader::win::memory::resolve_rva(0x04746B58)); }
    namespace Base64Encoder_1 { IL2CPP_MODLOADER_DLLEXPORT ::app::Base64Encoder_1__Class** type_info = (::app::Base64Encoder_1__Class**)(modloader::win::memory::resolve_rva(0x047737C0)); }
    namespace PrimitiveTypeCode__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::PrimitiveTypeCode__Enum__Class** type_info = (::app::PrimitiveTypeCode__Enum__Class**)(modloader::win::memory::resolve_rva(0x0475C868)); }
    namespace JsonWriterException { IL2CPP_MODLOADER_DLLEXPORT ::app::JsonWriterException__Class** type_info = (::app::JsonWriterException__Class**)(modloader::win::memory::resolve_rva(0x0470FBC0)); }
    namespace TypeInformation_1 { IL2CPP_MODLOADER_DLLEXPORT ::app::TypeInformation_1__Class** type_info = (::app::TypeInformation_1__Class**)(modloader::win::memory::resolve_rva(0x0476A550)); }
    namespace ConvertUtils_c_DisplayClass8_0 { IL2CPP_MODLOADER_DLLEXPORT ::app::ConvertUtils_c_DisplayClass8_0__Class** type_info = (::app::ConvertUtils_c_DisplayClass8_0__Class**)(modloader::win::memory::resolve_rva(0x0476EF00)); }
    namespace DateTimeParser { IL2CPP_MODLOADER_DLLEXPORT ::app::DateTimeParser__Class** type_info = (::app::DateTimeParser__Class**)(modloader::win::memory::resolve_rva(0x0474B170)); }
    namespace DynamicReflectionDelegateFactory { IL2CPP_MODLOADER_DLLEXPORT ::app::DynamicReflectionDelegateFactory__Class** type_info = (::app::DynamicReflectionDelegateFactory__Class**)(modloader::win::memory::resolve_rva(0x0476DE08)); }
    namespace IDynamicMetaObjectProvider { IL2CPP_MODLOADER_DLLEXPORT ::app::IDynamicMetaObjectProvider__Class** type_info = (::app::IDynamicMetaObjectProvider__Class**)(modloader::win::memory::resolve_rva(0x047025B0)); }
    namespace NoThrowExpressionVisitor { IL2CPP_MODLOADER_DLLEXPORT ::app::NoThrowExpressionVisitor__Class** type_info = (::app::NoThrowExpressionVisitor__Class**)(modloader::win::memory::resolve_rva(0x04704820)); }
    namespace EnumInfo { IL2CPP_MODLOADER_DLLEXPORT ::app::EnumInfo__Class** type_info = (::app::EnumInfo__Class**)(modloader::win::memory::resolve_rva(0x047684C0)); }
    namespace EnumUtils_c { IL2CPP_MODLOADER_DLLEXPORT ::app::EnumUtils_c__Class** type_info = (::app::EnumUtils_c__Class**)(modloader::win::memory::resolve_rva(0x0471BCC0)); }
    namespace FSharpFunction { IL2CPP_MODLOADER_DLLEXPORT ::app::FSharpFunction__Class** type_info = (::app::FSharpFunction__Class**)(modloader::win::memory::resolve_rva(0x04763618)); }
    namespace FSharpUtils_c_DisplayClass49_0 { IL2CPP_MODLOADER_DLLEXPORT ::app::FSharpUtils_c_DisplayClass49_0__Class** type_info = (::app::FSharpUtils_c_DisplayClass49_0__Class**)(modloader::win::memory::resolve_rva(0x04745610)); }
    namespace ImmutableCollectionsUtils_ImmutableCollectionTypeInfo { IL2CPP_MODLOADER_DLLEXPORT ::app::ImmutableCollectionsUtils_ImmutableCollectionTypeInfo__Class** type_info = (::app::ImmutableCollectionsUtils_ImmutableCollectionTypeInfo__Class**)(modloader::win::memory::resolve_rva(0x0471F560)); }
    namespace ImmutableCollectionsUtils_c_DisplayClass24_0 { IL2CPP_MODLOADER_DLLEXPORT ::app::ImmutableCollectionsUtils_c_DisplayClass24_0__Class** type_info = (::app::ImmutableCollectionsUtils_c_DisplayClass24_0__Class**)(modloader::win::memory::resolve_rva(0x04741F90)); }
    namespace ImmutableCollectionsUtils_c { IL2CPP_MODLOADER_DLLEXPORT ::app::ImmutableCollectionsUtils_c__Class** type_info = (::app::ImmutableCollectionsUtils_c__Class**)(modloader::win::memory::resolve_rva(0x0470BC38)); }
    namespace ImmutableCollectionsUtils_c_DisplayClass25_0 { IL2CPP_MODLOADER_DLLEXPORT ::app::ImmutableCollectionsUtils_c_DisplayClass25_0__Class** type_info = (::app::ImmutableCollectionsUtils_c_DisplayClass25_0__Class**)(modloader::win::memory::resolve_rva(0x0477C618)); }
    namespace LateBoundReflectionDelegateFactory { IL2CPP_MODLOADER_DLLEXPORT ::app::LateBoundReflectionDelegateFactory__Class** type_info = (::app::LateBoundReflectionDelegateFactory__Class**)(modloader::win::memory::resolve_rva(0x04741718)); }
    namespace LateBoundReflectionDelegateFactory_c_DisplayClass3_0 { IL2CPP_MODLOADER_DLLEXPORT ::app::LateBoundReflectionDelegateFactory_c_DisplayClass3_0__Class** type_info = (::app::LateBoundReflectionDelegateFactory_c_DisplayClass3_0__Class**)(modloader::win::memory::resolve_rva(0x04756828)); }
    namespace ReflectionMember { IL2CPP_MODLOADER_DLLEXPORT ::app::ReflectionMember__Class** type_info = (::app::ReflectionMember__Class**)(modloader::win::memory::resolve_rva(0x0474A640)); }
    namespace ReflectionObject_c_DisplayClass11_0 { IL2CPP_MODLOADER_DLLEXPORT ::app::ReflectionObject_c_DisplayClass11_0__Class** type_info = (::app::ReflectionObject_c_DisplayClass11_0__Class**)(modloader::win::memory::resolve_rva(0x04700F08)); }
    namespace ReflectionObject_c_DisplayClass11_1 { IL2CPP_MODLOADER_DLLEXPORT ::app::ReflectionObject_c_DisplayClass11_1__Class** type_info = (::app::ReflectionObject_c_DisplayClass11_1__Class**)(modloader::win::memory::resolve_rva(0x04742098)); }
    namespace ReflectionObject_c_DisplayClass11_2 { IL2CPP_MODLOADER_DLLEXPORT ::app::ReflectionObject_c_DisplayClass11_2__Class** type_info = (::app::ReflectionObject_c_DisplayClass11_2__Class**)(modloader::win::memory::resolve_rva(0x047251C0)); }
    namespace ReflectionUtils_c { IL2CPP_MODLOADER_DLLEXPORT ::app::ReflectionUtils_c__Class** type_info = (::app::ReflectionUtils_c__Class**)(modloader::win::memory::resolve_rva(0x04762C00)); }
    namespace ReflectionUtils_c_DisplayClass31_0 { IL2CPP_MODLOADER_DLLEXPORT ::app::ReflectionUtils_c_DisplayClass31_0__Class** type_info = (::app::ReflectionUtils_c_DisplayClass31_0__Class**)(modloader::win::memory::resolve_rva(0x0475E5F8)); }
    namespace ReflectionUtils_c_DisplayClass44_0 { IL2CPP_MODLOADER_DLLEXPORT ::app::ReflectionUtils_c_DisplayClass44_0__Class** type_info = (::app::ReflectionUtils_c_DisplayClass44_0__Class**)(modloader::win::memory::resolve_rva(0x0478BF88)); }
    namespace ReflectionUtils_c_DisplayClass44_1 { IL2CPP_MODLOADER_DLLEXPORT ::app::ReflectionUtils_c_DisplayClass44_1__Class** type_info = (::app::ReflectionUtils_c_DisplayClass44_1__Class**)(modloader::win::memory::resolve_rva(0x047713C8)); }
    namespace ReflectionUtils_c_DisplayClass45_0 { IL2CPP_MODLOADER_DLLEXPORT ::app::ReflectionUtils_c_DisplayClass45_0__Class** type_info = (::app::ReflectionUtils_c_DisplayClass45_0__Class**)(modloader::win::memory::resolve_rva(0x0471F270)); }
    namespace DefaultContractResolver { IL2CPP_MODLOADER_DLLEXPORT ::app::DefaultContractResolver__Class** type_info = (::app::DefaultContractResolver__Class**)(modloader::win::memory::resolve_rva(0x0477D598)); }
    namespace JsonObjectContract { IL2CPP_MODLOADER_DLLEXPORT ::app::JsonObjectContract__Class** type_info = (::app::JsonObjectContract__Class**)(modloader::win::memory::resolve_rva(0x0473CE60)); }
    namespace JsonPropertyCollection { IL2CPP_MODLOADER_DLLEXPORT ::app::JsonPropertyCollection__Class** type_info = (::app::JsonPropertyCollection__Class**)(modloader::win::memory::resolve_rva(0x0473A420)); }
    namespace JsonProperty { IL2CPP_MODLOADER_DLLEXPORT ::app::JsonProperty__Class** type_info = (::app::JsonProperty__Class**)(modloader::win::memory::resolve_rva(0x047065B8)); }
}
