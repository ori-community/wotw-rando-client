#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IRectProvider__Array {
        namespace {
            app::IRectProvider__Array__Class* type_info_ref = nullptr;
        }
        app::IRectProvider__Array__Class** type_info = &type_info_ref;
        inline app::IRectProvider__Array__Class* get_class() {
            return il2cpp::get_class<app::IRectProvider__Array__Class>(type_info, "Moon", "IRectProvider[]");
        }
        inline app::IRectProvider__Array* create() {
            return il2cpp::create_object<app::IRectProvider__Array>(get_class());
        }
    } // namespace IRectProvider__Array
} // namespace app::classes::types
