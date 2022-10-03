#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SecuritySafeCriticalAttribute {
        namespace {
            app::SecuritySafeCriticalAttribute__Class* type_info_ref = nullptr;
        }
        app::SecuritySafeCriticalAttribute__Class** type_info = &type_info_ref;
        inline app::SecuritySafeCriticalAttribute__Class* get_class() {
            return il2cpp::get_class<app::SecuritySafeCriticalAttribute__Class>(type_info, "System.Security", "SecuritySafeCriticalAttribute");
        }
        inline app::SecuritySafeCriticalAttribute* create() {
            return il2cpp::create_object<app::SecuritySafeCriticalAttribute>(get_class());
        }
    } // namespace SecuritySafeCriticalAttribute
} // namespace app::classes::types
