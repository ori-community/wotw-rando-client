#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LimitedLifetime__Array {
        namespace {
            app::LimitedLifetime__Array__Class* type_info_ref = nullptr;
        }
        app::LimitedLifetime__Array__Class** type_info = &type_info_ref;
        inline app::LimitedLifetime__Array__Class* get_class() {
            return il2cpp::get_class<app::LimitedLifetime__Array__Class>(type_info, "", "LimitedLifetime[]");
        }
        inline app::LimitedLifetime__Array* create() {
            return il2cpp::create_object<app::LimitedLifetime__Array>(get_class());
        }
    } // namespace LimitedLifetime__Array
} // namespace app::classes::types
