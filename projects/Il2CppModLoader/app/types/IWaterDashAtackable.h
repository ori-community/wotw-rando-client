#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IWaterDashAtackable {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IWaterDashAtackable__Class** type_info;
        inline app::IWaterDashAtackable__Class* get_class() {
            return il2cpp::get_class<app::IWaterDashAtackable__Class>(type_info, "", "IWaterDashAtackable");
        }
        inline app::IWaterDashAtackable* create() {
            return il2cpp::create_object<app::IWaterDashAtackable>(get_class());
        }
    } // namespace IWaterDashAtackable
} // namespace app::classes::types
