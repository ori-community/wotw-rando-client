#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MeleePositionInterpolator {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MeleePositionInterpolator__Class** type_info;
        inline app::MeleePositionInterpolator__Class* get_class() {
            return il2cpp::get_class<app::MeleePositionInterpolator__Class>(type_info, "", "MeleePositionInterpolator");
        }
        inline app::MeleePositionInterpolator* create() {
            return il2cpp::create_object<app::MeleePositionInterpolator>(get_class());
        }
    } // namespace MeleePositionInterpolator
} // namespace app::classes::types
