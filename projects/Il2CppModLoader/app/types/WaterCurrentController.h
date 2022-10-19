#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace WaterCurrentController {
        inline app::WaterCurrentController__Class** type_info = (app::WaterCurrentController__Class**)(modloader::win::memory::resolve_rva(0x0471CED0));
        inline app::WaterCurrentController__Class* get_class() {
            return il2cpp::get_class<app::WaterCurrentController__Class>(type_info, "", "WaterCurrentController");
        }
        inline app::WaterCurrentController* create() {
            return il2cpp::create_object<app::WaterCurrentController>(get_class());
        }
    } // namespace WaterCurrentController
} // namespace app::classes::types
