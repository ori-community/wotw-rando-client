#pragma once
#include <Modloader/app/structs/MoonShadingZoneController.h>
#include <Modloader/app/structs/MoonShadingZoneController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonShadingZoneController {
        inline app::MoonShadingZoneController__Class** type_info() {
            static app::MoonShadingZoneController__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MoonShadingZoneController__Class**)(modloader::win::memory::resolve_rva(0x04765CE0));
            }
            return cache;
        }
        inline app::MoonShadingZoneController__Class* get_class() {
            return il2cpp::get_class<app::MoonShadingZoneController__Class>(type_info(), "", "MoonShadingZoneController");
        }
        inline app::MoonShadingZoneController* create() {
            return il2cpp::create_object<app::MoonShadingZoneController>(get_class());
        }
    } // namespace MoonShadingZoneController
} // namespace app::classes::types
