#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SmtpNetworkElement {
        namespace {
            inline app::SmtpNetworkElement__Class* type_info_ref = nullptr;
        }
        inline app::SmtpNetworkElement__Class** type_info = &type_info_ref;
        inline app::SmtpNetworkElement__Class* get_class() {
            return il2cpp::get_class<app::SmtpNetworkElement__Class>(type_info, "System.Net.Configuration", "SmtpNetworkElement");
        }
        inline app::SmtpNetworkElement* create() {
            return il2cpp::create_object<app::SmtpNetworkElement>(get_class());
        }
    } // namespace SmtpNetworkElement
} // namespace app::classes::types
