#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::test {
    IL2CPP_REGISTER_METHOD(0x00F729A0, void, Update, (app::test * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F72A70, void, OnGUI, (app::test * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0072D940, void, ctor, (app::test * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010D95F0, void, ctor, (app::Test * this_ptr, app::String* test_file_path))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, TestFinished, (app::Test * this_ptr, bool passed))
    IL2CPP_REGISTER_METHOD(0x010D9690, app::String*, get_TestName, (app::Test * this_ptr))
} // namespace app::classes::test
