#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::FullSerializer::Internal::fsIEnumerableConverter {
    IL2CPP_REGISTER_METHOD(0x01656710, bool, CanProcess, (app::fsIEnumerableConverter * this_ptr, app::Type* type))
    IL2CPP_REGISTER_METHOD(0x01656810, app::Object*, CreateInstance, (app::fsIEnumerableConverter * this_ptr, app::fsData* data, app::Type* storage_type))
    IL2CPP_REGISTER_METHOD(0x016568F0, app::fsResult, TrySerialize, (app::fsIEnumerableConverter * this_ptr, app::Object* instance_, app::fsData** serialized, app::Type* storage_type))
    IL2CPP_REGISTER_METHOD(0x01656EB0, bool, IsStack, (app::fsIEnumerableConverter * this_ptr, app::Type* type))
    IL2CPP_REGISTER_METHOD(0x01656FF0, app::fsResult, TryDeserialize, (app::fsIEnumerableConverter * this_ptr, app::fsData* data, app::Object** instance_, app::Type* storage_type))
    IL2CPP_REGISTER_METHOD(0x01657760, int32_t, HintSize, (app::IEnumerable * collection))
    IL2CPP_REGISTER_METHOD(0x01657860, app::Type*, GetElementType, (app::Type * object_type))
    IL2CPP_REGISTER_METHOD(0x016579E0, void, TryClear, (app::Type * type, app::Object* instance))
    IL2CPP_REGISTER_METHOD(0x01657AE0, int32_t, TryGetExistingSize, (app::Type * type, app::Object* instance))
    IL2CPP_REGISTER_METHOD(0x01657C50, app::MethodInfo_1*, GetAddMethod, (app::Type * type))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::fsIEnumerableConverter * this_ptr))
} // namespace app::classes::FullSerializer::Internal::fsIEnumerableConverter
