#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DestroyManager {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DestroyManager__Class** type_info;
        inline app::DestroyManager__Class* get_class() {
            return il2cpp::get_class<app::DestroyManager__Class>(type_info, "", "DestroyManager");
        }
        inline app::DestroyManager* create() {
            return il2cpp::create_object<app::DestroyManager>(get_class());
        }
    } // namespace DestroyManager
} // namespace app::classes::types
