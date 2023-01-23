#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/TestSet_c.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::TestSet___c {
    IL2CPP_REGISTER_METHOD(0x010DCCD0, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::TestSet_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010DCE10, bool, _InitializeTests_b__16_0, (app::TestSet_c * this_ptr, app::String* f))
    IL2CPP_REGISTER_METHODINFO(0x0473FD18, TestSet_c__InitializeTests_b__16_0__MethodInfo)
} // namespace app::classes::TestSet___c
