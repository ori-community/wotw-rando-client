#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::FullSerializer::Internal::fsKeyValuePairConverter {
    IL2CPP_REGISTER_METHOD(0x01657F40, bool, CanProcess, (app::fsKeyValuePairConverter * this_ptr, app::Type * type))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, RequestCycleSupport, (app::fsKeyValuePairConverter * this_ptr, app::Type * storage_type))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, RequestInheritanceSupport, (app::fsKeyValuePairConverter * this_ptr, app::Type * storage_type))
    IL2CPP_REGISTER_METHOD(0x01658050, app::fsResult, TryDeserialize, (app::fsKeyValuePairConverter * this_ptr, app::fsData * data, app::Object * * instance, app::Type * storage_type))
    IL2CPP_REGISTER_METHOD(0x01658430, app::fsResult, TrySerialize, (app::fsKeyValuePairConverter * this_ptr, app::Object * instance, app::fsData * * serialized, app::Type * storage_type))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::fsKeyValuePairConverter * this_ptr))
}
