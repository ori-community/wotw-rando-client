#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SmtpSpecifiedPickupDirectoryElement__Class.h>
#include <Modloader/app/structs/SmtpSpecifiedPickupDirectoryElement.h>

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
