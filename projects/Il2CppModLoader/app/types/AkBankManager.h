#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AkBankManager {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AkBankManager__Class** type_info;
        inline app::AkBankManager__Class* get_class() {
            return il2cpp::get_class<app::AkBankManager__Class>(type_info, "", "AkBankManager");
        }
        inline app::AkBankManager* create() {
            return il2cpp::create_object<app::AkBankManager>(get_class());
        }
    } // namespace AkBankManager
} // namespace app::classes::types
