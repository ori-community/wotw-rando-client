#pragma once
#include <Modloader/app/structs/IEnvoyInfo.h>
#include <Modloader/app/structs/IEnvoyInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IEnvoyInfo {
        inline app::IEnvoyInfo__Class** type_info() {
            static app::IEnvoyInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IEnvoyInfo__Class**)(modloader::win::memory::resolve_rva(0x04790548));
            }
            return cache;
        }
        inline app::IEnvoyInfo__Class* get_class() {
            return il2cpp::get_class<app::IEnvoyInfo__Class>(type_info(), "System.Runtime.Remoting", "IEnvoyInfo");
        }
    } // namespace IEnvoyInfo
} // namespace app::classes::types
