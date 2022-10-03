#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Int2__Array {
        namespace {
            app::Int2__Array__Class* type_info_ref = nullptr;
        }
        app::Int2__Array__Class** type_info = &type_info_ref;
        inline app::Int2__Array__Class* get_class() {
            return il2cpp::get_class<app::Int2__Array__Class>(type_info, "Swing", "Int2[]");
        }
        inline app::Int2__Array* create() {
            return il2cpp::create_object<app::Int2__Array>(get_class());
        }
    } // namespace Int2__Array
} // namespace app::classes::types
