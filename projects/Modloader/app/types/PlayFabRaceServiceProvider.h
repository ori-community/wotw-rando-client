#pragma once
#include <Modloader/app/structs/PlayFabRaceServiceProvider.h>
#include <Modloader/app/structs/PlayFabRaceServiceProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayFabRaceServiceProvider {
        inline app::PlayFabRaceServiceProvider__Class** type_info() {
            static app::PlayFabRaceServiceProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PlayFabRaceServiceProvider__Class**)(modloader::win::memory::resolve_rva(0x04717C70));
            }
            return cache;
        }
        inline app::PlayFabRaceServiceProvider__Class* get_class() {
            return il2cpp::get_class<app::PlayFabRaceServiceProvider__Class>(type_info(), "SystemIntegration.Races", "PlayFabRaceServiceProvider");
        }
        inline app::PlayFabRaceServiceProvider* create() {
            return il2cpp::create_object<app::PlayFabRaceServiceProvider>(get_class());
        }
    } // namespace PlayFabRaceServiceProvider
} // namespace app::classes::types
