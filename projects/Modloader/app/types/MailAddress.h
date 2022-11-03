#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MailAddress {
        inline app::MailAddress__Class** type_info = (app::MailAddress__Class**)(modloader::win::memory::resolve_rva(0x0471CEC8));
        inline app::MailAddress__Class* get_class() {
            return il2cpp::get_class<app::MailAddress__Class>(type_info, "System.Net.Mail", "MailAddress");
        }
        inline app::MailAddress* create() {
            return il2cpp::create_object<app::MailAddress>(get_class());
        }
    } // namespace MailAddress
} // namespace app::classes::types
