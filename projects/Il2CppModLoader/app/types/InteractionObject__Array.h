#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InteractionObject__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::InteractionObject__Array__Class** type_info;
        inline app::InteractionObject__Array__Class* get_class() {
            return il2cpp::get_class<app::InteractionObject__Array__Class>(type_info, "RootMotion.FinalIK", "InteractionObject[]");
        }
        inline app::InteractionObject__Array* create() {
            return il2cpp::create_object<app::InteractionObject__Array>(get_class());
        }
    } // namespace InteractionObject__Array
} // namespace app::classes::types
