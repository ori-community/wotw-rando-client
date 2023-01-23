#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ExceptionProcessor_c.h>
#include <Modloader/app/structs/ExceptionEntry.h>

namespace app::classes::Moon::ExceptionProcessing::ExceptionProcessor___c {
    IL2CPP_REGISTER_METHOD(0x01988700, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::ExceptionProcessor_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor_b__13_0, (app::ExceptionProcessor_c * this_ptr, app::ExceptionEntry* _p0_))
    IL2CPP_REGISTER_METHODINFO(0x04789820, ExceptionProcessor_c___ctor_b__13_0__MethodInfo)
} // namespace app::classes::Moon::ExceptionProcessing::ExceptionProcessor___c
