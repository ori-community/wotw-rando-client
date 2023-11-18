#pragma once
#include <Modloader/app/structs/SecurityCriticalAttribute.h>
#include <Modloader/app/structs/SecurityCriticalAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SecurityCriticalAttribute {
        inline app::SecurityCriticalAttribute__Class** type_info() {
            static app::SecurityCriticalAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SecurityCriticalAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SecurityCriticalAttribute__Class* get_class() {
            return il2cpp::get_class<app::SecurityCriticalAttribute__Class>(type_info(), "System.Security", "SecurityCriticalAttribute");
        }
        inline app::SecurityCriticalAttribute* create() {
            return il2cpp::create_object<app::SecurityCriticalAttribute>(get_class());
        }
    } // namespace SecurityCriticalAttribute
} // namespace app::classes::types
