#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinDeadlyDarknessController {
        inline app::SeinDeadlyDarknessController__Class** type_info = (app::SeinDeadlyDarknessController__Class**)(modloader::win::memory::resolve_rva(0x0472A628));
        inline app::SeinDeadlyDarknessController__Class* get_class() {
            return il2cpp::get_class<app::SeinDeadlyDarknessController__Class>(type_info, "", "SeinDeadlyDarknessController");
        }
        inline app::SeinDeadlyDarknessController* create() {
            return il2cpp::create_object<app::SeinDeadlyDarknessController>(get_class());
        }
    } // namespace SeinDeadlyDarknessController
} // namespace app::classes::types
