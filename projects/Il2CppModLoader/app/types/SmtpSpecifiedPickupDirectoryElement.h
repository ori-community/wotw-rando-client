#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SmtpSpecifiedPickupDirectoryElement {
        namespace {
            inline app::SmtpSpecifiedPickupDirectoryElement__Class* type_info_ref = nullptr;
        }
        inline app::SmtpSpecifiedPickupDirectoryElement__Class** type_info = &type_info_ref;
        inline app::SmtpSpecifiedPickupDirectoryElement__Class* get_class() {
            return il2cpp::get_class<app::SmtpSpecifiedPickupDirectoryElement__Class>(type_info, "System.Net.Configuration", "SmtpSpecifiedPickupDirectoryElement");
        }
        inline app::SmtpSpecifiedPickupDirectoryElement* create() {
            return il2cpp::create_object<app::SmtpSpecifiedPickupDirectoryElement>(get_class());
        }
    } // namespace SmtpSpecifiedPickupDirectoryElement
} // namespace app::classes::types
