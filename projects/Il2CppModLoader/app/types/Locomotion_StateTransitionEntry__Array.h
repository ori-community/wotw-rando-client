#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Locomotion_StateTransitionEntry__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Locomotion_StateTransitionEntry__Array__Class** type_info;
        inline app::Locomotion_StateTransitionEntry__Array__Class* get_class() {
            return il2cpp::get_class<app::Locomotion_StateTransitionEntry__Array__Class>(type_info, "Moon", "Locomotion+StateTransitionEntry[]");
        }
        inline app::Locomotion_StateTransitionEntry__Array* create() {
            return il2cpp::create_object<app::Locomotion_StateTransitionEntry__Array>(get_class());
        }
    } // namespace Locomotion_StateTransitionEntry__Array
} // namespace app::classes::types
