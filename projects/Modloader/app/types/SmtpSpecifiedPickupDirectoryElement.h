#pragma once
#include <Modloader/app/structs/SmtpSpecifiedPickupDirectoryElement.h>
#include <Modloader/app/structs/SmtpSpecifiedPickupDirectoryElement__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SmtpSpecifiedPickupDirectoryElement {
        inline app::SmtpSpecifiedPickupDirectoryElement__Class** type_info() {
            static app::SmtpSpecifiedPickupDirectoryElement__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SmtpSpecifiedPickupDirectoryElement__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SmtpSpecifiedPickupDirectoryElement__Class* get_class() {
            return il2cpp::get_class<app::SmtpSpecifiedPickupDirectoryElement__Class>(type_info(), "System.Net.Configuration", "SmtpSpecifiedPickupDirectoryElement");
        }
        inline app::SmtpSpecifiedPickupDirectoryElement* create() {
            return il2cpp::create_object<app::SmtpSpecifiedPickupDirectoryElement>(get_class());
        }
    } // namespace SmtpSpecifiedPickupDirectoryElement
} // namespace app::classes::types
