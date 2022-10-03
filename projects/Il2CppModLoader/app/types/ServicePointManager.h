#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ServicePointManager {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ServicePointManager__Class** type_info;
        inline app::ServicePointManager__Class* get_class() {
            return il2cpp::get_class<app::ServicePointManager__Class>(type_info, "System.Net", "ServicePointManager");
        }
        inline app::ServicePointManager* create() {
            return il2cpp::create_object<app::ServicePointManager>(get_class());
        }
    } // namespace ServicePointManager
} // namespace app::classes::types
