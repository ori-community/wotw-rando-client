#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PathNode__Array {
        namespace {
            app::PathNode__Array__Class* type_info_ref = nullptr;
        }
        app::PathNode__Array__Class** type_info = &type_info_ref;
        inline app::PathNode__Array__Class* get_class() {
            return il2cpp::get_class<app::PathNode__Array__Class>(type_info, "", "PathNode[]");
        }
        inline app::PathNode__Array* create() {
            return il2cpp::create_object<app::PathNode__Array>(get_class());
        }
    } // namespace PathNode__Array
} // namespace app::classes::types
