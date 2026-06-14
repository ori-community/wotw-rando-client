#pragma once
#include <Modloader/app/structs/AkCallbackManager_MonitoringCallback.h>
#include <Modloader/app/structs/AkCallbackManager_MonitoringCallback__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AkCallbackManager_MonitoringCallback {
        inline app::AkCallbackManager_MonitoringCallback__Class** type_info() {
            static app::AkCallbackManager_MonitoringCallback__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AkCallbackManager_MonitoringCallback__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AkCallbackManager_MonitoringCallback__Class* get_class() {
            return il2cpp::get_nested_class<app::AkCallbackManager_MonitoringCallback__Class>(type_info(), "", "AkCallbackManager", "MonitoringCallback");
        }
        inline app::AkCallbackManager_MonitoringCallback* create() {
            return il2cpp::create_object<app::AkCallbackManager_MonitoringCallback>(get_class());
        }
    } // namespace AkCallbackManager_MonitoringCallback
} // namespace app::classes::types
