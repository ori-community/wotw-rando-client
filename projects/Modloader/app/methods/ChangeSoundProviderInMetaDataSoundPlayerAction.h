#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ChangeSoundProviderInMetaDataSoundPlayerAction.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::ChangeSoundProviderInMetaDataSoundPlayerAction {
    IL2CPP_REGISTER_METHOD(0x01045FA0, void, Perform, app::ChangeSoundProviderInMetaDataSoundPlayerAction* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x01046110, void, ctor, app::ChangeSoundProviderInMetaDataSoundPlayerAction* this_ptr)
} // namespace app::classes::ChangeSoundProviderInMetaDataSoundPlayerAction
