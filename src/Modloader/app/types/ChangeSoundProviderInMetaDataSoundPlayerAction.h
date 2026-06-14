#pragma once
#include <Modloader/app/structs/ChangeSoundProviderInMetaDataSoundPlayerAction.h>
#include <Modloader/app/structs/ChangeSoundProviderInMetaDataSoundPlayerAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ChangeSoundProviderInMetaDataSoundPlayerAction {
        inline app::ChangeSoundProviderInMetaDataSoundPlayerAction__Class** type_info() {
            static app::ChangeSoundProviderInMetaDataSoundPlayerAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ChangeSoundProviderInMetaDataSoundPlayerAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ChangeSoundProviderInMetaDataSoundPlayerAction__Class* get_class() {
            return il2cpp::get_class<app::ChangeSoundProviderInMetaDataSoundPlayerAction__Class>(type_info(), "", "ChangeSoundProviderInMetaDataSoundPlayerAction");
        }
        inline app::ChangeSoundProviderInMetaDataSoundPlayerAction* create() {
            return il2cpp::create_object<app::ChangeSoundProviderInMetaDataSoundPlayerAction>(get_class());
        }
    } // namespace ChangeSoundProviderInMetaDataSoundPlayerAction
} // namespace app::classes::types
