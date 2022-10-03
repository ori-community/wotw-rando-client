#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HoloLensController {
        extern IL2CPP_MODLOADER_DLLEXPORT app::HoloLensController__Class** type_info;
        inline app::HoloLensController__Class* get_class() {
            return il2cpp::get_class<app::HoloLensController__Class>(type_info, "", "HoloLensController");
        }
        inline app::HoloLensController* create() {
            return il2cpp::create_object<app::HoloLensController>(get_class());
        }
    } // namespace HoloLensController
} // namespace app::classes::types
