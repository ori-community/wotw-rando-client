#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Grounding_Leg__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Grounding_Leg__Array__Class** type_info;
        inline app::Grounding_Leg__Array__Class* get_class() {
            return il2cpp::get_class<app::Grounding_Leg__Array__Class>(type_info, "RootMotion.FinalIK", "Grounding+Leg[]");
        }
        inline app::Grounding_Leg__Array* create() {
            return il2cpp::create_object<app::Grounding_Leg__Array>(get_class());
        }
    } // namespace Grounding_Leg__Array
} // namespace app::classes::types
