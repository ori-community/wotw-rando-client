#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Linq::Set_1_System_Char_ {
    IL2CPP_REGISTER_METHOD(0x0254AA10, void, ctor, (app::Set_1_System_Char_ * this_ptr, app::IEqualityComparer_1_System_Char_ * comparer))
    IL2CPP_REGISTER_METHOD(0x0254AB10, bool, Add, (app::Set_1_System_Char_ * this_ptr, uint16_t value))
    IL2CPP_REGISTER_METHOD(0x0254AB40, bool, Find, (app::Set_1_System_Char_ * this_ptr, uint16_t value, bool add))
    IL2CPP_REGISTER_METHOD(0x0254AEB0, void, Resize, (app::Set_1_System_Char_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04711C50, Set_1_System_Char__Resize__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0254B0B0, int32_t, InternalGetHashCode, (app::Set_1_System_Char_ * this_ptr, uint16_t value))
}
