#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CartFlip {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CartFlip__Class** type_info;
        inline app::CartFlip__Class* get_class() {
            return il2cpp::get_class<app::CartFlip__Class>(type_info, "", "CartFlip");
        }
        inline app::CartFlip* create() {
            return il2cpp::create_object<app::CartFlip>(get_class());
        }
    } // namespace CartFlip
} // namespace app::classes::types
