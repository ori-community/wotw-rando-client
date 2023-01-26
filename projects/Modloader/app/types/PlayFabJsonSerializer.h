#pragma once
#include <Modloader/app/structs/PlayFabJsonSerializer.h>
#include <Modloader/app/structs/PlayFabJsonSerializer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayFabJsonSerializer {
        inline app::PlayFabJsonSerializer__Class** type_info() {
            static app::PlayFabJsonSerializer__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PlayFabJsonSerializer__Class**)(modloader::win::memory::resolve_rva(0x04716298));
            }
            return cache;
        }
        inline app::PlayFabJsonSerializer__Class* get_class() {
            return il2cpp::get_class<app::PlayFabJsonSerializer__Class>(type_info(), "SystemIntegration.Synchronizer.Telemetry", "PlayFabJsonSerializer");
        }
        inline app::PlayFabJsonSerializer* create() {
            return il2cpp::create_object<app::PlayFabJsonSerializer>(get_class());
        }
    } // namespace PlayFabJsonSerializer
} // namespace app::classes::types
