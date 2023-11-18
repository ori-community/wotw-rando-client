#pragma once
#include <Modloader/app/structs/DashOwlDashState.h>
#include <Modloader/app/structs/DashOwlDashState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DashOwlDashState {
        inline app::DashOwlDashState__Class** type_info() {
            static app::DashOwlDashState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DashOwlDashState__Class**)(modloader::win::memory::resolve_rva(0x047096D0));
            }
            return cache;
        }
        inline app::DashOwlDashState__Class* get_class() {
            return il2cpp::get_class<app::DashOwlDashState__Class>(type_info(), "", "DashOwlDashState");
        }
        inline app::DashOwlDashState* create() {
            return il2cpp::create_object<app::DashOwlDashState>(get_class());
        }
    } // namespace DashOwlDashState
} // namespace app::classes::types
