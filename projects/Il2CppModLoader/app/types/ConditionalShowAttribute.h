#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ConditionalShowAttribute {
        namespace {
            app::ConditionalShowAttribute__Class* type_info_ref = nullptr;
        }
        app::ConditionalShowAttribute__Class** type_info = &type_info_ref;
        inline app::ConditionalShowAttribute__Class* get_class() {
            return il2cpp::get_class<app::ConditionalShowAttribute__Class>(type_info, "", "ConditionalShowAttribute");
        }
        inline app::ConditionalShowAttribute* create() {
            return il2cpp::create_object<app::ConditionalShowAttribute>(get_class());
        }
    } // namespace ConditionalShowAttribute
} // namespace app::classes::types
