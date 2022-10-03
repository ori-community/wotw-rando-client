#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayFabStatistics {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PlayFabStatistics__Class** type_info;
        inline app::PlayFabStatistics__Class* get_class() {
            return il2cpp::get_class<app::PlayFabStatistics__Class>(type_info, "SystemIntegration.Synchronizer.Statistics", "PlayFabStatistics");
        }
        inline app::PlayFabStatistics* create() {
            return il2cpp::create_object<app::PlayFabStatistics>(get_class());
        }
    } // namespace PlayFabStatistics
} // namespace app::classes::types
