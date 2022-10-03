#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Linq::Set_1_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x0254B120, void, ctor, (app::Set_1_System_Object_ * this_ptr, app::IEqualityComparer_1_System_Object_* comparer))
    IL2CPP_REGISTER_METHOD(0x0254AB10, bool, Add, (app::Set_1_System_Object_ * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x0254B220, bool, Find, (app::Set_1_System_Object_ * this_ptr, app::Object* value, bool add))
    IL2CPP_REGISTER_METHOD(0x0254B590, void, Resize, (app::Set_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04736788, Set_1_System_Object__Resize__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0254B790, int32_t, InternalGetHashCode, (app::Set_1_System_Object_ * this_ptr, app::Object* value))
} // namespace app::classes::System::Linq::Set_1_System_Object_
