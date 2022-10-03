#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AVProWindowsMedia {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AVProWindowsMedia__Class** type_info;
        inline app::AVProWindowsMedia__Class* get_class() {
            return il2cpp::get_class<app::AVProWindowsMedia__Class>(type_info, "", "AVProWindowsMedia");
        }
        inline app::AVProWindowsMedia* create() {
            return il2cpp::create_object<app::AVProWindowsMedia>(get_class());
        }
    } // namespace AVProWindowsMedia
} // namespace app::classes::types
