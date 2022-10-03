#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ConfiguredTaskAwaitable {
        namespace {
            app::ConfiguredTaskAwaitable__Class* type_info_ref = nullptr;
        }
        app::ConfiguredTaskAwaitable__Class** type_info = &type_info_ref;
        inline app::ConfiguredTaskAwaitable__Class* get_class() {
            return il2cpp::get_class<app::ConfiguredTaskAwaitable__Class>(type_info, "System.Runtime.CompilerServices", "ConfiguredTaskAwaitable");
        }
        inline app::ConfiguredTaskAwaitable* create() {
            return il2cpp::create_object<app::ConfiguredTaskAwaitable>(get_class());
        }
        inline app::ConfiguredTaskAwaitable__Boxed* box(app::ConfiguredTaskAwaitable value) {
            return il2cpp::box_value<app::ConfiguredTaskAwaitable__Boxed>(get_class(), value);
        }
    } // namespace ConfiguredTaskAwaitable
} // namespace app::classes::types
