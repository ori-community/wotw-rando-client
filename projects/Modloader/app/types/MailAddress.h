#pragma once
#include <Modloader/app/structs/MailAddress.h>
#include <Modloader/app/structs/MailAddress__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MailAddress {
        inline app::MailAddress__Class** type_info() {
            static app::MailAddress__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MailAddress__Class**)(modloader::win::memory::resolve_rva(0x0471CEC8));
            }
            return cache;
        }
        inline app::MailAddress__Class* get_class() {
            return il2cpp::get_class<app::MailAddress__Class>(type_info(), "System.Net.Mail", "MailAddress");
        }
        inline app::MailAddress* create() {
            return il2cpp::create_object<app::MailAddress>(get_class());
        }
    } // namespace MailAddress
} // namespace app::classes::types
