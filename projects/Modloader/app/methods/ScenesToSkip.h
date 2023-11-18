#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ScenesToSkip.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::ScenesToSkip {
    IL2CPP_REGISTER_METHOD(0x010683F0, void, ctor_1, (app::ScenesToSkip * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01068590, void, ctor_2, (app::ScenesToSkip * this_ptr, app::String* input_file_path))
    IL2CPP_REGISTER_METHOD(0x01068720, bool, ShouldSkipScene, (app::ScenesToSkip * this_ptr, app::String* scene))
    IL2CPP_REGISTER_METHOD(0x010688A0, void, ParseInuptFile, (app::ScenesToSkip * this_ptr, app::String* input_file_path))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, cctor, ())
} // namespace app::classes::ScenesToSkip
