#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SuspensionManager {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SuspensionManager__Class** type_info;
        inline app::SuspensionManager__Class* get_class() {
            return il2cpp::get_class<app::SuspensionManager__Class>(type_info, "Moon", "SuspensionManager");
        }
        inline app::SuspensionManager* create() {
            return il2cpp::create_object<app::SuspensionManager>(get_class());
        }
    } // namespace SuspensionManager
} // namespace app::classes::types
