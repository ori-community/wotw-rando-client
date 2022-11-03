#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AssemblyBridge {
        inline app::AssemblyBridge__Class** type_info = (app::AssemblyBridge__Class**)(modloader::win::memory::resolve_rva(0x0478B838));
        inline app::AssemblyBridge__Class* get_class() {
            return il2cpp::get_class<app::AssemblyBridge__Class>(type_info, "", "AssemblyBridge");
        }
        inline app::AssemblyBridge* create() {
            return il2cpp::create_object<app::AssemblyBridge>(get_class());
        }
    } // namespace AssemblyBridge
} // namespace app::classes::types
