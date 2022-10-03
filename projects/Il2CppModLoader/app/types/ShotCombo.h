#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShotCombo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShotCombo__Class** type_info;
        inline app::ShotCombo__Class* get_class() {
            return il2cpp::get_class<app::ShotCombo__Class>(type_info, "", "ShotCombo");
        }
        inline app::ShotCombo* create() {
            return il2cpp::create_object<app::ShotCombo>(get_class());
        }
    } // namespace ShotCombo
} // namespace app::classes::types
