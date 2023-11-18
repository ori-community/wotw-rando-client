#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/JsonSerializerInternalWriter.h>
#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/DefaultValueHandling__Enum.h>
#include <Modloader/app/structs/IDictionary.h>
#include <Modloader/app/structs/IDynamicMetaObjectProvider.h>
#include <Modloader/app/structs/IEnumerable.h>
#include <Modloader/app/structs/ISerializable.h>
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/JsonArrayContract.h>
#include <Modloader/app/structs/JsonContainerContract.h>
#include <Modloader/app/structs/JsonContract.h>
#include <Modloader/app/structs/JsonConverter.h>
#include <Modloader/app/structs/JsonDictionaryContract.h>
#include <Modloader/app/structs/JsonDynamicContract.h>
#include <Modloader/app/structs/JsonISerializableContract.h>
#include <Modloader/app/structs/JsonObjectContract.h>
#include <Modloader/app/structs/JsonPrimitiveContract.h>
#include <Modloader/app/structs/JsonProperty.h>
#include <Modloader/app/structs/JsonSerializer.h>
#include <Modloader/app/structs/JsonSerializerProxy.h>
#include <Modloader/app/structs/JsonStringContract.h>
#include <Modloader/app/structs/JsonWriter.h>
#include <Modloader/app/structs/Nullable_1_Boolean_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/PreserveReferencesHandling__Enum.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/TypeNameHandling__Enum.h>

namespace app::classes::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter {
    IL2CPP_REGISTER_METHOD(0x01BF1EA0, void, ctor, (app::JsonSerializerInternalWriter * this_ptr, app::JsonSerializer* serializer))
    IL2CPP_REGISTER_METHOD(0x01BF2000, void, Serialize, (app::JsonSerializerInternalWriter * this_ptr, app::JsonWriter* json_writer, app::Object* value, app::Type* object_type))
    IL2CPP_REGISTER_METHOD(0x01BF2260, app::JsonSerializerProxy*, GetInternalSerializer, (app::JsonSerializerInternalWriter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01BF2440, app::JsonContract*, GetContractSafe, (app::JsonSerializerInternalWriter * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x01BF2510, void, SerializePrimitive, (app::JsonSerializerInternalWriter * this_ptr, app::JsonWriter* writer, app::Object* value, app::JsonPrimitiveContract* contract, app::JsonProperty* member, app::JsonContainerContract* container_contract, app::JsonProperty* container_property))
    IL2CPP_REGISTER_METHOD(0x01BF26E0, void, SerializeValue, (app::JsonSerializerInternalWriter * this_ptr, app::JsonWriter* writer, app::Object* value, app::JsonContract* value_contract, app::JsonProperty* member, app::JsonContainerContract* container_contract, app::JsonProperty* container_property))
    IL2CPP_REGISTER_METHOD(0x01BF2C30, app::Nullable_1_Boolean_, ResolveIsReference, (app::JsonSerializerInternalWriter * this_ptr, app::JsonContract* contract, app::JsonProperty* property, app::JsonContainerContract* collection_contract, app::JsonProperty* container_property))
    IL2CPP_REGISTER_METHOD(0x01BF2D20, bool, ShouldWriteReference, (app::JsonSerializerInternalWriter * this_ptr, app::Object* value, app::JsonProperty* property, app::JsonContract* value_contract, app::JsonContainerContract* collection_contract, app::JsonProperty* container_property))
    IL2CPP_REGISTER_METHOD(0x01BF2E90, bool, ShouldWriteProperty, (app::JsonSerializerInternalWriter * this_ptr, app::Object* member_value, app::JsonObjectContract* container_contract, app::JsonProperty* property))
    IL2CPP_REGISTER_METHOD(0x01BF2FA0, bool, CheckForCircularReference, (app::JsonSerializerInternalWriter * this_ptr, app::JsonWriter* writer, app::Object* value, app::JsonProperty* property, app::JsonContract* contract, app::JsonContainerContract* container_contract, app::JsonProperty* container_property))
    IL2CPP_REGISTER_METHOD(0x01BF34D0, void, WriteReference, (app::JsonSerializerInternalWriter * this_ptr, app::JsonWriter* writer, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x01BF36F0, app::String*, GetReference, (app::JsonSerializerInternalWriter * this_ptr, app::JsonWriter* writer, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x01BF3860, bool, TryConvertToString, (app::Object * value, app::Type* type, app::String** s))
    IL2CPP_REGISTER_METHOD(0x01BF3A60, void, SerializeString, (app::JsonSerializerInternalWriter * this_ptr, app::JsonWriter* writer, app::Object* value, app::JsonStringContract* contract))
    IL2CPP_REGISTER_METHOD(0x01BF3B10, void, OnSerializing, (app::JsonSerializerInternalWriter * this_ptr, app::JsonWriter* writer, app::JsonContract* contract, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x01BF3CD0, void, OnSerialized, (app::JsonSerializerInternalWriter * this_ptr, app::JsonWriter* writer, app::JsonContract* contract, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x01BF3E90, void, SerializeObject, (app::JsonSerializerInternalWriter * this_ptr, app::JsonWriter* writer, app::Object* value, app::JsonObjectContract* contract, app::JsonProperty* member, app::JsonContainerContract* collection_contract, app::JsonProperty* container_property))
    IL2CPP_REGISTER_METHOD(0x01BF4510, bool, CalculatePropertyValues, (app::JsonSerializerInternalWriter * this_ptr, app::JsonWriter* writer, app::Object* value, app::JsonContainerContract* contract, app::JsonProperty* member, app::JsonProperty* property, app::JsonContract** member_contract, app::Object** member_value))
    IL2CPP_REGISTER_METHOD(0x01BF49A0, void, WriteObjectStart, (app::JsonSerializerInternalWriter * this_ptr, app::JsonWriter* writer, app::Object* value, app::JsonContract* contract, app::JsonProperty* member, app::JsonContainerContract* collection_contract, app::JsonProperty* container_property))
    IL2CPP_REGISTER_METHOD(0x01BF4B50, bool, HasCreatorParameter, (app::JsonSerializerInternalWriter * this_ptr, app::JsonContainerContract* contract, app::JsonProperty* property))
    IL2CPP_REGISTER_METHOD(0x01BF4C60, void, WriteReferenceIdProperty, (app::JsonSerializerInternalWriter * this_ptr, app::JsonWriter* writer, app::Type* type, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x01BF4E30, void, WriteTypeProperty, (app::JsonSerializerInternalWriter * this_ptr, app::JsonWriter* writer, app::Type* type))
    IL2CPP_REGISTER_METHOD(0x01141CD0, bool, HasFlag_1, (app::JsonSerializerInternalWriter * this_ptr, app::DefaultValueHandling__Enum value, app::DefaultValueHandling__Enum flag))
    IL2CPP_REGISTER_METHOD(0x01141CD0, bool, HasFlag_2, (app::JsonSerializerInternalWriter * this_ptr, app::PreserveReferencesHandling__Enum value, app::PreserveReferencesHandling__Enum flag))
    IL2CPP_REGISTER_METHOD(0x01141CD0, bool, HasFlag_3, (app::JsonSerializerInternalWriter * this_ptr, app::TypeNameHandling__Enum value, app::TypeNameHandling__Enum flag))
    IL2CPP_REGISTER_METHOD(0x01BF5040, void, SerializeConvertable, (app::JsonSerializerInternalWriter * this_ptr, app::JsonWriter* writer, app::JsonConverter* converter, app::Object* value, app::JsonContract* contract, app::JsonContainerContract* collection_contract, app::JsonProperty* container_property))
    IL2CPP_REGISTER_METHOD(0x01BF5400, void, SerializeList, (app::JsonSerializerInternalWriter * this_ptr, app::JsonWriter* writer, app::IEnumerable* values, app::JsonArrayContract* contract, app::JsonProperty* member, app::JsonContainerContract* collection_contract, app::JsonProperty* container_property))
    IL2CPP_REGISTER_METHOD(0x01BF5930, void, SerializeMultidimensionalArray_1, (app::JsonSerializerInternalWriter * this_ptr, app::JsonWriter* writer, app::Array* values, app::JsonArrayContract* contract, app::JsonProperty* member, app::JsonContainerContract* collection_contract, app::JsonProperty* container_property))
    IL2CPP_REGISTER_METHOD(0x01BF5B50, void, SerializeMultidimensionalArray_2, (app::JsonSerializerInternalWriter * this_ptr, app::JsonWriter* writer, app::Array* values, app::JsonArrayContract* contract, app::JsonProperty* member, int32_t initial_depth, app::Int32__Array* indices))
    IL2CPP_REGISTER_METHOD(0x01BF6010, bool, WriteStartArray, (app::JsonSerializerInternalWriter * this_ptr, app::JsonWriter* writer, app::Object* values, app::JsonArrayContract* contract, app::JsonProperty* member, app::JsonContainerContract* container_contract, app::JsonProperty* container_property))
    IL2CPP_REGISTER_METHOD(0x01BF62B0, void, SerializeISerializable, (app::JsonSerializerInternalWriter * this_ptr, app::JsonWriter* writer, app::ISerializable* value, app::JsonISerializableContract* contract, app::JsonProperty* member, app::JsonContainerContract* collection_contract, app::JsonProperty* container_property))
    IL2CPP_REGISTER_METHOD(0x01BF68B0, void, SerializeDynamic, (app::JsonSerializerInternalWriter * this_ptr, app::JsonWriter* writer, app::IDynamicMetaObjectProvider* value, app::JsonDynamicContract* contract, app::JsonProperty* member, app::JsonContainerContract* collection_contract, app::JsonProperty* container_property))
    IL2CPP_REGISTER_METHOD(0x01BF7080, bool, ShouldWriteDynamicProperty, (app::JsonSerializerInternalWriter * this_ptr, app::Object* member_value))
    IL2CPP_REGISTER_METHOD(0x01BF7190, bool, ShouldWriteType, (app::JsonSerializerInternalWriter * this_ptr, app::TypeNameHandling__Enum type_name_handling_flag, app::JsonContract* contract, app::JsonProperty* member, app::JsonContainerContract* container_contract, app::JsonProperty* container_property))
    IL2CPP_REGISTER_METHOD(0x01BF73D0, void, SerializeDictionary, (app::JsonSerializerInternalWriter * this_ptr, app::JsonWriter* writer, app::IDictionary* values, app::JsonDictionaryContract* contract, app::JsonProperty* member, app::JsonContainerContract* collection_contract, app::JsonProperty* container_property))
    IL2CPP_REGISTER_METHOD(0x01BF79D0, app::String*, GetPropertyName, (app::JsonSerializerInternalWriter * this_ptr, app::JsonWriter* writer, app::Object* name, app::JsonContract* contract, bool* escape))
    IL2CPP_REGISTER_METHOD(0x01BF80D0, void, HandleError, (app::JsonSerializerInternalWriter * this_ptr, app::JsonWriter* writer, int32_t initial_depth))
    IL2CPP_REGISTER_METHOD(0x01BF8230, bool, ShouldSerialize, (app::JsonSerializerInternalWriter * this_ptr, app::JsonWriter* writer, app::JsonProperty* property, app::Object* target))
    IL2CPP_REGISTER_METHOD(0x01BF8410, bool, IsSpecified, (app::JsonSerializerInternalWriter * this_ptr, app::JsonWriter* writer, app::JsonProperty* property, app::Object* target))
} // namespace app::classes::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter
