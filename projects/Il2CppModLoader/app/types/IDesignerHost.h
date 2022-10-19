#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IDesignerHost {
        inline app::IDesignerHost__Class** type_info = (app::IDesignerHost__Class**)(modloader::win::memory::resolve_rva(0x0476D530));
        inline app::IDesignerHost__Class* get_class() {
            return il2cpp::get_class<app::IDesignerHost__Class>(type_info, "System.ComponentModel.Design", "IDesignerHost");
        }
    } // namespace IDesignerHost
} // namespace app::classes::types
