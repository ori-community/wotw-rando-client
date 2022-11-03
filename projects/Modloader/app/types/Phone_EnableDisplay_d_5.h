#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Phone_EnableDisplay_d_5 {
        inline app::Phone_EnableDisplay_d_5__Class** type_info = (app::Phone_EnableDisplay_d_5__Class**)(modloader::win::memory::resolve_rva(0x04779940));
        inline app::Phone_EnableDisplay_d_5__Class* get_class() {
            return il2cpp::get_nested_class<app::Phone_EnableDisplay_d_5__Class>(type_info, "RootMotion.Demos", "Phone", "<EnableDisplay>d__5");
        }
        inline app::Phone_EnableDisplay_d_5* create() {
            return il2cpp::create_object<app::Phone_EnableDisplay_d_5>(get_class());
        }
    } // namespace Phone_EnableDisplay_d_5
} // namespace app::classes::types
