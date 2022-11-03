#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RemoteSettings_UpdatedEventHandler {
        namespace {
            inline app::RemoteSettings_UpdatedEventHandler__Class* type_info_ref = nullptr;
        }
        inline app::RemoteSettings_UpdatedEventHandler__Class** type_info = &type_info_ref;
        inline app::RemoteSettings_UpdatedEventHandler__Class* get_class() {
            return il2cpp::get_nested_class<app::RemoteSettings_UpdatedEventHandler__Class>(type_info, "UnityEngine", "RemoteSettings", "UpdatedEventHandler");
        }
        inline app::RemoteSettings_UpdatedEventHandler* create() {
            return il2cpp::create_object<app::RemoteSettings_UpdatedEventHandler>(get_class());
        }
    } // namespace RemoteSettings_UpdatedEventHandler
} // namespace app::classes::types
