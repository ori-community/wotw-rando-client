#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinDeadlyDarknessController {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SeinDeadlyDarknessController__Class** type_info;
        inline app::SeinDeadlyDarknessController__Class* get_class() {
            return il2cpp::get_class<app::SeinDeadlyDarknessController__Class>(type_info, "", "SeinDeadlyDarknessController");
        }
        inline app::SeinDeadlyDarknessController* create() {
            return il2cpp::create_object<app::SeinDeadlyDarknessController>(get_class());
        }
    } // namespace SeinDeadlyDarknessController
} // namespace app::classes::types
