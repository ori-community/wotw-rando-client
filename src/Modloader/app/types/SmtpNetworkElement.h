#pragma once
#include <Modloader/app/structs/SmtpNetworkElement.h>
#include <Modloader/app/structs/SmtpNetworkElement__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SmtpNetworkElement {
        inline app::SmtpNetworkElement__Class** type_info() {
            static app::SmtpNetworkElement__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SmtpNetworkElement__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SmtpNetworkElement__Class* get_class() {
            return il2cpp::get_class<app::SmtpNetworkElement__Class>(type_info(), "System.Net.Configuration", "SmtpNetworkElement");
        }
        inline app::SmtpNetworkElement* create() {
            return il2cpp::create_object<app::SmtpNetworkElement>(get_class());
        }
    } // namespace SmtpNetworkElement
} // namespace app::classes::types
