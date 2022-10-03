#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MixerGroupSettings {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MixerGroupSettings__Class** type_info;
        inline app::MixerGroupSettings__Class* get_class() {
            return il2cpp::get_class<app::MixerGroupSettings__Class>(type_info, "", "MixerGroupSettings");
        }
        inline app::MixerGroupSettings* create() {
            return il2cpp::create_object<app::MixerGroupSettings>(get_class());
        }
        inline app::MixerGroupSettings__Boxed* box(app::MixerGroupSettings value) {
            return il2cpp::box_value<app::MixerGroupSettings__Boxed>(get_class(), value);
        }
    } // namespace MixerGroupSettings
} // namespace app::classes::types
