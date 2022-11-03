#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Microsoft::Applications::Events::DataModels::PII {
    IL2CPP_REGISTER_METHOD(0x002FC6D0, app::PIIKind__Enum, get_Kind, (app::PII * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, set_Kind, (app::PII * this_ptr, app::PIIKind__Enum value))
    IL2CPP_REGISTER_METHOD(0x002FD260, void, ctor_1, (app::PII * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FC780, void, ctor_2, (app::PII * this_ptr, app::String* full_name, app::String* name))
    IL2CPP_REGISTER_METHOD(0x002FD2F0, app::List_1_System_Object_*, op_Implicit, (app::PII * v))
    IL2CPP_REGISTER_METHODINFO(0x04792190, PII_op_Implicit__MethodInfo)
} // namespace app::classes::Microsoft::Applications::Events::DataModels::PII
