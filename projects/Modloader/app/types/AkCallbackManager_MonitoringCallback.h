#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AkCallbackManager_MonitoringCallback {
        namespace {
            inline app::AkCallbackManager_MonitoringCallback__Class* type_info_ref = nullptr;
        }
        inline app::AkCallbackManager_MonitoringCallback__Class** type_info = &type_info_ref;
        inline app::AkCallbackManager_MonitoringCallback__Class* get_class() {
            return il2cpp::get_nested_class<app::AkCallbackManager_MonitoringCallback__Class>(type_info, "", "AkCallbackManager", "MonitoringCallback");
        }
        inline app::AkCallbackManager_MonitoringCallback* create() {
            return il2cpp::create_object<app::AkCallbackManager_MonitoringCallback>(get_class());
        }
    } // namespace AkCallbackManager_MonitoringCallback
} // namespace app::classes::types
