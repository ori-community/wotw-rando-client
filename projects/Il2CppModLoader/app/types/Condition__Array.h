#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Condition__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Condition__Array__Class** type_info;
        inline app::Condition__Array__Class* get_class() {
            return il2cpp::get_class<app::Condition__Array__Class>(type_info, "Moon.BehaviourSystem", "Condition[]");
        }
        inline app::Condition__Array* create() {
            return il2cpp::create_object<app::Condition__Array>(get_class());
        }
    } // namespace Condition__Array
} // namespace app::classes::types
