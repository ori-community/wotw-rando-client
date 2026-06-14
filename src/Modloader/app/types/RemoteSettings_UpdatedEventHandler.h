#pragma once
#include <Modloader/app/structs/RemoteSettings_UpdatedEventHandler.h>
#include <Modloader/app/structs/RemoteSettings_UpdatedEventHandler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RemoteSettings_UpdatedEventHandler {
        inline app::RemoteSettings_UpdatedEventHandler__Class** type_info() {
            static app::RemoteSettings_UpdatedEventHandler__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RemoteSettings_UpdatedEventHandler__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RemoteSettings_UpdatedEventHandler__Class* get_class() {
            return il2cpp::get_nested_class<app::RemoteSettings_UpdatedEventHandler__Class>(type_info(), "UnityEngine", "RemoteSettings", "UpdatedEventHandler");
        }
        inline app::RemoteSettings_UpdatedEventHandler* create() {
            return il2cpp::create_object<app::RemoteSettings_UpdatedEventHandler>(get_class());
        }
    } // namespace RemoteSettings_UpdatedEventHandler
} // namespace app::classes::types
