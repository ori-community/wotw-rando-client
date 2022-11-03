#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace EnvoyInfo {
        inline app::EnvoyInfo__Class** type_info = (app::EnvoyInfo__Class**)(modloader::win::memory::resolve_rva(0x04715DB0));
        inline app::EnvoyInfo__Class* get_class() {
            return il2cpp::get_class<app::EnvoyInfo__Class>(type_info, "System.Runtime.Remoting", "EnvoyInfo");
        }
        inline app::EnvoyInfo* create() {
            return il2cpp::create_object<app::EnvoyInfo>(get_class());
        }
    } // namespace EnvoyInfo
} // namespace app::classes::types
