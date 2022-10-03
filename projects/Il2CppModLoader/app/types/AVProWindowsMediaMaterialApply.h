#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AVProWindowsMediaMaterialApply {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AVProWindowsMediaMaterialApply__Class** type_info;
        inline app::AVProWindowsMediaMaterialApply__Class* get_class() {
            return il2cpp::get_class<app::AVProWindowsMediaMaterialApply__Class>(type_info, "", "AVProWindowsMediaMaterialApply");
        }
        inline app::AVProWindowsMediaMaterialApply* create() {
            return il2cpp::create_object<app::AVProWindowsMediaMaterialApply>(get_class());
        }
    } // namespace AVProWindowsMediaMaterialApply
} // namespace app::classes::types
