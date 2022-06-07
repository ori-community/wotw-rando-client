#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::FullSerializer::Internal::fsWeakReferenceConverter {
    IL2CPP_REGISTER_METHOD(0x01504A10, bool, CanProcess, (app::fsWeakReferenceConverter * this_ptr, app::Type * type))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, RequestCycleSupport, (app::fsWeakReferenceConverter * this_ptr, app::Type * storage_type))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, RequestInheritanceSupport, (app::fsWeakReferenceConverter * this_ptr, app::Type * storage_type))
    IL2CPP_REGISTER_METHOD(0x01504AC0, app::fsResult, TrySerialize, (app::fsWeakReferenceConverter * this_ptr, app::Object * instance, app::fsData * * serialized, app::Type * storage_type))
    IL2CPP_REGISTER_METHOD(0x01504F30, app::fsResult, TryDeserialize, (app::fsWeakReferenceConverter * this_ptr, app::fsData * data, app::Object * * instance, app::Type * storage_type))
    IL2CPP_REGISTER_METHOD(0x015053D0, app::Object *, CreateInstance, (app::fsWeakReferenceConverter * this_ptr, app::fsData * data, app::Type * storage_type))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::fsWeakReferenceConverter * this_ptr))
}
