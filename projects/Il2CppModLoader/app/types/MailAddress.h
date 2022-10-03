#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MailAddress {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MailAddress__Class** type_info;
        inline app::MailAddress__Class* get_class() {
            return il2cpp::get_class<app::MailAddress__Class>(type_info, "System.Net.Mail", "MailAddress");
        }
        inline app::MailAddress* create() {
            return il2cpp::create_object<app::MailAddress>(get_class());
        }
    } // namespace MailAddress
} // namespace app::classes::types
