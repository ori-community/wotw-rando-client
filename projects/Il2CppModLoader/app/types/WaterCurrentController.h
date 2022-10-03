#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WaterCurrentController {
        extern IL2CPP_MODLOADER_DLLEXPORT app::WaterCurrentController__Class** type_info;
        inline app::WaterCurrentController__Class* get_class() {
            return il2cpp::get_class<app::WaterCurrentController__Class>(type_info, "", "WaterCurrentController");
        }
        inline app::WaterCurrentController* create() {
            return il2cpp::create_object<app::WaterCurrentController>(get_class());
        }
    } // namespace WaterCurrentController
} // namespace app::classes::types
