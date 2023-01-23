#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/RuntimeTypeHandle__Boxed.h>
#include <Modloader/app/structs/RuntimeType.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/StreamingContext.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/TypeAttributes__Enum.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/RuntimeAssembly.h>
#include <Modloader/app/structs/RuntimeModule.h>

namespace app::classes::System::RuntimeTypeHandle {
    IL2CPP_REGISTER_METHOD(0x0010FD20, void, ctor_1, (app::RuntimeTypeHandle__Boxed * this_ptr, void* val))
    IL2CPP_REGISTER_METHOD(0x001D83E0, void, ctor_2, (app::RuntimeTypeHandle__Boxed * this_ptr, app::RuntimeType* type))
    IL2CPP_REGISTER_METHOD(0x001D8400, void, ctor_3, (app::RuntimeTypeHandle__Boxed * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
    IL2CPP_REGISTER_METHODINFO(0x04728F00, RuntimeTypeHandle__ctor_2__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00107C00, void*, get_Value, (app::RuntimeTypeHandle__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001D8420, void, GetObjectData, (app::RuntimeTypeHandle__Boxed * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
    IL2CPP_REGISTER_METHODINFO(0x0476E560, RuntimeTypeHandle_GetObjectData__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001D8440, bool, Equals, (app::RuntimeTypeHandle__Boxed * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x0010E170, int32_t, GetHashCode, (app::RuntimeTypeHandle__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01EE7420, app::TypeAttributes__Enum, GetAttributes, (app::RuntimeType * type))
    IL2CPP_REGISTER_METHOD(0x01EEAF60, int32_t, GetMetadataToken, (app::RuntimeType * type))
    IL2CPP_REGISTER_METHOD(0x01EEAF60, int32_t, GetToken, (app::RuntimeType * type))
    IL2CPP_REGISTER_METHOD(0x01EF05E0, app::Type*, GetGenericTypeDefinition_impl, (app::RuntimeType * type))
    IL2CPP_REGISTER_METHOD(0x01EF05E0, app::Type*, GetGenericTypeDefinition, (app::RuntimeType * type))
    IL2CPP_REGISTER_METHOD(0x01EE7770, bool, HasElementType, (app::RuntimeType * type))
    IL2CPP_REGISTER_METHOD(0x01EE9140, bool, HasInstantiation, (app::RuntimeType * type))
    IL2CPP_REGISTER_METHOD(0x01EE7920, bool, IsArray, (app::RuntimeType * type))
    IL2CPP_REGISTER_METHOD(0x01EE7520, bool, IsByRef, (app::RuntimeType * type))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IsComObject_1, (app::RuntimeType * type))
    IL2CPP_REGISTER_METHOD(0x01EE6CF0, bool, IsInstanceOfType, (app::RuntimeType * type, app::Object* o))
    IL2CPP_REGISTER_METHOD(0x01EE7560, bool, IsPointer, (app::RuntimeType * type))
    IL2CPP_REGISTER_METHOD(0x01EE7530, bool, IsPrimitive, (app::RuntimeType * type))
    IL2CPP_REGISTER_METHOD(0x01EF0640, bool, HasReferences, (app::RuntimeType * type))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IsComObject_2, (app::RuntimeType * type, bool is_generic_c_o_m))
    IL2CPP_REGISTER_METHOD(0x01EE7450, bool, IsContextful, (app::RuntimeType * type))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IsEquivalentTo, (app::RuntimeType * rt_type1, app::RuntimeType* rt_type2))
    IL2CPP_REGISTER_METHOD(0x01EE78C0, bool, IsSzArray, (app::RuntimeType * type))
    IL2CPP_REGISTER_METHOD(0x01EF0660, bool, IsInterface, (app::RuntimeType * type))
    IL2CPP_REGISTER_METHOD(0x01EF0690, int32_t, GetArrayRank, (app::RuntimeType * type))
    IL2CPP_REGISTER_METHOD(0x01EE6CD0, app::RuntimeAssembly*, GetAssembly, (app::RuntimeType * type))
    IL2CPP_REGISTER_METHOD(0x01EE7A30, app::RuntimeType*, GetElementType, (app::RuntimeType * type))
    IL2CPP_REGISTER_METHOD(0x01EE6CB0, app::RuntimeModule*, GetModule, (app::RuntimeType * type))
    IL2CPP_REGISTER_METHOD(0x01EE8ED0, bool, IsGenericVariable, (app::RuntimeType * type))
    IL2CPP_REGISTER_METHOD(0x01EF06B0, app::RuntimeType*, GetBaseType, (app::RuntimeType * type))
    IL2CPP_REGISTER_METHOD(0x01EF06E0, bool, CanCastTo, (app::RuntimeType * type, app::RuntimeType* target))
    IL2CPP_REGISTER_METHOD(0x01EF0750, bool, type_is_assignable_from, (app::Type * a, app::Type* b))
    IL2CPP_REGISTER_METHOD(0x01EE8EA0, bool, IsGenericTypeDefinition, (app::RuntimeType * type))
    IL2CPP_REGISTER_METHOD(0x01EF07C0, void*, GetGenericParameterInfo, (app::RuntimeType * type))
} // namespace app::classes::System::RuntimeTypeHandle
