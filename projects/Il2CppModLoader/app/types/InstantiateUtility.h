#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InstantiateUtility {
        extern IL2CPP_MODLOADER_DLLEXPORT app::InstantiateUtility__Class** type_info;
        inline app::InstantiateUtility__Class* get_class() {
            return il2cpp::get_class<app::InstantiateUtility__Class>(type_info, "", "InstantiateUtility");
        }
        inline app::InstantiateUtility* create() {
            return il2cpp::create_object<app::InstantiateUtility>(get_class());
        }
    } // namespace InstantiateUtility
} // namespace app::classes::types
