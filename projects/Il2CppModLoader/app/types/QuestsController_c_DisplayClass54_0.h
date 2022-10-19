#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace QuestsController_c_DisplayClass54_0 {
        inline app::QuestsController_c_DisplayClass54_0__Class** type_info = (app::QuestsController_c_DisplayClass54_0__Class**)(modloader::win::memory::resolve_rva(0x047457C8));
        inline app::QuestsController_c_DisplayClass54_0__Class* get_class() {
            return il2cpp::get_nested_class<app::QuestsController_c_DisplayClass54_0__Class>(type_info, "", "QuestsController", "<>c__DisplayClass54_0");
        }
        inline app::QuestsController_c_DisplayClass54_0* create() {
            return il2cpp::create_object<app::QuestsController_c_DisplayClass54_0>(get_class());
        }
    } // namespace QuestsController_c_DisplayClass54_0
} // namespace app::classes::types
