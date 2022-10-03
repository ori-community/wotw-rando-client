#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ChangeSoundProviderInMetaDataSoundPlayerAction {
        namespace {
            app::ChangeSoundProviderInMetaDataSoundPlayerAction__Class* type_info_ref = nullptr;
        }
        app::ChangeSoundProviderInMetaDataSoundPlayerAction__Class** type_info = &type_info_ref;
        inline app::ChangeSoundProviderInMetaDataSoundPlayerAction__Class* get_class() {
            return il2cpp::get_class<app::ChangeSoundProviderInMetaDataSoundPlayerAction__Class>(type_info, "", "ChangeSoundProviderInMetaDataSoundPlayerAction");
        }
        inline app::ChangeSoundProviderInMetaDataSoundPlayerAction* create() {
            return il2cpp::create_object<app::ChangeSoundProviderInMetaDataSoundPlayerAction>(get_class());
        }
    } // namespace ChangeSoundProviderInMetaDataSoundPlayerAction
} // namespace app::classes::types
