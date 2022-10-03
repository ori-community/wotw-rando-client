#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CooldownDecorator {
        namespace {
            app::CooldownDecorator__Class* type_info_ref = nullptr;
        }
        app::CooldownDecorator__Class** type_info = &type_info_ref;
        inline app::CooldownDecorator__Class* get_class() {
            return il2cpp::get_class<app::CooldownDecorator__Class>(type_info, "Moon.BehaviourSystem", "CooldownDecorator");
        }
        inline app::CooldownDecorator* create() {
            return il2cpp::create_object<app::CooldownDecorator>(get_class());
        }
        inline app::CooldownDecorator__Array* create_array(int size) {
            return il2cpp::array_new<app::CooldownDecorator__Array>(get_class(), size);
        }
    } // namespace CooldownDecorator
} // namespace app::classes::types
