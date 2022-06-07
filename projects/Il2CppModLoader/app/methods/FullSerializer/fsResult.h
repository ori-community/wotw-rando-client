#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::FullSerializer::fsResult {
    IL2CPP_REGISTER_METHOD(0x0012C5C0, void, AddMessage, (app::fsResult__Boxed * this_ptr, app::String * message))
    IL2CPP_REGISTER_METHOD(0x0012C5D0, void, AddMessages, (app::fsResult__Boxed * this_ptr, app::fsResult result))
    IL2CPP_REGISTER_METHOD(0x0012C5F0, app::fsResult, Merge, (app::fsResult__Boxed * this_ptr, app::fsResult other))
    IL2CPP_REGISTER_METHOD(0x01514BC0, app::fsResult, Warn, (app::String * warning))
    IL2CPP_REGISTER_METHOD(0x01514D50, app::fsResult, Fail, (app::String * warning))
    IL2CPP_REGISTER_METHOD(0x01514EE0, app::fsResult, op_Addition, (app::fsResult a, app::fsResult b))
    IL2CPP_REGISTER_METHOD(0x0012C630, bool, get_Failed, (app::fsResult__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0010E100, bool, get_Succeeded, (app::fsResult__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0012C640, bool, get_HasWarnings, (app::fsResult__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0012C6D0, app::fsResult, AssertSuccess, (app::fsResult__Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04726208, fsResult_AssertSuccess__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0012C700, app::fsResult, AssertSuccessWithoutWarnings, (app::fsResult__Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04745B58, fsResult_AssertSuccessWithoutWarnings__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0012C730, app::Exception *, get_AsException, (app::fsResult__Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0478FC90, fsResult_get_AsException__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0012C740, app::IEnumerable_1_System_String_ *, get_RawMessages, (app::fsResult__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0012C750, app::String *, get_FormattedMessages, (app::fsResult__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01515380, void, cctor, ())
    inline app::fsResult operator + (app::fsResult a, app::fsResult b) {
        return op_Addition(a, b);
    }
}
