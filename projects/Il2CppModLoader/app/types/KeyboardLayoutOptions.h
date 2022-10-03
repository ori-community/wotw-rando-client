#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace KeyboardLayoutOptions {
        extern IL2CPP_MODLOADER_DLLEXPORT app::KeyboardLayoutOptions__Class** type_info;
        inline app::KeyboardLayoutOptions__Class* get_class() {
            return il2cpp::get_class<app::KeyboardLayoutOptions__Class>(type_info, "", "KeyboardLayoutOptions");
        }
        inline app::KeyboardLayoutOptions* create() {
            return il2cpp::create_object<app::KeyboardLayoutOptions>(get_class());
        }
    } // namespace KeyboardLayoutOptions
} // namespace app::classes::types
