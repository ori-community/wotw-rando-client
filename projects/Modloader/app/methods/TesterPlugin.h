#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TesterPlugin.h>

namespace app::classes::TesterPlugin {
    IL2CPP_REGISTER_METHOD(0x010E2B80, void, Awake, app::TesterPlugin* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010E2C40, void, PlayCycle, app::TesterPlugin* this_ptr, int32_t frame)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, RecordCycle, app::TesterPlugin* this_ptr, int32_t frame)
    IL2CPP_REGISTER_METHOD(0x010E32C0, void, Exit, app::TesterPlugin* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::TesterPlugin* this_ptr)
} // namespace app::classes::TesterPlugin
