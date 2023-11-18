#pragma once
#include <Modloader/app/structs/ScenesManager_WaitForSceneToLoadAndSendTelemetryEvent_d_215.h>
#include <Modloader/app/structs/ScenesManager_WaitForSceneToLoadAndSendTelemetryEvent_d_215__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ScenesManager_WaitForSceneToLoadAndSendTelemetryEvent_d_215 {
        inline app::ScenesManager_WaitForSceneToLoadAndSendTelemetryEvent_d_215__Class** type_info() {
            static app::ScenesManager_WaitForSceneToLoadAndSendTelemetryEvent_d_215__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ScenesManager_WaitForSceneToLoadAndSendTelemetryEvent_d_215__Class**)(modloader::win::memory::resolve_rva(0x0477A860));
            }
            return cache;
        }
        inline app::ScenesManager_WaitForSceneToLoadAndSendTelemetryEvent_d_215__Class* get_class() {
            return il2cpp::get_nested_class<app::ScenesManager_WaitForSceneToLoadAndSendTelemetryEvent_d_215__Class>(type_info(), "", "ScenesManager", "<WaitForSceneToLoadAndSendTelemetryEvent>d__215");
        }
        inline app::ScenesManager_WaitForSceneToLoadAndSendTelemetryEvent_d_215* create() {
            return il2cpp::create_object<app::ScenesManager_WaitForSceneToLoadAndSendTelemetryEvent_d_215>(get_class());
        }
    } // namespace ScenesManager_WaitForSceneToLoadAndSendTelemetryEvent_d_215
} // namespace app::classes::types
