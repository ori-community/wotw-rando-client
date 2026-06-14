#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ArtBuildController_c.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::ArtBuildController___c {
    IL2CPP_REGISTER_METHOD(0x00840BC0, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::ArtBuildController_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00840D00, bool, _LoadScreenshots_b__9_0, app::ArtBuildController_c* this_ptr, app::String* f)
} // namespace app::classes::ArtBuildController___c
