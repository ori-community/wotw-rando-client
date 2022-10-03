#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IInputTransition__Array {
        namespace {
            app::IInputTransition__Array__Class* type_info_ref = nullptr;
        }
        app::IInputTransition__Array__Class** type_info = &type_info_ref;
        inline app::IInputTransition__Array__Class* get_class() {
            return il2cpp::get_class<app::IInputTransition__Array__Class>(type_info, "Moon.InteractionGraph", "IInputTransition[]");
        }
        inline app::IInputTransition__Array* create() {
            return il2cpp::create_object<app::IInputTransition__Array>(get_class());
        }
    } // namespace IInputTransition__Array
} // namespace app::classes::types
