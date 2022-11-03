#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IEnvoyInfo {
        inline app::IEnvoyInfo__Class** type_info = (app::IEnvoyInfo__Class**)(modloader::win::memory::resolve_rva(0x04790548));
        inline app::IEnvoyInfo__Class* get_class() {
            return il2cpp::get_class<app::IEnvoyInfo__Class>(type_info, "System.Runtime.Remoting", "IEnvoyInfo");
        }
    } // namespace IEnvoyInfo
} // namespace app::classes::types
