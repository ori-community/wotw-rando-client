#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BloomSettings {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BloomSettings__Class** type_info;
        inline app::BloomSettings__Class* get_class() {
            return il2cpp::get_class<app::BloomSettings__Class>(type_info, "", "BloomSettings");
        }
        inline app::BloomSettings* create() {
            return il2cpp::create_object<app::BloomSettings>(get_class());
        }
    } // namespace BloomSettings
} // namespace app::classes::types
