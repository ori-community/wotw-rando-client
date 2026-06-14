#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AkCommonUserSettings.h>
#include <Modloader/app/structs/AkDeviceSettings.h>
#include <Modloader/app/structs/AkInitSettings.h>
#include <Modloader/app/structs/AkMemSettings.h>
#include <Modloader/app/structs/AkMusicSettings.h>
#include <Modloader/app/structs/AkPlatformInitSettings.h>
#include <Modloader/app/structs/AkSpatialAudioInitSettings.h>
#include <Modloader/app/structs/AkStreamMgrSettings.h>
#include <Modloader/app/structs/AkUnityPlatformSpecificSettings.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::AkCommonUserSettings {
    IL2CPP_REGISTER_METHOD(0x026DAD80, void, CopyTo_1, app::AkCommonUserSettings* this_ptr, app::AkMemSettings* settings)
    IL2CPP_REGISTER_METHOD(0x026DAEC0, app::String*, GetPluginPath, )
    IL2CPP_REGISTER_METHOD(0x026DB060, void, CopyTo_2, app::AkCommonUserSettings* this_ptr, app::AkInitSettings* settings)
    IL2CPP_REGISTER_METHOD(0x026DB5E0, void, CopyTo_3, app::AkCommonUserSettings* this_ptr, app::AkMusicSettings* settings)
    IL2CPP_REGISTER_METHOD(0x026DB720, void, CopyTo_4, app::AkCommonUserSettings* this_ptr, app::AkStreamMgrSettings* settings)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, CopyTo_5, app::AkCommonUserSettings* this_ptr, app::AkDeviceSettings* settings)
    IL2CPP_REGISTER_METHOD(0x026DB860, void, CopyTo_6, app::AkCommonUserSettings* this_ptr, app::AkPlatformInitSettings* settings)
    IL2CPP_REGISTER_METHOD(0x026DBAD0, void, CopyTo_7, app::AkCommonUserSettings* this_ptr, app::AkSpatialAudioInitSettings* settings)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, CopyTo_8, app::AkCommonUserSettings* this_ptr, app::AkUnityPlatformSpecificSettings* settings)
    IL2CPP_REGISTER_METHOD(0x026DBF50, void, Validate, app::AkCommonUserSettings* this_ptr)
    IL2CPP_REGISTER_METHOD(0x026DBF70, void, ctor, app::AkCommonUserSettings* this_ptr)
} // namespace app::classes::AkCommonUserSettings
