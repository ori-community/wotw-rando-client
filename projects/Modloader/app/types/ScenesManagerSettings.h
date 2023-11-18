#pragma once
#include <Modloader/app/structs/ScenesManagerSettings.h>
#include <Modloader/app/structs/ScenesManagerSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ScenesManagerSettings {
        inline app::ScenesManagerSettings__Class** type_info() {
            static app::ScenesManagerSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ScenesManagerSettings__Class**)(modloader::win::memory::resolve_rva(0x04785730));
            }
            return cache;
        }
        inline app::ScenesManagerSettings__Class* get_class() {
            return il2cpp::get_class<app::ScenesManagerSettings__Class>(type_info(), "", "ScenesManagerSettings");
        }
        inline app::ScenesManagerSettings* create() {
            return il2cpp::create_object<app::ScenesManagerSettings>(get_class());
        }
    } // namespace ScenesManagerSettings
} // namespace app::classes::types
