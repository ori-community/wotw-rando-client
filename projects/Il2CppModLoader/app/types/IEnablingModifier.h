#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IEnablingModifier {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IEnablingModifier__Class** type_info;
        inline app::IEnablingModifier__Class* get_class() {
            return il2cpp::get_class<app::IEnablingModifier__Class>(type_info, "Moon.TimeSlicer", "IEnablingModifier");
        }
    } // namespace IEnablingModifier
} // namespace app::classes::types
