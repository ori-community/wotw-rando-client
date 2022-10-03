#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ServicePointManager_SPKey {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ServicePointManager_SPKey__Class** type_info;
        inline app::ServicePointManager_SPKey__Class* get_class() {
            return il2cpp::get_nested_class<app::ServicePointManager_SPKey__Class>(type_info, "System.Net", "ServicePointManager", "SPKey");
        }
        inline app::ServicePointManager_SPKey* create() {
            return il2cpp::create_object<app::ServicePointManager_SPKey>(get_class());
        }
    } // namespace ServicePointManager_SPKey
} // namespace app::classes::types
