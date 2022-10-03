#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ScenesManager {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ScenesManager__Class** type_info;
        inline app::ScenesManager__Class* get_class() {
            return il2cpp::get_class<app::ScenesManager__Class>(type_info, "", "ScenesManager");
        }
        inline app::ScenesManager* create() {
            return il2cpp::create_object<app::ScenesManager>(get_class());
        }
    } // namespace ScenesManager
} // namespace app::classes::types
