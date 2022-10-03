#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AmbienceListener {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AmbienceListener__Class** type_info;
        inline app::AmbienceListener__Class* get_class() {
            return il2cpp::get_class<app::AmbienceListener__Class>(type_info, "", "AmbienceListener");
        }
        inline app::AmbienceListener* create() {
            return il2cpp::create_object<app::AmbienceListener>(get_class());
        }
    } // namespace AmbienceListener
} // namespace app::classes::types
