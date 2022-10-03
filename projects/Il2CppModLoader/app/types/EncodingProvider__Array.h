#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EncodingProvider__Array {
        namespace {
            app::EncodingProvider__Array__Class* type_info_ref = nullptr;
        }
        app::EncodingProvider__Array__Class** type_info = &type_info_ref;
        inline app::EncodingProvider__Array__Class* get_class() {
            return il2cpp::get_class<app::EncodingProvider__Array__Class>(type_info, "System.Text", "EncodingProvider[]");
        }
        inline app::EncodingProvider__Array* create() {
            return il2cpp::create_object<app::EncodingProvider__Array>(get_class());
        }
    } // namespace EncodingProvider__Array
} // namespace app::classes::types
