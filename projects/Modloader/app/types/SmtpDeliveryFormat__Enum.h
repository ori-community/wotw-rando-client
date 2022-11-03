#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SmtpDeliveryFormat__Enum {
        namespace {
            inline app::SmtpDeliveryFormat__Enum__Class* type_info_ref = nullptr;
        }
        inline app::SmtpDeliveryFormat__Enum__Class** type_info = &type_info_ref;
        inline app::SmtpDeliveryFormat__Enum__Class* get_class() {
            return il2cpp::get_class<app::SmtpDeliveryFormat__Enum__Class>(type_info, "System.Net.Mail", "SmtpDeliveryFormat");
        }
        inline app::SmtpDeliveryFormat__Enum* create() {
            return il2cpp::create_object<app::SmtpDeliveryFormat__Enum>(get_class());
        }
    } // namespace SmtpDeliveryFormat__Enum
} // namespace app::classes::types
