#include <Il2CppModLoader/windows_api/memory.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/app/types/IValueProvider.h>
#include <Il2CppModLoader/app/types/ExtensionDataSetter.h>
#include <Il2CppModLoader/app/types/ExtensionDataGetter.h>
#include <Il2CppModLoader/app/types/JsonDictionaryContract.h>
#include <Il2CppModLoader/app/types/JsonArrayContract.h>
#include <Il2CppModLoader/app/types/JsonPrimitiveContract.h>
#include <Il2CppModLoader/app/types/JsonLinqContract.h>
#include <Il2CppModLoader/app/types/JsonISerializableContract.h>
#include <Il2CppModLoader/app/types/JsonDynamicContract.h>
#include <Il2CppModLoader/app/types/JsonStringContract.h>
#include <Il2CppModLoader/app/types/SerializationErrorCallback.h>
#include <Il2CppModLoader/app/types/DefaultContractResolver_c.h>
#include <Il2CppModLoader/app/types/DefaultContractResolver_c_DisplayClass42_0.h>
#include <Il2CppModLoader/app/types/DefaultContractResolver_c_DisplayClass45_0.h>
#include <Il2CppModLoader/app/types/DefaultContractResolver_c_DisplayClass45_1.h>
#include <Il2CppModLoader/app/types/DefaultContractResolver_c_DisplayClass45_2.h>
#include <Il2CppModLoader/app/types/DefaultContractResolver_c_DisplayClass62_0.h>
#include <Il2CppModLoader/app/types/DefaultContractResolver_c_DisplayClass67_0.h>
#include <Il2CppModLoader/app/types/DefaultContractResolver_c_DisplayClass80_0.h>
#include <Il2CppModLoader/app/types/DefaultContractResolver_c_DisplayClass81_0.h>
#include <Il2CppModLoader/app/types/DefaultReferenceResolver.h>
#include <Il2CppModLoader/app/types/DynamicValueProvider.h>
#include <Il2CppModLoader/app/types/IWrappedCollection.h>
#include <Il2CppModLoader/app/types/JsonContract_c_DisplayClass57_0.h>
#include <Il2CppModLoader/app/types/JsonContract_c_DisplayClass58_0.h>
#include <Il2CppModLoader/app/types/IWrappedDictionary.h>
#include <Il2CppModLoader/app/types/JsonFormatterConverter.h>
#include <Il2CppModLoader/app/types/JsonSerializerInternalBase.h>
#include <Il2CppModLoader/app/types/JsonSerializerInternalReader.h>
#include <Il2CppModLoader/app/types/JsonSerializerProxy.h>
#include <Il2CppModLoader/app/types/JsonSerializerInternalWriter.h>
#include <Il2CppModLoader/app/types/JsonSerializerInternalBase_ReferenceEqualsEqualityComparer.h>
#include <Il2CppModLoader/app/types/JToken.h>
#include <Il2CppModLoader/app/types/JContainer.h>
#include <Il2CppModLoader/app/types/JArray.h>
#include <Il2CppModLoader/app/types/JTokenType__Enum.h>
#include <Il2CppModLoader/app/types/JTokenType__Enum__Array.h>
#include <Il2CppModLoader/app/types/JTokenReader.h>
#include <Il2CppModLoader/app/types/JsonSerializerInternalReader_CreatorPropertyContext.h>
#include <Il2CppModLoader/app/types/JsonSerializerInternalReader_c_DisplayClass37_0.h>
#include <Il2CppModLoader/app/types/JsonSerializerInternalReader_c.h>
#include <Il2CppModLoader/app/types/ISerializable.h>
#include <Il2CppModLoader/app/types/JsonTypeReflector_c_DisplayClass22_0.h>
#include <Il2CppModLoader/app/types/JsonTypeReflector_c.h>
#include <Il2CppModLoader/app/types/ReflectionAttributeProvider.h>
#include <Il2CppModLoader/app/types/ReflectionValueProvider.h>
#include <Il2CppModLoader/app/types/TraceJsonWriter.h>
#include <Il2CppModLoader/app/types/JConstructor.h>
#include <Il2CppModLoader/app/types/JProperty.h>
#include <Il2CppModLoader/app/types/JProperty_JPropertyList.h>
#include <Il2CppModLoader/app/types/JObject.h>
#include <Il2CppModLoader/app/types/JPropertyKeyedCollection.h>
#include <Il2CppModLoader/app/types/JObject_JObjectDynamicProxy.h>
#include <Il2CppModLoader/app/types/JObject_JObjectDynamicProxy_c.h>
#include <Il2CppModLoader/app/types/JObject_GetEnumerator_d_63.h>
#include <Il2CppModLoader/app/types/JProperty_JPropertyList_GetEnumerator_d_1.h>
#include <Il2CppModLoader/app/types/JPropertyDescriptor.h>
#include <Il2CppModLoader/app/types/JValue.h>
#include <Il2CppModLoader/app/types/JRaw.h>
#include <Il2CppModLoader/app/types/JToken_LineInfoAnnotation.h>
#include <Il2CppModLoader/app/types/JTokenWriter.h>
#include <Il2CppModLoader/app/types/JValue_JValueDynamicProxy.h>
#include <Il2CppModLoader/app/types/BsonObjectIdConverter.h>
#include <Il2CppModLoader/app/types/DataSetConverter.h>
#include <Il2CppModLoader/app/types/DataTableConverter.h>
#include <Il2CppModLoader/app/types/DiscriminatedUnionConverter_Union.h>
#include <Il2CppModLoader/app/types/DiscriminatedUnionConverter_UnionCase.h>
#include <Il2CppModLoader/app/types/DiscriminatedUnionConverter.h>
#include <Il2CppModLoader/app/types/DiscriminatedUnionConverter_c_DisplayClass8_0.h>
#include <Il2CppModLoader/app/types/DiscriminatedUnionConverter_c_DisplayClass9_0.h>
#include <Il2CppModLoader/app/types/EntityKeyMemberConverter.h>
#include <Il2CppModLoader/app/types/ExpandoObjectConverter.h>
#include <Il2CppModLoader/app/types/KeyValuePairConverter.h>
#include <Il2CppModLoader/app/types/RegexConverter.h>
#include <Il2CppModLoader/app/types/BsonWriter.h>
#include <Il2CppModLoader/app/types/BsonBinaryWriter.h>
#include <Il2CppModLoader/app/types/BsonObject.h>
#include <Il2CppModLoader/app/types/BsonProperty.h>
#include <Il2CppModLoader/app/types/BsonType__Enum.h>
#include <Il2CppModLoader/app/types/BsonValue.h>
#include <Il2CppModLoader/app/types/BsonString.h>
#include <Il2CppModLoader/app/types/XmlNodeWrapper.h>
#include <Il2CppModLoader/app/types/XmlDocumentWrapper.h>
#include <Il2CppModLoader/app/types/IXmlNode.h>
#include <Il2CppModLoader/app/types/IXmlElement.h>
#include <Il2CppModLoader/app/types/XmlElementWrapper.h>
#include <Il2CppModLoader/app/types/XmlDeclarationWrapper.h>
#include <Il2CppModLoader/app/types/XmlDocumentTypeWrapper.h>
#include <Il2CppModLoader/app/types/XObjectWrapper.h>
#include <Il2CppModLoader/app/types/XDeclarationWrapper.h>
#include <Il2CppModLoader/app/types/XDocumentTypeWrapper.h>
#include <Il2CppModLoader/app/types/XContainerWrapper.h>
#include <Il2CppModLoader/app/types/XDocumentWrapper.h>
#include <Il2CppModLoader/app/types/XTextWrapper.h>
#include <Il2CppModLoader/app/types/XCommentWrapper.h>
#include <Il2CppModLoader/app/types/XProcessingInstructionWrapper.h>
#include <Il2CppModLoader/app/types/XAttributeWrapper.h>
#include <Il2CppModLoader/app/types/XElementWrapper.h>
#include <Il2CppModLoader/app/types/XmlNodeConverter.h>
#include <Il2CppModLoader/app/types/IXmlDocument.h>

namespace app::classes::types {
    namespace IValueProvider { IL2CPP_MODLOADER_DLLEXPORT ::app::IValueProvider__Class** type_info = (::app::IValueProvider__Class**)(modloader::win::memory::resolve_rva(0x047199C0)); }
    namespace ExtensionDataSetter { IL2CPP_MODLOADER_DLLEXPORT ::app::ExtensionDataSetter__Class** type_info = (::app::ExtensionDataSetter__Class**)(modloader::win::memory::resolve_rva(0x0478C310)); }
    namespace ExtensionDataGetter { IL2CPP_MODLOADER_DLLEXPORT ::app::ExtensionDataGetter__Class** type_info = (::app::ExtensionDataGetter__Class**)(modloader::win::memory::resolve_rva(0x0475DC78)); }
    namespace JsonDictionaryContract { IL2CPP_MODLOADER_DLLEXPORT ::app::JsonDictionaryContract__Class** type_info = (::app::JsonDictionaryContract__Class**)(modloader::win::memory::resolve_rva(0x04739F80)); }
    namespace JsonArrayContract { IL2CPP_MODLOADER_DLLEXPORT ::app::JsonArrayContract__Class** type_info = (::app::JsonArrayContract__Class**)(modloader::win::memory::resolve_rva(0x047395A8)); }
    namespace JsonPrimitiveContract { IL2CPP_MODLOADER_DLLEXPORT ::app::JsonPrimitiveContract__Class** type_info = (::app::JsonPrimitiveContract__Class**)(modloader::win::memory::resolve_rva(0x04722438)); }
    namespace JsonLinqContract { IL2CPP_MODLOADER_DLLEXPORT ::app::JsonLinqContract__Class** type_info = (::app::JsonLinqContract__Class**)(modloader::win::memory::resolve_rva(0x04776010)); }
    namespace JsonISerializableContract { IL2CPP_MODLOADER_DLLEXPORT ::app::JsonISerializableContract__Class** type_info = (::app::JsonISerializableContract__Class**)(modloader::win::memory::resolve_rva(0x04740880)); }
    namespace JsonDynamicContract { IL2CPP_MODLOADER_DLLEXPORT ::app::JsonDynamicContract__Class** type_info = (::app::JsonDynamicContract__Class**)(modloader::win::memory::resolve_rva(0x0470B9C0)); }
    namespace JsonStringContract { IL2CPP_MODLOADER_DLLEXPORT ::app::JsonStringContract__Class** type_info = (::app::JsonStringContract__Class**)(modloader::win::memory::resolve_rva(0x0470D598)); }
    namespace SerializationErrorCallback { IL2CPP_MODLOADER_DLLEXPORT ::app::SerializationErrorCallback__Class** type_info = (::app::SerializationErrorCallback__Class**)(modloader::win::memory::resolve_rva(0x047087C0)); }
    namespace DefaultContractResolver_c { IL2CPP_MODLOADER_DLLEXPORT ::app::DefaultContractResolver_c__Class** type_info = (::app::DefaultContractResolver_c__Class**)(modloader::win::memory::resolve_rva(0x04733F20)); }
    namespace DefaultContractResolver_c_DisplayClass42_0 { IL2CPP_MODLOADER_DLLEXPORT ::app::DefaultContractResolver_c_DisplayClass42_0__Class** type_info = (::app::DefaultContractResolver_c_DisplayClass42_0__Class**)(modloader::win::memory::resolve_rva(0x0472F558)); }
    namespace DefaultContractResolver_c_DisplayClass45_0 { IL2CPP_MODLOADER_DLLEXPORT ::app::DefaultContractResolver_c_DisplayClass45_0__Class** type_info = (::app::DefaultContractResolver_c_DisplayClass45_0__Class**)(modloader::win::memory::resolve_rva(0x04764598)); }
    namespace DefaultContractResolver_c_DisplayClass45_1 { IL2CPP_MODLOADER_DLLEXPORT ::app::DefaultContractResolver_c_DisplayClass45_1__Class** type_info = (::app::DefaultContractResolver_c_DisplayClass45_1__Class**)(modloader::win::memory::resolve_rva(0x04775458)); }
    namespace DefaultContractResolver_c_DisplayClass45_2 { IL2CPP_MODLOADER_DLLEXPORT ::app::DefaultContractResolver_c_DisplayClass45_2__Class** type_info = (::app::DefaultContractResolver_c_DisplayClass45_2__Class**)(modloader::win::memory::resolve_rva(0x0477DCC8)); }
    namespace DefaultContractResolver_c_DisplayClass62_0 { IL2CPP_MODLOADER_DLLEXPORT ::app::DefaultContractResolver_c_DisplayClass62_0__Class** type_info = (::app::DefaultContractResolver_c_DisplayClass62_0__Class**)(modloader::win::memory::resolve_rva(0x04740E20)); }
    namespace DefaultContractResolver_c_DisplayClass67_0 { IL2CPP_MODLOADER_DLLEXPORT ::app::DefaultContractResolver_c_DisplayClass67_0__Class** type_info = (::app::DefaultContractResolver_c_DisplayClass67_0__Class**)(modloader::win::memory::resolve_rva(0x04795C38)); }
    namespace DefaultContractResolver_c_DisplayClass80_0 { IL2CPP_MODLOADER_DLLEXPORT ::app::DefaultContractResolver_c_DisplayClass80_0__Class** type_info = (::app::DefaultContractResolver_c_DisplayClass80_0__Class**)(modloader::win::memory::resolve_rva(0x04748008)); }
    namespace DefaultContractResolver_c_DisplayClass81_0 { IL2CPP_MODLOADER_DLLEXPORT ::app::DefaultContractResolver_c_DisplayClass81_0__Class** type_info = (::app::DefaultContractResolver_c_DisplayClass81_0__Class**)(modloader::win::memory::resolve_rva(0x0472AB90)); }
    namespace DefaultReferenceResolver { IL2CPP_MODLOADER_DLLEXPORT ::app::DefaultReferenceResolver__Class** type_info = (::app::DefaultReferenceResolver__Class**)(modloader::win::memory::resolve_rva(0x047682F0)); }
    namespace DynamicValueProvider { IL2CPP_MODLOADER_DLLEXPORT ::app::DynamicValueProvider__Class** type_info = (::app::DynamicValueProvider__Class**)(modloader::win::memory::resolve_rva(0x0478DDB0)); }
    namespace IWrappedCollection { IL2CPP_MODLOADER_DLLEXPORT ::app::IWrappedCollection__Class** type_info = (::app::IWrappedCollection__Class**)(modloader::win::memory::resolve_rva(0x04749A68)); }
    namespace JsonContract_c_DisplayClass57_0 { IL2CPP_MODLOADER_DLLEXPORT ::app::JsonContract_c_DisplayClass57_0__Class** type_info = (::app::JsonContract_c_DisplayClass57_0__Class**)(modloader::win::memory::resolve_rva(0x04794F28)); }
    namespace JsonContract_c_DisplayClass58_0 { IL2CPP_MODLOADER_DLLEXPORT ::app::JsonContract_c_DisplayClass58_0__Class** type_info = (::app::JsonContract_c_DisplayClass58_0__Class**)(modloader::win::memory::resolve_rva(0x04741738)); }
    namespace IWrappedDictionary { IL2CPP_MODLOADER_DLLEXPORT ::app::IWrappedDictionary__Class** type_info = (::app::IWrappedDictionary__Class**)(modloader::win::memory::resolve_rva(0x0475BD90)); }
    namespace JsonFormatterConverter { IL2CPP_MODLOADER_DLLEXPORT ::app::JsonFormatterConverter__Class** type_info = (::app::JsonFormatterConverter__Class**)(modloader::win::memory::resolve_rva(0x0473BBF0)); }
    namespace JsonSerializerInternalBase { IL2CPP_MODLOADER_DLLEXPORT ::app::JsonSerializerInternalBase__Class** type_info = (::app::JsonSerializerInternalBase__Class**)(modloader::win::memory::resolve_rva(0x047344E0)); }
    namespace JsonSerializerInternalReader { IL2CPP_MODLOADER_DLLEXPORT ::app::JsonSerializerInternalReader__Class** type_info = (::app::JsonSerializerInternalReader__Class**)(modloader::win::memory::resolve_rva(0x0476B8A0)); }
    namespace JsonSerializerProxy { IL2CPP_MODLOADER_DLLEXPORT ::app::JsonSerializerProxy__Class** type_info = (::app::JsonSerializerProxy__Class**)(modloader::win::memory::resolve_rva(0x04757FD8)); }
    namespace JsonSerializerInternalWriter { IL2CPP_MODLOADER_DLLEXPORT ::app::JsonSerializerInternalWriter__Class** type_info = (::app::JsonSerializerInternalWriter__Class**)(modloader::win::memory::resolve_rva(0x04702D68)); }
    namespace JsonSerializerInternalBase_ReferenceEqualsEqualityComparer { IL2CPP_MODLOADER_DLLEXPORT ::app::JsonSerializerInternalBase_ReferenceEqualsEqualityComparer__Class** type_info = (::app::JsonSerializerInternalBase_ReferenceEqualsEqualityComparer__Class**)(modloader::win::memory::resolve_rva(0x04741798)); }
    namespace JToken { IL2CPP_MODLOADER_DLLEXPORT ::app::JToken__Class** type_info = (::app::JToken__Class**)(modloader::win::memory::resolve_rva(0x04761348)); }
    namespace JContainer { IL2CPP_MODLOADER_DLLEXPORT ::app::JContainer__Class** type_info = (::app::JContainer__Class**)(modloader::win::memory::resolve_rva(0x04757EF0)); }
    namespace JArray { IL2CPP_MODLOADER_DLLEXPORT ::app::JArray__Class** type_info = (::app::JArray__Class**)(modloader::win::memory::resolve_rva(0x04786F40)); }
    namespace JTokenType__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::JTokenType__Enum__Class** type_info = (::app::JTokenType__Enum__Class**)(modloader::win::memory::resolve_rva(0x04787558)); }
    namespace JTokenType__Enum__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::JTokenType__Enum__Array__Class** type_info = (::app::JTokenType__Enum__Array__Class**)(modloader::win::memory::resolve_rva(0x04791AA8)); }
    namespace JTokenReader { IL2CPP_MODLOADER_DLLEXPORT ::app::JTokenReader__Class** type_info = (::app::JTokenReader__Class**)(modloader::win::memory::resolve_rva(0x04750E40)); }
    namespace JsonSerializerInternalReader_CreatorPropertyContext { IL2CPP_MODLOADER_DLLEXPORT ::app::JsonSerializerInternalReader_CreatorPropertyContext__Class** type_info = (::app::JsonSerializerInternalReader_CreatorPropertyContext__Class**)(modloader::win::memory::resolve_rva(0x0478F478)); }
    namespace JsonSerializerInternalReader_c_DisplayClass37_0 { IL2CPP_MODLOADER_DLLEXPORT ::app::JsonSerializerInternalReader_c_DisplayClass37_0__Class** type_info = (::app::JsonSerializerInternalReader_c_DisplayClass37_0__Class**)(modloader::win::memory::resolve_rva(0x04767298)); }
    namespace JsonSerializerInternalReader_c { IL2CPP_MODLOADER_DLLEXPORT ::app::JsonSerializerInternalReader_c__Class** type_info = (::app::JsonSerializerInternalReader_c__Class**)(modloader::win::memory::resolve_rva(0x04783768)); }
    namespace ISerializable { IL2CPP_MODLOADER_DLLEXPORT ::app::ISerializable__Class** type_info = (::app::ISerializable__Class**)(modloader::win::memory::resolve_rva(0x0475A608)); }
    namespace JsonTypeReflector_c_DisplayClass22_0 { IL2CPP_MODLOADER_DLLEXPORT ::app::JsonTypeReflector_c_DisplayClass22_0__Class** type_info = (::app::JsonTypeReflector_c_DisplayClass22_0__Class**)(modloader::win::memory::resolve_rva(0x04770590)); }
    namespace JsonTypeReflector_c { IL2CPP_MODLOADER_DLLEXPORT ::app::JsonTypeReflector_c__Class** type_info = (::app::JsonTypeReflector_c__Class**)(modloader::win::memory::resolve_rva(0x0474A468)); }
    namespace ReflectionAttributeProvider { IL2CPP_MODLOADER_DLLEXPORT ::app::ReflectionAttributeProvider__Class** type_info = (::app::ReflectionAttributeProvider__Class**)(modloader::win::memory::resolve_rva(0x0470ADB8)); }
    namespace ReflectionValueProvider { IL2CPP_MODLOADER_DLLEXPORT ::app::ReflectionValueProvider__Class** type_info = (::app::ReflectionValueProvider__Class**)(modloader::win::memory::resolve_rva(0x04709B18)); }
    namespace TraceJsonWriter { IL2CPP_MODLOADER_DLLEXPORT ::app::TraceJsonWriter__Class** type_info = (::app::TraceJsonWriter__Class**)(modloader::win::memory::resolve_rva(0x047808E0)); }
    namespace JConstructor { IL2CPP_MODLOADER_DLLEXPORT ::app::JConstructor__Class** type_info = (::app::JConstructor__Class**)(modloader::win::memory::resolve_rva(0x04797450)); }
    namespace JProperty { IL2CPP_MODLOADER_DLLEXPORT ::app::JProperty__Class** type_info = (::app::JProperty__Class**)(modloader::win::memory::resolve_rva(0x04764E98)); }
    namespace JProperty_JPropertyList { IL2CPP_MODLOADER_DLLEXPORT ::app::JProperty_JPropertyList__Class** type_info = (::app::JProperty_JPropertyList__Class**)(modloader::win::memory::resolve_rva(0x04793D90)); }
    namespace JObject { IL2CPP_MODLOADER_DLLEXPORT ::app::JObject__Class** type_info = (::app::JObject__Class**)(modloader::win::memory::resolve_rva(0x047376E8)); }
    namespace JPropertyKeyedCollection { IL2CPP_MODLOADER_DLLEXPORT ::app::JPropertyKeyedCollection__Class** type_info = (::app::JPropertyKeyedCollection__Class**)(modloader::win::memory::resolve_rva(0x047886B0)); }
    namespace JObject_JObjectDynamicProxy { IL2CPP_MODLOADER_DLLEXPORT ::app::JObject_JObjectDynamicProxy__Class** type_info = (::app::JObject_JObjectDynamicProxy__Class**)(modloader::win::memory::resolve_rva(0x04746FA8)); }
    namespace JObject_JObjectDynamicProxy_c { IL2CPP_MODLOADER_DLLEXPORT ::app::JObject_JObjectDynamicProxy_c__Class** type_info = (::app::JObject_JObjectDynamicProxy_c__Class**)(modloader::win::memory::resolve_rva(0x0473FE20)); }
    namespace JObject_GetEnumerator_d_63 { IL2CPP_MODLOADER_DLLEXPORT ::app::JObject_GetEnumerator_d_63__Class** type_info = (::app::JObject_GetEnumerator_d_63__Class**)(modloader::win::memory::resolve_rva(0x0474E680)); }
    namespace JProperty_JPropertyList_GetEnumerator_d_1 { IL2CPP_MODLOADER_DLLEXPORT ::app::JProperty_JPropertyList_GetEnumerator_d_1__Class** type_info = (::app::JProperty_JPropertyList_GetEnumerator_d_1__Class**)(modloader::win::memory::resolve_rva(0x0476AF28)); }
    namespace JPropertyDescriptor { IL2CPP_MODLOADER_DLLEXPORT ::app::JPropertyDescriptor__Class** type_info = (::app::JPropertyDescriptor__Class**)(modloader::win::memory::resolve_rva(0x04730708)); }
    namespace JValue { IL2CPP_MODLOADER_DLLEXPORT ::app::JValue__Class** type_info = (::app::JValue__Class**)(modloader::win::memory::resolve_rva(0x04759368)); }
    namespace JRaw { IL2CPP_MODLOADER_DLLEXPORT ::app::JRaw__Class** type_info = (::app::JRaw__Class**)(modloader::win::memory::resolve_rva(0x0475E448)); }
    namespace JToken_LineInfoAnnotation { IL2CPP_MODLOADER_DLLEXPORT ::app::JToken_LineInfoAnnotation__Class** type_info = (::app::JToken_LineInfoAnnotation__Class**)(modloader::win::memory::resolve_rva(0x0475A8C0)); }
    namespace JTokenWriter { IL2CPP_MODLOADER_DLLEXPORT ::app::JTokenWriter__Class** type_info = (::app::JTokenWriter__Class**)(modloader::win::memory::resolve_rva(0x04729878)); }
    namespace JValue_JValueDynamicProxy { IL2CPP_MODLOADER_DLLEXPORT ::app::JValue_JValueDynamicProxy__Class** type_info = (::app::JValue_JValueDynamicProxy__Class**)(modloader::win::memory::resolve_rva(0x0478D358)); }
    namespace BsonObjectIdConverter { IL2CPP_MODLOADER_DLLEXPORT ::app::BsonObjectIdConverter__Class** type_info = (::app::BsonObjectIdConverter__Class**)(modloader::win::memory::resolve_rva(0x0477E510)); }
    namespace DataSetConverter { IL2CPP_MODLOADER_DLLEXPORT ::app::DataSetConverter__Class** type_info = (::app::DataSetConverter__Class**)(modloader::win::memory::resolve_rva(0x0471F3A0)); }
    namespace DataTableConverter { IL2CPP_MODLOADER_DLLEXPORT ::app::DataTableConverter__Class** type_info = (::app::DataTableConverter__Class**)(modloader::win::memory::resolve_rva(0x04765830)); }
    namespace DiscriminatedUnionConverter_Union { IL2CPP_MODLOADER_DLLEXPORT ::app::DiscriminatedUnionConverter_Union__Class** type_info = (::app::DiscriminatedUnionConverter_Union__Class**)(modloader::win::memory::resolve_rva(0x04716BC8)); }
    namespace DiscriminatedUnionConverter_UnionCase { IL2CPP_MODLOADER_DLLEXPORT ::app::DiscriminatedUnionConverter_UnionCase__Class** type_info = (::app::DiscriminatedUnionConverter_UnionCase__Class**)(modloader::win::memory::resolve_rva(0x0477F1C8)); }
    namespace DiscriminatedUnionConverter { IL2CPP_MODLOADER_DLLEXPORT ::app::DiscriminatedUnionConverter__Class** type_info = (::app::DiscriminatedUnionConverter__Class**)(modloader::win::memory::resolve_rva(0x04716A20)); }
    namespace DiscriminatedUnionConverter_c_DisplayClass8_0 { IL2CPP_MODLOADER_DLLEXPORT ::app::DiscriminatedUnionConverter_c_DisplayClass8_0__Class** type_info = (::app::DiscriminatedUnionConverter_c_DisplayClass8_0__Class**)(modloader::win::memory::resolve_rva(0x047538B8)); }
    namespace DiscriminatedUnionConverter_c_DisplayClass9_0 { IL2CPP_MODLOADER_DLLEXPORT ::app::DiscriminatedUnionConverter_c_DisplayClass9_0__Class** type_info = (::app::DiscriminatedUnionConverter_c_DisplayClass9_0__Class**)(modloader::win::memory::resolve_rva(0x04747DF0)); }
    namespace EntityKeyMemberConverter { IL2CPP_MODLOADER_DLLEXPORT ::app::EntityKeyMemberConverter__Class** type_info = (::app::EntityKeyMemberConverter__Class**)(modloader::win::memory::resolve_rva(0x0476A5D8)); }
    namespace ExpandoObjectConverter { IL2CPP_MODLOADER_DLLEXPORT ::app::ExpandoObjectConverter__Class** type_info = (::app::ExpandoObjectConverter__Class**)(modloader::win::memory::resolve_rva(0x0478B2E8)); }
    namespace KeyValuePairConverter { IL2CPP_MODLOADER_DLLEXPORT ::app::KeyValuePairConverter__Class** type_info = (::app::KeyValuePairConverter__Class**)(modloader::win::memory::resolve_rva(0x0472AF88)); }
    namespace RegexConverter { IL2CPP_MODLOADER_DLLEXPORT ::app::RegexConverter__Class** type_info = (::app::RegexConverter__Class**)(modloader::win::memory::resolve_rva(0x047348F8)); }
    namespace BsonWriter { IL2CPP_MODLOADER_DLLEXPORT ::app::BsonWriter__Class** type_info = (::app::BsonWriter__Class**)(modloader::win::memory::resolve_rva(0x047888C0)); }
    namespace BsonBinaryWriter { IL2CPP_MODLOADER_DLLEXPORT ::app::BsonBinaryWriter__Class** type_info = (::app::BsonBinaryWriter__Class**)(modloader::win::memory::resolve_rva(0x047766A0)); }
    namespace BsonObject { IL2CPP_MODLOADER_DLLEXPORT ::app::BsonObject__Class** type_info = (::app::BsonObject__Class**)(modloader::win::memory::resolve_rva(0x04749758)); }
    namespace BsonProperty { IL2CPP_MODLOADER_DLLEXPORT ::app::BsonProperty__Class** type_info = (::app::BsonProperty__Class**)(modloader::win::memory::resolve_rva(0x0472C2D0)); }
    namespace BsonType__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::BsonType__Enum__Class** type_info = (::app::BsonType__Enum__Class**)(modloader::win::memory::resolve_rva(0x0478ACB0)); }
    namespace BsonValue { IL2CPP_MODLOADER_DLLEXPORT ::app::BsonValue__Class** type_info = (::app::BsonValue__Class**)(modloader::win::memory::resolve_rva(0x047622C0)); }
    namespace BsonString { IL2CPP_MODLOADER_DLLEXPORT ::app::BsonString__Class** type_info = (::app::BsonString__Class**)(modloader::win::memory::resolve_rva(0x0470E7F0)); }
    namespace XmlNodeWrapper { IL2CPP_MODLOADER_DLLEXPORT ::app::XmlNodeWrapper__Class** type_info = (::app::XmlNodeWrapper__Class**)(modloader::win::memory::resolve_rva(0x04769DE0)); }
    namespace XmlDocumentWrapper { IL2CPP_MODLOADER_DLLEXPORT ::app::XmlDocumentWrapper__Class** type_info = (::app::XmlDocumentWrapper__Class**)(modloader::win::memory::resolve_rva(0x04758CC8)); }
    namespace IXmlNode { IL2CPP_MODLOADER_DLLEXPORT ::app::IXmlNode__Class** type_info = (::app::IXmlNode__Class**)(modloader::win::memory::resolve_rva(0x047681E0)); }
    namespace IXmlElement { IL2CPP_MODLOADER_DLLEXPORT ::app::IXmlElement__Class** type_info = (::app::IXmlElement__Class**)(modloader::win::memory::resolve_rva(0x0471E948)); }
    namespace XmlElementWrapper { IL2CPP_MODLOADER_DLLEXPORT ::app::XmlElementWrapper__Class** type_info = (::app::XmlElementWrapper__Class**)(modloader::win::memory::resolve_rva(0x047687D8)); }
    namespace XmlDeclarationWrapper { IL2CPP_MODLOADER_DLLEXPORT ::app::XmlDeclarationWrapper__Class** type_info = (::app::XmlDeclarationWrapper__Class**)(modloader::win::memory::resolve_rva(0x0471CA90)); }
    namespace XmlDocumentTypeWrapper { IL2CPP_MODLOADER_DLLEXPORT ::app::XmlDocumentTypeWrapper__Class** type_info = (::app::XmlDocumentTypeWrapper__Class**)(modloader::win::memory::resolve_rva(0x0472CE38)); }
    namespace XObjectWrapper { IL2CPP_MODLOADER_DLLEXPORT ::app::XObjectWrapper__Class** type_info = (::app::XObjectWrapper__Class**)(modloader::win::memory::resolve_rva(0x0472E138)); }
    namespace XDeclarationWrapper { IL2CPP_MODLOADER_DLLEXPORT ::app::XDeclarationWrapper__Class** type_info = (::app::XDeclarationWrapper__Class**)(modloader::win::memory::resolve_rva(0x04743CB8)); }
    namespace XDocumentTypeWrapper { IL2CPP_MODLOADER_DLLEXPORT ::app::XDocumentTypeWrapper__Class** type_info = (::app::XDocumentTypeWrapper__Class**)(modloader::win::memory::resolve_rva(0x04791390)); }
    namespace XContainerWrapper { IL2CPP_MODLOADER_DLLEXPORT ::app::XContainerWrapper__Class** type_info = (::app::XContainerWrapper__Class**)(modloader::win::memory::resolve_rva(0x04766A48)); }
    namespace XDocumentWrapper { IL2CPP_MODLOADER_DLLEXPORT ::app::XDocumentWrapper__Class** type_info = (::app::XDocumentWrapper__Class**)(modloader::win::memory::resolve_rva(0x047507D8)); }
    namespace XTextWrapper { IL2CPP_MODLOADER_DLLEXPORT ::app::XTextWrapper__Class** type_info = (::app::XTextWrapper__Class**)(modloader::win::memory::resolve_rva(0x0473BA20)); }
    namespace XCommentWrapper { IL2CPP_MODLOADER_DLLEXPORT ::app::XCommentWrapper__Class** type_info = (::app::XCommentWrapper__Class**)(modloader::win::memory::resolve_rva(0x04744C40)); }
    namespace XProcessingInstructionWrapper { IL2CPP_MODLOADER_DLLEXPORT ::app::XProcessingInstructionWrapper__Class** type_info = (::app::XProcessingInstructionWrapper__Class**)(modloader::win::memory::resolve_rva(0x0475F660)); }
    namespace XAttributeWrapper { IL2CPP_MODLOADER_DLLEXPORT ::app::XAttributeWrapper__Class** type_info = (::app::XAttributeWrapper__Class**)(modloader::win::memory::resolve_rva(0x0473D7B0)); }
    namespace XElementWrapper { IL2CPP_MODLOADER_DLLEXPORT ::app::XElementWrapper__Class** type_info = (::app::XElementWrapper__Class**)(modloader::win::memory::resolve_rva(0x0473BBE8)); }
    namespace XmlNodeConverter { IL2CPP_MODLOADER_DLLEXPORT ::app::XmlNodeConverter__Class** type_info = (::app::XmlNodeConverter__Class**)(modloader::win::memory::resolve_rva(0x047270A8)); }
    namespace IXmlDocument { IL2CPP_MODLOADER_DLLEXPORT ::app::IXmlDocument__Class** type_info = (::app::IXmlDocument__Class**)(modloader::win::memory::resolve_rva(0x0475A7A8)); }
}
