#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SecuritySafeCriticalAttribute__Class.h>
#include <Modloader/app/structs/SecuritySafeCriticalAttribute.h>

namespace app::classes::types {
    namespace SecuritySafeCriticalAttribute {
        namespace {
            inline app::SecuritySafeCriticalAttribute__Class* type_info_ref = nullptr;
        }
        inline app::SecuritySafeCriticalAttribute__Class** type_info = &type_info_ref;
        inline app::SecuritySafeCriticalAttribute__Class* get_class() {
            return il2cpp::get_class<app::SecuritySafeCriticalAttribute__Class>(type_info, "System.Security", "SecuritySafeCriticalAttribute");
        }
        inline app::SecuritySafeCriticalAttribute* create() {
            return il2cpp::create_object<app::SecuritySafeCriticalAttribute>(get_class());
        }
    } // namespace SecuritySafeCriticalAttribute
} // namespace app::classes::types
