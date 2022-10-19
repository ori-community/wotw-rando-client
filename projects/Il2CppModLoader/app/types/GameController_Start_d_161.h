#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GameController_Start_d_161 {
        inline app::GameController_Start_d_161__Class** type_info = (app::GameController_Start_d_161__Class**)(modloader::win::memory::resolve_rva(0x04740028));
        inline app::GameController_Start_d_161__Class* get_class() {
            return il2cpp::get_nested_class<app::GameController_Start_d_161__Class>(type_info, "", "GameController", "<Start>d__161");
        }
        inline app::GameController_Start_d_161* create() {
            return il2cpp::create_object<app::GameController_Start_d_161>(get_class());
        }
    } // namespace GameController_Start_d_161
} // namespace app::classes::types
