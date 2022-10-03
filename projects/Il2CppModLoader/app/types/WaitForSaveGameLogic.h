#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WaitForSaveGameLogic {
        extern IL2CPP_MODLOADER_DLLEXPORT app::WaitForSaveGameLogic__Class** type_info;
        inline app::WaitForSaveGameLogic__Class* get_class() {
            return il2cpp::get_class<app::WaitForSaveGameLogic__Class>(type_info, "", "WaitForSaveGameLogic");
        }
        inline app::WaitForSaveGameLogic* create() {
            return il2cpp::create_object<app::WaitForSaveGameLogic>(get_class());
        }
    } // namespace WaitForSaveGameLogic
} // namespace app::classes::types
