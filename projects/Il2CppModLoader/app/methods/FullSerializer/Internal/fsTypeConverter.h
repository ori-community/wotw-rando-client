#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::FullSerializer::Internal::fsTypeConverter {
    IL2CPP_REGISTER_METHOD(0x01502A50, bool, CanProcess, (app::fsTypeConverter * this_ptr, app::Type * type))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, RequestCycleSupport, (app::fsTypeConverter * this_ptr, app::Type * type))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, RequestInheritanceSupport, (app::fsTypeConverter * this_ptr, app::Type * type))
    IL2CPP_REGISTER_METHOD(0x01502B20, app::fsResult, TrySerialize, (app::fsTypeConverter * this_ptr, app::Object * instance, app::fsData * * serialized, app::Type * storage_type))
    IL2CPP_REGISTER_METHOD(0x01502D20, app::fsResult, TryDeserialize, (app::fsTypeConverter * this_ptr, app::fsData * data, app::Object * * instance, app::Type * storage_type))
    IL2CPP_REGISTER_METHOD(0x01502ED0, app::Object *, CreateInstance, (app::fsTypeConverter * this_ptr, app::fsData * data, app::Type * storage_type))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::fsTypeConverter * this_ptr))
}
