#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GuardDecorator__Array {
        namespace {
            app::GuardDecorator__Array__Class* type_info_ref = nullptr;
        }
        app::GuardDecorator__Array__Class** type_info = &type_info_ref;
        inline app::GuardDecorator__Array__Class* get_class() {
            return il2cpp::get_class<app::GuardDecorator__Array__Class>(type_info, "Moon.BehaviourSystem", "GuardDecorator[]");
        }
        inline app::GuardDecorator__Array* create() {
            return il2cpp::create_object<app::GuardDecorator__Array>(get_class());
        }
    } // namespace GuardDecorator__Array
} // namespace app::classes::types
