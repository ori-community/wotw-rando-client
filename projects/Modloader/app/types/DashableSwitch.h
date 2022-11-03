#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DashableSwitch {
        namespace {
            inline app::DashableSwitch__Class* type_info_ref = nullptr;
        }
        inline app::DashableSwitch__Class** type_info = &type_info_ref;
        inline app::DashableSwitch__Class* get_class() {
            return il2cpp::get_class<app::DashableSwitch__Class>(type_info, "Game", "DashableSwitch");
        }
        inline app::DashableSwitch* create() {
            return il2cpp::create_object<app::DashableSwitch>(get_class());
        }
    } // namespace DashableSwitch
} // namespace app::classes::types
