#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DebugOutput.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::DebugOutput {
    IL2CPP_REGISTER_METHOD(0x00DF9B10, void, Awake, (app::DebugOutput * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DF9E40, void, Output, (app::String * text))
    IL2CPP_REGISTER_METHOD(0x00DF9F20, void, OnDestroy, (app::DebugOutput * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::DebugOutput * this_ptr))
} // namespace app::classes::DebugOutput
