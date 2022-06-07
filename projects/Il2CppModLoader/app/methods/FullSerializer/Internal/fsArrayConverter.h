#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::FullSerializer::Internal::fsArrayConverter {
    IL2CPP_REGISTER_METHOD(0x01650EE0, bool, CanProcess, (app::fsArrayConverter * this_ptr, app::Type * type))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, RequestCycleSupport, (app::fsArrayConverter * this_ptr, app::Type * storage_type))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, RequestInheritanceSupport, (app::fsArrayConverter * this_ptr, app::Type * storage_type))
    IL2CPP_REGISTER_METHOD(0x01650F10, app::fsResult, TrySerialize, (app::fsArrayConverter * this_ptr, app::Object * instance, app::fsData * * serialized, app::Type * storage_type))
    IL2CPP_REGISTER_METHOD(0x01651280, app::fsResult, TryDeserialize, (app::fsArrayConverter * this_ptr, app::fsData * data, app::Object * * instance, app::Type * storage_type))
    IL2CPP_REGISTER_METHOD(0x01651620, app::Object *, CreateInstance, (app::fsArrayConverter * this_ptr, app::fsData * data, app::Type * storage_type))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::fsArrayConverter * this_ptr))
}
