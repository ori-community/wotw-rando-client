#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DashOwlIdleState__Class.h>
#include <Modloader/app/structs/DashOwlIdleState.h>

namespace app::classes::types {
    namespace DashOwlIdleState {
        inline app::DashOwlIdleState__Class** type_info = (app::DashOwlIdleState__Class**)(modloader::win::memory::resolve_rva(0x04736100));
        inline app::DashOwlIdleState__Class* get_class() {
            return il2cpp::get_class<app::DashOwlIdleState__Class>(type_info, "", "DashOwlIdleState");
        }
        inline app::DashOwlIdleState* create() {
            return il2cpp::create_object<app::DashOwlIdleState>(get_class());
        }
    } // namespace DashOwlIdleState
} // namespace app::classes::types
