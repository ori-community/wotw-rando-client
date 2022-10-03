#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::TestSetConfiguration {
    IL2CPP_REGISTER_METHOD(0x010DD010, void, ctor, (app::TestSetConfiguration * this_ptr, app::String* test_set_folder_path))
}
