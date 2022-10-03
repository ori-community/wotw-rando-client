#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::FullSerializer::Internal::fsEnumConverter {
    IL2CPP_REGISTER_METHOD(0x01654CA0, bool, CanProcess, (app::fsEnumConverter * this_ptr, app::Type* type))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, RequestCycleSupport, (app::fsEnumConverter * this_ptr, app::Type* storage_type))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, RequestInheritanceSupport, (app::fsEnumConverter * this_ptr, app::Type* storage_type))
    IL2CPP_REGISTER_METHOD(0x01654D50, app::Object*, CreateInstance, (app::fsEnumConverter * this_ptr, app::fsData* data, app::Type* storage_type))
    IL2CPP_REGISTER_METHOD(0x01654E10, app::fsResult, TrySerialize, (app::fsEnumConverter * this_ptr, app::Object* instance, app::fsData** serialized, app::Type* storage_type))
    IL2CPP_REGISTER_METHOD(0x016554F0, app::fsResult, TryDeserialize, (app::fsEnumConverter * this_ptr, app::fsData* data, app::Object** instance, app::Type* storage_type))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::fsEnumConverter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x018F2990, bool, ArrayContains_1, (app::Object__Array * values, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x018F2990, bool, ArrayContains_2, (app::String__Array * values, app::String* value))
    IL2CPP_REGISTER_METHODINFO(0x04790FB0, fsEnumConverter_ArrayContains_1__MethodInfo)
} // namespace app::classes::FullSerializer::Internal::fsEnumConverter
