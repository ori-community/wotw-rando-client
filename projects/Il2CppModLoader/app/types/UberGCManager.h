#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberGCManager {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UberGCManager__Class** type_info;
        inline app::UberGCManager__Class* get_class() {
            return il2cpp::get_class<app::UberGCManager__Class>(type_info, "", "UberGCManager");
        }
        inline app::UberGCManager* create() {
            return il2cpp::create_object<app::UberGCManager>(get_class());
        }
    } // namespace UberGCManager
} // namespace app::classes::types
