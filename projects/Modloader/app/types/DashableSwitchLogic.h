#pragma once
#include <Modloader/app/structs/DashableSwitchLogic.h>
#include <Modloader/app/structs/DashableSwitchLogic__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DashableSwitchLogic {
        inline app::DashableSwitchLogic__Class** type_info() {
            static app::DashableSwitchLogic__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DashableSwitchLogic__Class**)(modloader::win::memory::resolve_rva(0x04712E98));
            }
            return cache;
        }
        inline app::DashableSwitchLogic__Class* get_class() {
            return il2cpp::get_class<app::DashableSwitchLogic__Class>(type_info(), "", "DashableSwitchLogic");
        }
        inline app::DashableSwitchLogic* create() {
            return il2cpp::create_object<app::DashableSwitchLogic>(get_class());
        }
    } // namespace DashableSwitchLogic
} // namespace app::classes::types
