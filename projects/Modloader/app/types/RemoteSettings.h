#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RemoteSettings__Class.h>
#include <Modloader/app/structs/RemoteSettings.h>

namespace app::classes::types {
    namespace RemoteSettings {
        inline app::RemoteSettings__Class** type_info = (app::RemoteSettings__Class**)(modloader::win::memory::resolve_rva(0x04715728));
        inline app::RemoteSettings__Class* get_class() {
            return il2cpp::get_class<app::RemoteSettings__Class>(type_info, "UnityEngine", "RemoteSettings");
        }
        inline app::RemoteSettings* create() {
            return il2cpp::create_object<app::RemoteSettings>(get_class());
        }
    } // namespace RemoteSettings
} // namespace app::classes::types
