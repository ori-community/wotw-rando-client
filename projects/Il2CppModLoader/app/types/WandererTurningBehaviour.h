#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WandererTurningBehaviour {
        extern IL2CPP_MODLOADER_DLLEXPORT app::WandererTurningBehaviour__Class** type_info;
        inline app::WandererTurningBehaviour__Class* get_class() {
            return il2cpp::get_class<app::WandererTurningBehaviour__Class>(type_info, "", "WandererTurningBehaviour");
        }
        inline app::WandererTurningBehaviour* create() {
            return il2cpp::create_object<app::WandererTurningBehaviour>(get_class());
        }
    } // namespace WandererTurningBehaviour
} // namespace app::classes::types
