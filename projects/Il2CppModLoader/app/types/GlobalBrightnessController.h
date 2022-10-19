#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GlobalBrightnessController {
        inline app::GlobalBrightnessController__Class** type_info = (app::GlobalBrightnessController__Class**)(modloader::win::memory::resolve_rva(0x047193A8));
        inline app::GlobalBrightnessController__Class* get_class() {
            return il2cpp::get_class<app::GlobalBrightnessController__Class>(type_info, "", "GlobalBrightnessController");
        }
        inline app::GlobalBrightnessController* create() {
            return il2cpp::create_object<app::GlobalBrightnessController>(get_class());
        }
    } // namespace GlobalBrightnessController
} // namespace app::classes::types
