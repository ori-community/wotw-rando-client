#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UIntPtr__Array {
        namespace {
            app::UIntPtr__Array__Class* type_info_ref = nullptr;
        }
        app::UIntPtr__Array__Class** type_info = &type_info_ref;
        inline app::UIntPtr__Array__Class* get_class() {
            return il2cpp::get_class<app::UIntPtr__Array__Class>(type_info, "System", "UIntPtr[]");
        }
        inline app::UIntPtr__Array* create() {
            return il2cpp::create_object<app::UIntPtr__Array>(get_class());
        }
    } // namespace UIntPtr__Array
} // namespace app::classes::types
