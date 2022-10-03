#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberPoolManager {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UberPoolManager__Class** type_info;
        inline app::UberPoolManager__Class* get_class() {
            return il2cpp::get_class<app::UberPoolManager__Class>(type_info, "", "UberPoolManager");
        }
        inline app::UberPoolManager* create() {
            return il2cpp::create_object<app::UberPoolManager>(get_class());
        }
    } // namespace UberPoolManager
} // namespace app::classes::types
