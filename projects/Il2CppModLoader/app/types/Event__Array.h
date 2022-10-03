#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Event__Array {
        namespace {
            app::Event__Array__Class* type_info_ref = nullptr;
        }
        app::Event__Array__Class** type_info = &type_info_ref;
        inline app::Event__Array__Class* get_class() {
            return il2cpp::get_class<app::Event__Array__Class>(type_info, "UnityEngine", "Event[]");
        }
        inline app::Event__Array* create() {
            return il2cpp::create_object<app::Event__Array>(get_class());
        }
    } // namespace Event__Array
} // namespace app::classes::types
