#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Water {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Water__Class** type_info;
        inline app::Water__Class* get_class() {
            return il2cpp::get_class<app::Water__Class>(type_info, "", "Water");
        }
        inline app::Water* create() {
            return il2cpp::create_object<app::Water>(get_class());
        }
    } // namespace Water
} // namespace app::classes::types
