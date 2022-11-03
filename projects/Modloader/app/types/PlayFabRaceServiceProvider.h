#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlayFabRaceServiceProvider {
        inline app::PlayFabRaceServiceProvider__Class** type_info = (app::PlayFabRaceServiceProvider__Class**)(modloader::win::memory::resolve_rva(0x04717C70));
        inline app::PlayFabRaceServiceProvider__Class* get_class() {
            return il2cpp::get_class<app::PlayFabRaceServiceProvider__Class>(type_info, "SystemIntegration.Races", "PlayFabRaceServiceProvider");
        }
        inline app::PlayFabRaceServiceProvider* create() {
            return il2cpp::create_object<app::PlayFabRaceServiceProvider>(get_class());
        }
    } // namespace PlayFabRaceServiceProvider
} // namespace app::classes::types
