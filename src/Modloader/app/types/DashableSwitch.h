#pragma once
#include <Modloader/app/structs/DashableSwitch.h>
#include <Modloader/app/structs/DashableSwitch__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DashableSwitch {
        inline app::DashableSwitch__Class** type_info() {
            static app::DashableSwitch__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DashableSwitch__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DashableSwitch__Class* get_class() {
            return il2cpp::get_class<app::DashableSwitch__Class>(type_info(), "Game", "DashableSwitch");
        }
        inline app::DashableSwitch* create() {
            return il2cpp::create_object<app::DashableSwitch>(get_class());
        }
    } // namespace DashableSwitch
} // namespace app::classes::types
