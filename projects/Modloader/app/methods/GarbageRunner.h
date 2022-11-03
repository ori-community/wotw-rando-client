#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::GarbageRunner {
    IL2CPP_REGISTER_METHOD(0x004169E0, void, ctor, (app::GarbageRunner * this_ptr, app::String* path))
    IL2CPP_REGISTER_METHOD(0x00416B60, bool, GarbageTest, ())
    IL2CPP_REGISTER_METHODINFO(0x04796360, GarbageRunner_GarbageTest__MethodInfo)
} // namespace app::classes::GarbageRunner
