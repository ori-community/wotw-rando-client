#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SceneLoadingTester.h>

namespace app::classes::SceneLoadingTester {
    IL2CPP_REGISTER_METHOD(0x00BA98B0, int32_t, get_ColorPropertyID, app::SceneLoadingTester* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BA9920, void, ctor, app::SceneLoadingTester* this_ptr)
} // namespace app::classes::SceneLoadingTester
