#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace OptionsScreenTextsManager {
        extern IL2CPP_MODLOADER_DLLEXPORT app::OptionsScreenTextsManager__Class** type_info;
        inline app::OptionsScreenTextsManager__Class* get_class() {
            return il2cpp::get_class<app::OptionsScreenTextsManager__Class>(type_info, "", "OptionsScreenTextsManager");
        }
        inline app::OptionsScreenTextsManager* create() {
            return il2cpp::create_object<app::OptionsScreenTextsManager>(get_class());
        }
    } // namespace OptionsScreenTextsManager
} // namespace app::classes::types
