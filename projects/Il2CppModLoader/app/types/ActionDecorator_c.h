#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ActionDecorator_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ActionDecorator_c__Class** type_info;
        inline app::ActionDecorator_c__Class* get_class() {
            return il2cpp::get_nested_class<app::ActionDecorator_c__Class>(type_info, "Moon.BehaviourSystem", "ActionDecorator", "<>c");
        }
        inline app::ActionDecorator_c* create() {
            return il2cpp::create_object<app::ActionDecorator_c>(get_class());
        }
    } // namespace ActionDecorator_c
} // namespace app::classes::types
