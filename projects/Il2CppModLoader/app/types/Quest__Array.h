#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Quest__Array {
        namespace {
            app::Quest__Array__Class* type_info_ref = nullptr;
        }
        app::Quest__Array__Class** type_info = &type_info_ref;
        inline app::Quest__Array__Class* get_class() {
            return il2cpp::get_class<app::Quest__Array__Class>(type_info, "", "Quest[]");
        }
        inline app::Quest__Array* create() {
            return il2cpp::create_object<app::Quest__Array>(get_class());
        }
    } // namespace Quest__Array
} // namespace app::classes::types
