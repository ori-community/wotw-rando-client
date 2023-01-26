#pragma once
#include <Modloader/app/structs/SecuritySafeCriticalAttribute.h>
#include <Modloader/app/structs/SecuritySafeCriticalAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SecuritySafeCriticalAttribute {
        inline app::SecuritySafeCriticalAttribute__Class** type_info() {
            static app::SecuritySafeCriticalAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SecuritySafeCriticalAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SecuritySafeCriticalAttribute__Class* get_class() {
            return il2cpp::get_class<app::SecuritySafeCriticalAttribute__Class>(type_info(), "System.Security", "SecuritySafeCriticalAttribute");
        }
        inline app::SecuritySafeCriticalAttribute* create() {
            return il2cpp::create_object<app::SecuritySafeCriticalAttribute>(get_class());
        }
    } // namespace SecuritySafeCriticalAttribute
} // namespace app::classes::types
