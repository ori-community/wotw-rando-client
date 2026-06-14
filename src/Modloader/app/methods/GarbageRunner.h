#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GarbageRunner.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::GarbageRunner {
    IL2CPP_REGISTER_METHOD(0x004169E0, void, ctor, app::GarbageRunner* this_ptr, app::String* path)
    IL2CPP_REGISTER_METHOD(0x00416B60, bool, GarbageTest, )
} // namespace app::classes::GarbageRunner
