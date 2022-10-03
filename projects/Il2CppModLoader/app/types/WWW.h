#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WWW {
        extern IL2CPP_MODLOADER_DLLEXPORT app::WWW__Class** type_info;
        inline app::WWW__Class* get_class() {
            return il2cpp::get_class<app::WWW__Class>(type_info, "UnityEngine", "WWW");
        }
        inline app::WWW* create() {
            return il2cpp::create_object<app::WWW>(get_class());
        }
    } // namespace WWW
} // namespace app::classes::types
