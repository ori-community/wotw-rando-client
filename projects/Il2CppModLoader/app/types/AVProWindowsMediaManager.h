#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AVProWindowsMediaManager {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AVProWindowsMediaManager__Class** type_info;
        inline app::AVProWindowsMediaManager__Class* get_class() {
            return il2cpp::get_class<app::AVProWindowsMediaManager__Class>(type_info, "", "AVProWindowsMediaManager");
        }
        inline app::AVProWindowsMediaManager* create() {
            return il2cpp::create_object<app::AVProWindowsMediaManager>(get_class());
        }
    } // namespace AVProWindowsMediaManager
} // namespace app::classes::types
