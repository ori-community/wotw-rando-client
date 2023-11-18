#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TestSetConfiguration.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::TestSetConfiguration {
    IL2CPP_REGISTER_METHOD(0x010DD010, void, ctor, (app::TestSetConfiguration * this_ptr, app::String* test_set_folder_path))
}
