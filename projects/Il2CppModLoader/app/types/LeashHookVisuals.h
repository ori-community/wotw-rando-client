#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LeashHookVisuals {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LeashHookVisuals__Class** type_info;
        inline app::LeashHookVisuals__Class* get_class() {
            return il2cpp::get_class<app::LeashHookVisuals__Class>(type_info, "", "LeashHookVisuals");
        }
        inline app::LeashHookVisuals* create() {
            return il2cpp::create_object<app::LeashHookVisuals>(get_class());
        }
    } // namespace LeashHookVisuals
} // namespace app::classes::types
