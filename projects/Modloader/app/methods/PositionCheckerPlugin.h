#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PositionCheckerPlugin.h>

namespace app::classes::PositionCheckerPlugin {
    IL2CPP_REGISTER_METHOD(0x00C675B0, void, Awake, app::PositionCheckerPlugin* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C67670, void, PlayCycle, app::PositionCheckerPlugin* this_ptr, int32_t frame)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, RecordCycle, app::PositionCheckerPlugin* this_ptr, int32_t frame)
    IL2CPP_REGISTER_METHOD(0x00C68170, void, Exit, app::PositionCheckerPlugin* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C68210, void, OnGUI, app::PositionCheckerPlugin* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C68650, void, ctor, app::PositionCheckerPlugin* this_ptr)
} // namespace app::classes::PositionCheckerPlugin
