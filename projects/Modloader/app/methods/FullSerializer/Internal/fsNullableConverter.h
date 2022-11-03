#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::FullSerializer::Internal::fsNullableConverter {
    IL2CPP_REGISTER_METHOD(0x01658FF0, bool, CanProcess, (app::fsNullableConverter * this_ptr, app::Type* type))
    IL2CPP_REGISTER_METHOD(0x01659100, app::fsResult, TrySerialize, (app::fsNullableConverter * this_ptr, app::Object* instance, app::fsData** serialized, app::Type* storage_type))
    IL2CPP_REGISTER_METHOD(0x01659180, app::fsResult, TryDeserialize, (app::fsNullableConverter * this_ptr, app::fsData* data, app::Object** instance, app::Type* storage_type))
    IL2CPP_REGISTER_METHOD(0x01502ED0, app::Object*, CreateInstance, (app::fsNullableConverter * this_ptr, app::fsData* data, app::Type* storage_type))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::fsNullableConverter * this_ptr))
} // namespace app::classes::FullSerializer::Internal::fsNullableConverter
