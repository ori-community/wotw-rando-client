#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EntityTask_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EntityTask_c__Class** type_info;
        inline app::EntityTask_c__Class* get_class() {
            return il2cpp::get_nested_class<app::EntityTask_c__Class>(type_info, "Moon.BehaviourSystem", "EntityTask", "<>c");
        }
        inline app::EntityTask_c* create() {
            return il2cpp::create_object<app::EntityTask_c>(get_class());
        }
    } // namespace EntityTask_c
} // namespace app::classes::types
