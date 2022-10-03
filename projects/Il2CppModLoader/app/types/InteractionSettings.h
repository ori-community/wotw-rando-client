#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InteractionSettings {
        extern IL2CPP_MODLOADER_DLLEXPORT app::InteractionSettings__Class** type_info;
        inline app::InteractionSettings__Class* get_class() {
            return il2cpp::get_class<app::InteractionSettings__Class>(type_info, "Moon.InteractionGraph", "InteractionSettings");
        }
        inline app::InteractionSettings* create() {
            return il2cpp::create_object<app::InteractionSettings>(get_class());
        }
    } // namespace InteractionSettings
} // namespace app::classes::types
