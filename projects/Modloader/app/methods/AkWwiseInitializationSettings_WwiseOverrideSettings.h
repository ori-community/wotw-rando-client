#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AkWwiseInitializationSettings_WwiseOverrideSettings.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::AkWwiseInitializationSettings_WwiseOverrideSettings {
    IL2CPP_REGISTER_METHOD(0x027080F0, app::String*, get_path, )
    IL2CPP_REGISTER_METHOD(0x027081B0, void, ctor, app::AkWwiseInitializationSettings_WwiseOverrideSettings* this_ptr)
} // namespace app::classes::AkWwiseInitializationSettings_WwiseOverrideSettings
