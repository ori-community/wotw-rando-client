#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/LanguageToggler.h>
#include <Modloader/app/structs/String__Array.h>

namespace app::classes::LanguageToggler {
    IL2CPP_REGISTER_METHOD(0x00F05330, app::String*, get_Path, (app::LanguageToggler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F053B0, app::String*, get_Name, (app::LanguageToggler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F05430, app::String*, get_HelpText, (app::LanguageToggler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, get_Column, (app::LanguageToggler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F054B0, app::String__Array*, get_ToggleOptions, (app::LanguageToggler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F05CE0, int32_t, get_CurrentToggleOptionId, (app::LanguageToggler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F05D90, void, set_CurrentToggleOptionId, (app::LanguageToggler * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::LanguageToggler * this_ptr))
} // namespace app::classes::LanguageToggler
