#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::UnityEngine::PropertyName {
    IL2CPP_REGISTER_METHOD(0x00217340, void, ctor_1, (app::PropertyName__Boxed * this_ptr, app::String* name))
    IL2CPP_REGISTER_METHOD(0x0010DB80, void, ctor_2, (app::PropertyName__Boxed * this_ptr, app::PropertyName other))
    IL2CPP_REGISTER_METHOD(0x0010DB80, void, ctor_3, (app::PropertyName__Boxed * this_ptr, int32_t id))
    IL2CPP_REGISTER_METHOD(0x0296A4B0, bool, op_Equality, (app::PropertyName lhs, app::PropertyName rhs))
    IL2CPP_REGISTER_METHOD(0x001EBC90, int32_t, GetHashCode, (app::PropertyName__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00217350, bool, Equals_1, (app::PropertyName__Boxed * this_ptr, app::Object* other))
    IL2CPP_REGISTER_METHOD(0x00217410, bool, Equals_2, (app::PropertyName__Boxed * this_ptr, app::PropertyName other))
    IL2CPP_REGISTER_METHOD(0x0296A4C0, app::PropertyName, op_Implicit_1, (app::String * name))
    IL2CPP_REGISTER_METHOD(0x0252E560, app::PropertyName, op_Implicit_2, (int32_t id))
    IL2CPP_REGISTER_METHOD(0x00217420, app::String*, ToString, (app::PropertyName__Boxed * this_ptr))
    inline bool operator==(app::PropertyName lhs, app::PropertyName rhs) {
        return op_Equality(lhs, rhs);
    }
} // namespace app::classes::UnityEngine::PropertyName
