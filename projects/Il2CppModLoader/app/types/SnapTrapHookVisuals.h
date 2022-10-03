#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SnapTrapHookVisuals {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SnapTrapHookVisuals__Class** type_info;
        inline app::SnapTrapHookVisuals__Class* get_class() {
            return il2cpp::get_class<app::SnapTrapHookVisuals__Class>(type_info, "", "SnapTrapHookVisuals");
        }
        inline app::SnapTrapHookVisuals* create() {
            return il2cpp::create_object<app::SnapTrapHookVisuals>(get_class());
        }
    } // namespace SnapTrapHookVisuals
} // namespace app::classes::types
