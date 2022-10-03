#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ArrayList {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ArrayList__Class** type_info;
        inline app::ArrayList__Class* get_class() {
            return il2cpp::get_class<app::ArrayList__Class>(type_info, "System.Collections", "ArrayList");
        }
        inline app::ArrayList* create() {
            return il2cpp::create_object<app::ArrayList>(get_class());
        }
    } // namespace ArrayList
} // namespace app::classes::types
