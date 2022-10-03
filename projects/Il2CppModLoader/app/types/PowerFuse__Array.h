#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PowerFuse__Array {
        namespace {
            app::PowerFuse__Array__Class* type_info_ref = nullptr;
        }
        app::PowerFuse__Array__Class** type_info = &type_info_ref;
        inline app::PowerFuse__Array__Class* get_class() {
            return il2cpp::get_class<app::PowerFuse__Array__Class>(type_info, "", "PowerFuse[]");
        }
        inline app::PowerFuse__Array* create() {
            return il2cpp::create_object<app::PowerFuse__Array>(get_class());
        }
    } // namespace PowerFuse__Array
} // namespace app::classes::types
