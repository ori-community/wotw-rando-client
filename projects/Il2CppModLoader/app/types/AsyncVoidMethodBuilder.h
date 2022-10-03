#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AsyncVoidMethodBuilder {
        namespace {
            app::AsyncVoidMethodBuilder__Class* type_info_ref = nullptr;
        }
        app::AsyncVoidMethodBuilder__Class** type_info = &type_info_ref;
        inline app::AsyncVoidMethodBuilder__Class* get_class() {
            return il2cpp::get_class<app::AsyncVoidMethodBuilder__Class>(type_info, "System.Runtime.CompilerServices", "AsyncVoidMethodBuilder");
        }
        inline app::AsyncVoidMethodBuilder* create() {
            return il2cpp::create_object<app::AsyncVoidMethodBuilder>(get_class());
        }
        inline app::AsyncVoidMethodBuilder__Boxed* box(app::AsyncVoidMethodBuilder value) {
            return il2cpp::box_value<app::AsyncVoidMethodBuilder__Boxed>(get_class(), value);
        }
    } // namespace AsyncVoidMethodBuilder
} // namespace app::classes::types
