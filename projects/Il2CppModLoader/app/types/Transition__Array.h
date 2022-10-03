#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Transition__Array {
        namespace {
            app::Transition__Array__Class* type_info_ref = nullptr;
        }
        app::Transition__Array__Class** type_info = &type_info_ref;
        inline app::Transition__Array__Class* get_class() {
            return il2cpp::get_class<app::Transition__Array__Class>(type_info, "Moon.InteractionGraph", "Transition[]");
        }
        inline app::Transition__Array* create() {
            return il2cpp::create_object<app::Transition__Array>(get_class());
        }
    } // namespace Transition__Array
} // namespace app::classes::types
