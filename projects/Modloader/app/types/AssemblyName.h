#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AssemblyName__Class.h>
#include <Modloader/app/structs/AssemblyName.h>

namespace app::classes::types {
    namespace AssemblyName {
        inline app::AssemblyName__Class** type_info = (app::AssemblyName__Class**)(modloader::win::memory::resolve_rva(0x0477E0B8));
        inline app::AssemblyName__Class* get_class() {
            return il2cpp::get_class<app::AssemblyName__Class>(type_info, "System.Reflection", "AssemblyName");
        }
        inline app::AssemblyName* create() {
            return il2cpp::create_object<app::AssemblyName>(get_class());
        }
    } // namespace AssemblyName
} // namespace app::classes::types
