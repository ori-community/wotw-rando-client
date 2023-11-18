#pragma once
#include <Modloader/app/structs/SmtpDeliveryFormat__Enum.h>
#include <Modloader/app/structs/SmtpDeliveryFormat__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SmtpDeliveryFormat__Enum {
        inline app::SmtpDeliveryFormat__Enum__Class** type_info() {
            static app::SmtpDeliveryFormat__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SmtpDeliveryFormat__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SmtpDeliveryFormat__Enum__Class* get_class() {
            return il2cpp::get_class<app::SmtpDeliveryFormat__Enum__Class>(type_info(), "System.Net.Mail", "SmtpDeliveryFormat");
        }
        inline app::SmtpDeliveryFormat__Enum* create() {
            return il2cpp::create_object<app::SmtpDeliveryFormat__Enum>(get_class());
        }
    } // namespace SmtpDeliveryFormat__Enum
} // namespace app::classes::types
