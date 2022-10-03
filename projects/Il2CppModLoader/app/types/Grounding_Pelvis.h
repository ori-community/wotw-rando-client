#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Grounding_Pelvis {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Grounding_Pelvis__Class** type_info;
        inline app::Grounding_Pelvis__Class* get_class() {
            return il2cpp::get_nested_class<app::Grounding_Pelvis__Class>(type_info, "RootMotion.FinalIK", "Grounding", "Pelvis");
        }
        inline app::Grounding_Pelvis* create() {
            return il2cpp::create_object<app::Grounding_Pelvis>(get_class());
        }
    } // namespace Grounding_Pelvis
} // namespace app::classes::types
