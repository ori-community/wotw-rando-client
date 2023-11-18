#pragma once
#include <Modloader/app/structs/EnvoyInfo.h>
#include <Modloader/app/structs/EnvoyInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EnvoyInfo {
        inline app::EnvoyInfo__Class** type_info() {
            static app::EnvoyInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EnvoyInfo__Class**)(modloader::win::memory::resolve_rva(0x04715DB0));
            }
            return cache;
        }
        inline app::EnvoyInfo__Class* get_class() {
            return il2cpp::get_class<app::EnvoyInfo__Class>(type_info(), "System.Runtime.Remoting", "EnvoyInfo");
        }
        inline app::EnvoyInfo* create() {
            return il2cpp::create_object<app::EnvoyInfo>(get_class());
        }
    } // namespace EnvoyInfo
} // namespace app::classes::types
