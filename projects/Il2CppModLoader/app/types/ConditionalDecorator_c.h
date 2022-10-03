#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ConditionalDecorator_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ConditionalDecorator_c__Class** type_info;
        inline app::ConditionalDecorator_c__Class* get_class() {
            return il2cpp::get_nested_class<app::ConditionalDecorator_c__Class>(type_info, "Moon.BehaviourSystem", "ConditionalDecorator", "<>c");
        }
        inline app::ConditionalDecorator_c* create() {
            return il2cpp::create_object<app::ConditionalDecorator_c>(get_class());
        }
    } // namespace ConditionalDecorator_c
} // namespace app::classes::types
