#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Input_Dbg {
        inline app::Input_Dbg__Class** type_info = (app::Input_Dbg__Class**)(modloader::win::memory::resolve_rva(0x0475DD18));
        inline app::Input_Dbg__Class* get_class() {
            return il2cpp::get_nested_class<app::Input_Dbg__Class>(type_info, "Core", "Input", "Dbg");
        }
        inline app::Input_Dbg* create() {
            return il2cpp::create_object<app::Input_Dbg>(get_class());
        }
    } // namespace Input_Dbg
} // namespace app::classes::types
