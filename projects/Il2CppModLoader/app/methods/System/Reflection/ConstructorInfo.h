#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Reflection::ConstructorInfo {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::ConstructorInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417920, app::MemberTypes__Enum, get_MemberType, (app::ConstructorInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0267D4D0, app::Object *, Invoke, (app::ConstructorInfo * this_ptr, app::Object__Array * parameters))
    IL2CPP_REGISTER_METHOD(0x01EEA6F0, bool, Equals, (app::ConstructorInfo * this_ptr, app::Object * obj))
    IL2CPP_REGISTER_METHOD(0x0194D440, int32_t, GetHashCode, (app::ConstructorInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02283820, bool, op_Equality, (app::ConstructorInfo * left, app::ConstructorInfo * right))
    IL2CPP_REGISTER_METHOD(0x02283870, bool, op_Inequality, (app::ConstructorInfo * left, app::ConstructorInfo * right))
    IL2CPP_REGISTER_METHOD(0x0267D5C0, void, cctor, ())
    inline bool operator == (app::ConstructorInfo & left, app::ConstructorInfo & right) {
        return op_Equality(&left, &right);
    }
    inline bool operator != (app::ConstructorInfo & left, app::ConstructorInfo & right) {
        return op_Inequality(&left, &right);
    }
}
