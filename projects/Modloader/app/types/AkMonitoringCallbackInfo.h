#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AkMonitoringCallbackInfo {
        inline app::AkMonitoringCallbackInfo__Class** type_info = (app::AkMonitoringCallbackInfo__Class**)(modloader::win::memory::resolve_rva(0x0470A070));
        inline app::AkMonitoringCallbackInfo__Class* get_class() {
            return il2cpp::get_class<app::AkMonitoringCallbackInfo__Class>(type_info, "", "AkMonitoringCallbackInfo");
        }
        inline app::AkMonitoringCallbackInfo* create() {
            return il2cpp::create_object<app::AkMonitoringCallbackInfo>(get_class());
        }
    } // namespace AkMonitoringCallbackInfo
} // namespace app::classes::types
