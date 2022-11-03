#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::NintendoSwitch {
    IL2CPP_REGISTER_METHOD(0x031132F0, app::NintendoSwitch*, get_Instance, ())
    IL2CPP_REGISTER_METHOD(0x03113370, void, set_Instance, (app::NintendoSwitch * value))
    IL2CPP_REGISTER_METHOD(0x03113400, bool, get_InvalidMountSetup, ())
    IL2CPP_REGISTER_METHOD(0x03113480, void, set_InvalidMountSetup, (bool value))
    IL2CPP_REGISTER_METHOD(0x03113510, app::String*, GetSaveDataFilePath, (app::NintendoSwitch * this_ptr, app::String* file_name))
    IL2CPP_REGISTER_METHOD(0x03113590, app::String*, GetOutputPath, ())
    IL2CPP_REGISTER_METHOD(0x03113610, app::String*, GetHostOutputPath, ())
    IL2CPP_REGISTER_METHOD(0x03113690, void, Initialize, (app::NintendoSwitch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, InitializeHostSetup, (app::NintendoSwitch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03113720, app::String*, FixWithProfanityCheck, (app::String * to_check))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, HasProfanity, (app::String * to_check))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::NintendoSwitch * this_ptr))
} // namespace app::classes::NintendoSwitch
