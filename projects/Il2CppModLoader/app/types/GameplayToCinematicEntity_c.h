#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GameplayToCinematicEntity_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GameplayToCinematicEntity_c__Class** type_info;
        inline app::GameplayToCinematicEntity_c__Class* get_class() {
            return il2cpp::get_nested_class<app::GameplayToCinematicEntity_c__Class>(type_info, "Moon.Timeline", "GameplayToCinematicEntity", "<>c");
        }
        inline app::GameplayToCinematicEntity_c* create() {
            return il2cpp::create_object<app::GameplayToCinematicEntity_c>(get_class());
        }
    } // namespace GameplayToCinematicEntity_c
} // namespace app::classes::types
