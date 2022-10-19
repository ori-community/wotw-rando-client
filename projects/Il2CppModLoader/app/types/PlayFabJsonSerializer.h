#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlayFabJsonSerializer {
        inline app::PlayFabJsonSerializer__Class** type_info = (app::PlayFabJsonSerializer__Class**)(modloader::win::memory::resolve_rva(0x04716298));
        inline app::PlayFabJsonSerializer__Class* get_class() {
            return il2cpp::get_class<app::PlayFabJsonSerializer__Class>(type_info, "SystemIntegration.Synchronizer.Telemetry", "PlayFabJsonSerializer");
        }
        inline app::PlayFabJsonSerializer* create() {
            return il2cpp::create_object<app::PlayFabJsonSerializer>(get_class());
        }
    } // namespace PlayFabJsonSerializer
} // namespace app::classes::types
