#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayFabDataGatherer {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PlayFabDataGatherer__Class** type_info;
        inline app::PlayFabDataGatherer__Class* get_class() {
            return il2cpp::get_class<app::PlayFabDataGatherer__Class>(type_info, "PlayFab", "PlayFabDataGatherer");
        }
        inline app::PlayFabDataGatherer* create() {
            return il2cpp::create_object<app::PlayFabDataGatherer>(get_class());
        }
    } // namespace PlayFabDataGatherer
} // namespace app::classes::types
