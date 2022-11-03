#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::TypedReference {
    IL2CPP_REGISTER_METHOD(0x027C42F0, app::TypedReference, MakeTypedReference, (app::Object * target, app::FieldInfo_1__Array* flds))
    IL2CPP_REGISTER_METHODINFO(0x0470EED8, TypedReference_MakeTypedReference__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x027C4880, app::TypedReference, MakeTypedReferenceInternal, (app::Object * target, app::FieldInfo_1__Array* fields))
    IL2CPP_REGISTER_METHOD(0x00203FF0, int32_t, GetHashCode, (app::TypedReference__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002040D0, bool, Equals, (app::TypedReference__Boxed * this_ptr, app::Object* o))
    IL2CPP_REGISTER_METHODINFO(0x0476E168, TypedReference_Equals__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002040E0, bool, get_IsNull, (app::TypedReference__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x027C4A10, void, SetTypedReference, (app::TypedReference target, app::Object* value))
    IL2CPP_REGISTER_METHODINFO(0x04703100, TypedReference_SetTypedReference__MethodInfo)
} // namespace app::classes::System::TypedReference
