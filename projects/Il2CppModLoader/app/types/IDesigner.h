#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IDesigner {
        inline app::IDesigner__Class** type_info = (app::IDesigner__Class**)(modloader::win::memory::resolve_rva(0x04790418));
        inline app::IDesigner__Class* get_class() {
            return il2cpp::get_class<app::IDesigner__Class>(type_info, "System.ComponentModel.Design", "IDesigner");
        }
    } // namespace IDesigner
} // namespace app::classes::types
