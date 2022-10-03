#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::FullSerializer::Internal::fsGuidConverter {
    IL2CPP_REGISTER_METHOD(0x01656230, bool, CanProcess, (app::fsGuidConverter * this_ptr, app::Type* type))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, RequestCycleSupport, (app::fsGuidConverter * this_ptr, app::Type* storage_type))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, RequestInheritanceSupport, (app::fsGuidConverter * this_ptr, app::Type* storage_type))
    IL2CPP_REGISTER_METHOD(0x016562E0, app::fsResult, TrySerialize, (app::fsGuidConverter * this_ptr, app::Object* instance, app::fsData** serialized, app::Type* storage_type))
    IL2CPP_REGISTER_METHOD(0x01656510, app::fsResult, TryDeserialize, (app::fsGuidConverter * this_ptr, app::fsData* data, app::Object** instance, app::Type* storage_type))
    IL2CPP_REGISTER_METHOD(0x01656670, app::Object*, CreateInstance, (app::fsGuidConverter * this_ptr, app::fsData* data, app::Type* storage_type))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::fsGuidConverter * this_ptr))
} // namespace app::classes::FullSerializer::Internal::fsGuidConverter
