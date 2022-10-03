#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace VerletEdge__Array {
        namespace {
            app::VerletEdge__Array__Class* type_info_ref = nullptr;
        }
        app::VerletEdge__Array__Class** type_info = &type_info_ref;
        inline app::VerletEdge__Array__Class* get_class() {
            return il2cpp::get_class<app::VerletEdge__Array__Class>(type_info, "", "VerletEdge[]");
        }
        inline app::VerletEdge__Array* create() {
            return il2cpp::create_object<app::VerletEdge__Array>(get_class());
        }
    } // namespace VerletEdge__Array
} // namespace app::classes::types
