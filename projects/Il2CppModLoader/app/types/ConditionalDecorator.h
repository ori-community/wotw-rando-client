#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ConditionalDecorator {
        namespace {
            app::ConditionalDecorator__Class* type_info_ref = nullptr;
        }
        app::ConditionalDecorator__Class** type_info = &type_info_ref;
        inline app::ConditionalDecorator__Class* get_class() {
            return il2cpp::get_class<app::ConditionalDecorator__Class>(type_info, "Moon.BehaviourSystem", "ConditionalDecorator");
        }
        inline app::ConditionalDecorator* create() {
            return il2cpp::create_object<app::ConditionalDecorator>(get_class());
        }
    } // namespace ConditionalDecorator
} // namespace app::classes::types
