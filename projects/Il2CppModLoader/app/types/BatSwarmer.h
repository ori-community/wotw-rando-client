#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BatSwarmer {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BatSwarmer__Class** type_info;
        inline app::BatSwarmer__Class* get_class() {
            return il2cpp::get_class<app::BatSwarmer__Class>(type_info, "", "BatSwarmer");
        }
        inline app::BatSwarmer* create() {
            return il2cpp::create_object<app::BatSwarmer>(get_class());
        }
    } // namespace BatSwarmer
} // namespace app::classes::types
