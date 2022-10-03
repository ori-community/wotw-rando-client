#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UWPIdentityUI {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UWPIdentityUI__Class** type_info;
        inline app::UWPIdentityUI__Class* get_class() {
            return il2cpp::get_class<app::UWPIdentityUI__Class>(type_info, "", "UWPIdentityUI");
        }
        inline app::UWPIdentityUI* create() {
            return il2cpp::create_object<app::UWPIdentityUI>(get_class());
        }
    } // namespace UWPIdentityUI
} // namespace app::classes::types
