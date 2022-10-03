#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TransitionManager__Array {
        namespace {
            app::TransitionManager__Array__Class* type_info_ref = nullptr;
        }
        app::TransitionManager__Array__Class** type_info = &type_info_ref;
        inline app::TransitionManager__Array__Class* get_class() {
            return il2cpp::get_class<app::TransitionManager__Array__Class>(type_info, "Moon.InteractionGraph", "TransitionManager[]");
        }
        inline app::TransitionManager__Array* create() {
            return il2cpp::create_object<app::TransitionManager__Array>(get_class());
        }
    } // namespace TransitionManager__Array
} // namespace app::classes::types
