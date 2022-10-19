#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ILayoutIgnorer {
        inline app::ILayoutIgnorer__Class** type_info = (app::ILayoutIgnorer__Class**)(modloader::win::memory::resolve_rva(0x0477FDE0));
        inline app::ILayoutIgnorer__Class* get_class() {
            return il2cpp::get_class<app::ILayoutIgnorer__Class>(type_info, "UnityEngine.UI", "ILayoutIgnorer");
        }
    } // namespace ILayoutIgnorer
} // namespace app::classes::types
