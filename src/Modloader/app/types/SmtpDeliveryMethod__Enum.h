#pragma once
#include <Modloader/app/structs/SmtpDeliveryMethod__Enum.h>
#include <Modloader/app/structs/SmtpDeliveryMethod__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SmtpDeliveryMethod__Enum {
        inline app::SmtpDeliveryMethod__Enum__Class** type_info() {
            static app::SmtpDeliveryMethod__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SmtpDeliveryMethod__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SmtpDeliveryMethod__Enum__Class* get_class() {
            return il2cpp::get_class<app::SmtpDeliveryMethod__Enum__Class>(type_info(), "System.Net.Mail", "SmtpDeliveryMethod");
        }
        inline app::SmtpDeliveryMethod__Enum* create() {
            return il2cpp::create_object<app::SmtpDeliveryMethod__Enum>(get_class());
        }
    } // namespace SmtpDeliveryMethod__Enum
} // namespace app::classes::types
