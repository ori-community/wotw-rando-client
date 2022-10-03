#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Grounding {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Grounding__Class** type_info;
        inline app::Grounding__Class* get_class() {
            return il2cpp::get_class<app::Grounding__Class>(type_info, "RootMotion.FinalIK", "Grounding");
        }
        inline app::Grounding* create() {
            return il2cpp::create_object<app::Grounding>(get_class());
        }
    } // namespace Grounding
} // namespace app::classes::types
