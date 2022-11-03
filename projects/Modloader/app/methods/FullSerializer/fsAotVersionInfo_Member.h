#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::FullSerializer::fsAotVersionInfo_Member {
    IL2CPP_REGISTER_METHOD(0x0012C4A0, void, ctor, (app::fsAotVersionInfo_Member__Boxed * this_ptr, app::fsMetaProperty* property))
    IL2CPP_REGISTER_METHOD(0x0012C4B0, bool, Equals, (app::fsAotVersionInfo_Member__Boxed * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x0012C4C0, int32_t, GetHashCode, (app::fsAotVersionInfo_Member__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01507D30, bool, op_Equality, (app::fsAotVersionInfo_Member a, app::fsAotVersionInfo_Member b))
    IL2CPP_REGISTER_METHOD(0x01507E50, bool, op_Inequality, (app::fsAotVersionInfo_Member a, app::fsAotVersionInfo_Member b))
    inline bool operator==(app::fsAotVersionInfo_Member a, app::fsAotVersionInfo_Member b) {
        return op_Equality(a, b);
    }
    inline bool operator!=(app::fsAotVersionInfo_Member a, app::fsAotVersionInfo_Member b) {
        return op_Inequality(a, b);
    }
} // namespace app::classes::FullSerializer::fsAotVersionInfo_Member
