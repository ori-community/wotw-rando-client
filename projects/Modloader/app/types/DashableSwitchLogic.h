#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DashableSwitchLogic {
        inline app::DashableSwitchLogic__Class** type_info = (app::DashableSwitchLogic__Class**)(modloader::win::memory::resolve_rva(0x04712E98));
        inline app::DashableSwitchLogic__Class* get_class() {
            return il2cpp::get_class<app::DashableSwitchLogic__Class>(type_info, "", "DashableSwitchLogic");
        }
        inline app::DashableSwitchLogic* create() {
            return il2cpp::create_object<app::DashableSwitchLogic>(get_class());
        }
    } // namespace DashableSwitchLogic
} // namespace app::classes::types
