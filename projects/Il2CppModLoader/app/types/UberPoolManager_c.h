#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberPoolManager_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UberPoolManager_c__Class** type_info;
        inline app::UberPoolManager_c__Class* get_class() {
            return il2cpp::get_nested_class<app::UberPoolManager_c__Class>(type_info, "", "UberPoolManager", "<>c");
        }
        inline app::UberPoolManager_c* create() {
            return il2cpp::create_object<app::UberPoolManager_c>(get_class());
        }
    } // namespace UberPoolManager_c
} // namespace app::classes::types
