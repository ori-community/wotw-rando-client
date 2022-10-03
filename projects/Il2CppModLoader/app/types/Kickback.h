#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Kickback {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Kickback__Class** type_info;
        inline app::Kickback__Class* get_class() {
            return il2cpp::get_class<app::Kickback__Class>(type_info, "", "Kickback");
        }
        inline app::Kickback* create() {
            return il2cpp::create_object<app::Kickback>(get_class());
        }
    } // namespace Kickback
} // namespace app::classes::types
