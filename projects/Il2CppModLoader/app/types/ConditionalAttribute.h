#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ConditionalAttribute {
        namespace {
            app::ConditionalAttribute__Class* type_info_ref = nullptr;
        }
        app::ConditionalAttribute__Class** type_info = &type_info_ref;
        inline app::ConditionalAttribute__Class* get_class() {
            return il2cpp::get_class<app::ConditionalAttribute__Class>(type_info, "System.Diagnostics", "ConditionalAttribute");
        }
        inline app::ConditionalAttribute* create() {
            return il2cpp::create_object<app::ConditionalAttribute>(get_class());
        }
    } // namespace ConditionalAttribute
} // namespace app::classes::types
