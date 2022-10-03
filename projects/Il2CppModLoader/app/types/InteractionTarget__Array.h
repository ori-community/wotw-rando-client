#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InteractionTarget__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::InteractionTarget__Array__Class** type_info;
        inline app::InteractionTarget__Array__Class* get_class() {
            return il2cpp::get_class<app::InteractionTarget__Array__Class>(type_info, "RootMotion.FinalIK", "InteractionTarget[]");
        }
        inline app::InteractionTarget__Array* create() {
            return il2cpp::create_object<app::InteractionTarget__Array>(get_class());
        }
    } // namespace InteractionTarget__Array
} // namespace app::classes::types
