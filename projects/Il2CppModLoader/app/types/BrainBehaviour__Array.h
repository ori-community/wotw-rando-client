#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BrainBehaviour__Array {
        namespace {
            app::BrainBehaviour__Array__Class* type_info_ref = nullptr;
        }
        app::BrainBehaviour__Array__Class** type_info = &type_info_ref;
        inline app::BrainBehaviour__Array__Class* get_class() {
            return il2cpp::get_class<app::BrainBehaviour__Array__Class>(type_info, "Moon", "BrainBehaviour[]");
        }
        inline app::BrainBehaviour__Array* create() {
            return il2cpp::create_object<app::BrainBehaviour__Array>(get_class());
        }
    } // namespace BrainBehaviour__Array
} // namespace app::classes::types
