#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SoundPlayerRef {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SoundPlayerRef__Class** type_info;
        inline app::SoundPlayerRef__Class* get_class() {
            return il2cpp::get_class<app::SoundPlayerRef__Class>(type_info, "", "SoundPlayerRef");
        }
        inline app::SoundPlayerRef* create() {
            return il2cpp::create_object<app::SoundPlayerRef>(get_class());
        }
        inline app::SoundPlayerRef__Boxed* box(app::SoundPlayerRef value) {
            return il2cpp::box_value<app::SoundPlayerRef__Boxed>(get_class(), value);
        }
    } // namespace SoundPlayerRef
} // namespace app::classes::types
