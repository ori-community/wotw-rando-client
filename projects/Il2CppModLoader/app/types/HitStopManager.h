#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HitStopManager {
        extern IL2CPP_MODLOADER_DLLEXPORT app::HitStopManager__Class** type_info;
        inline app::HitStopManager__Class* get_class() {
            return il2cpp::get_class<app::HitStopManager__Class>(type_info, "Moon", "HitStopManager");
        }
        inline app::HitStopManager* create() {
            return il2cpp::create_object<app::HitStopManager>(get_class());
        }
    } // namespace HitStopManager
} // namespace app::classes::types
