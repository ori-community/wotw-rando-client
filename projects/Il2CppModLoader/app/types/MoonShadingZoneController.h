#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonShadingZoneController {
        inline app::MoonShadingZoneController__Class** type_info = (app::MoonShadingZoneController__Class**)(modloader::win::memory::resolve_rva(0x04765CE0));
        inline app::MoonShadingZoneController__Class* get_class() {
            return il2cpp::get_class<app::MoonShadingZoneController__Class>(type_info, "", "MoonShadingZoneController");
        }
        inline app::MoonShadingZoneController* create() {
            return il2cpp::create_object<app::MoonShadingZoneController>(get_class());
        }
    } // namespace MoonShadingZoneController
} // namespace app::classes::types
