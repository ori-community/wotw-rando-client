#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DashOwlBashedState {
        inline app::DashOwlBashedState__Class** type_info = (app::DashOwlBashedState__Class**)(modloader::win::memory::resolve_rva(0x0474EEE0));
        inline app::DashOwlBashedState__Class* get_class() {
            return il2cpp::get_class<app::DashOwlBashedState__Class>(type_info, "", "DashOwlBashedState");
        }
        inline app::DashOwlBashedState* create() {
            return il2cpp::create_object<app::DashOwlBashedState>(get_class());
        }
    } // namespace DashOwlBashedState
} // namespace app::classes::types
