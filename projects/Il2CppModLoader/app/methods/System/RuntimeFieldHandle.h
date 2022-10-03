#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::RuntimeFieldHandle {
    IL2CPP_REGISTER_METHOD(0x0010FD20, void, ctor_1, (app::RuntimeFieldHandle__Boxed * this_ptr, void* v))
    IL2CPP_REGISTER_METHOD(0x001D7E50, void, ctor_2, (app::RuntimeFieldHandle__Boxed * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
    IL2CPP_REGISTER_METHODINFO(0x047077F8, RuntimeFieldHandle__ctor_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00107C00, void*, get_Value, (app::RuntimeFieldHandle__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001D7E70, void, GetObjectData, (app::RuntimeFieldHandle__Boxed * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
    IL2CPP_REGISTER_METHODINFO(0x0472FA68, RuntimeFieldHandle_GetObjectData__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001D7FE0, bool, Equals, (app::RuntimeFieldHandle__Boxed * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x0010E170, int32_t, GetHashCode, (app::RuntimeFieldHandle__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01EE2430, void, SetValueInternal, (app::FieldInfo_1 * fi, app::Object* obj, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x01EE2430, void, SetValue, (app::RtFieldInfo * field, app::Object* obj, app::Object* value, app::RuntimeType* field_type, app::FieldAttributes__Enum field_attr, app::RuntimeType* declaring_type, bool* domain_initialized))
    IL2CPP_REGISTER_METHOD(0x01EE2440, void, SetValueDirect, (app::RtFieldInfo * field, app::RuntimeType* field_type, app::Void* p_typed_ref, app::Object* value, app::RuntimeType* context_type))
} // namespace app::classes::System::RuntimeFieldHandle
