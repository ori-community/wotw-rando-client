#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Grounding_Leg {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Grounding_Leg__Class** type_info;
        inline app::Grounding_Leg__Class* get_class() {
            return il2cpp::get_nested_class<app::Grounding_Leg__Class>(type_info, "RootMotion.FinalIK", "Grounding", "Leg");
        }
        inline app::Grounding_Leg* create() {
            return il2cpp::create_object<app::Grounding_Leg>(get_class());
        }
        inline app::Grounding_Leg__Array* create_array(int size) {
            return il2cpp::array_new<app::Grounding_Leg__Array>(get_class(), size);
        }
    } // namespace Grounding_Leg
} // namespace app::classes::types
