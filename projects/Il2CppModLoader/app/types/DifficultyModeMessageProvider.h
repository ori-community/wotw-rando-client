#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DifficultyModeMessageProvider {
        namespace {
            app::DifficultyModeMessageProvider__Class* type_info_ref = nullptr;
        }
        app::DifficultyModeMessageProvider__Class** type_info = &type_info_ref;
        inline app::DifficultyModeMessageProvider__Class* get_class() {
            return il2cpp::get_class<app::DifficultyModeMessageProvider__Class>(type_info, "", "DifficultyModeMessageProvider");
        }
        inline app::DifficultyModeMessageProvider* create() {
            return il2cpp::create_object<app::DifficultyModeMessageProvider>(get_class());
        }
    } // namespace DifficultyModeMessageProvider
} // namespace app::classes::types
