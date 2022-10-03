#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InputCacheManager {
        extern IL2CPP_MODLOADER_DLLEXPORT app::InputCacheManager__Class** type_info;
        inline app::InputCacheManager__Class* get_class() {
            return il2cpp::get_class<app::InputCacheManager__Class>(type_info, "SmartInput", "InputCacheManager");
        }
        inline app::InputCacheManager* create() {
            return il2cpp::create_object<app::InputCacheManager>(get_class());
        }
    } // namespace InputCacheManager
} // namespace app::classes::types
