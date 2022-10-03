#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WaitForSaveGameLogic_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::WaitForSaveGameLogic_c__Class** type_info;
        inline app::WaitForSaveGameLogic_c__Class* get_class() {
            return il2cpp::get_nested_class<app::WaitForSaveGameLogic_c__Class>(type_info, "", "WaitForSaveGameLogic", "<>c");
        }
        inline app::WaitForSaveGameLogic_c* create() {
            return il2cpp::create_object<app::WaitForSaveGameLogic_c>(get_class());
        }
    } // namespace WaitForSaveGameLogic_c
} // namespace app::classes::types
