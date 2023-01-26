#pragma once
#include <Modloader/app/structs/AkMonitoringCallbackInfo.h>
#include <Modloader/app/structs/AkMonitoringCallbackInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AkMonitoringCallbackInfo {
        inline app::AkMonitoringCallbackInfo__Class** type_info() {
            static app::AkMonitoringCallbackInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AkMonitoringCallbackInfo__Class**)(modloader::win::memory::resolve_rva(0x0470A070));
            }
            return cache;
        }
        inline app::AkMonitoringCallbackInfo__Class* get_class() {
            return il2cpp::get_class<app::AkMonitoringCallbackInfo__Class>(type_info(), "", "AkMonitoringCallbackInfo");
        }
        inline app::AkMonitoringCallbackInfo* create() {
            return il2cpp::create_object<app::AkMonitoringCallbackInfo>(get_class());
        }
    } // namespace AkMonitoringCallbackInfo
} // namespace app::classes::types
