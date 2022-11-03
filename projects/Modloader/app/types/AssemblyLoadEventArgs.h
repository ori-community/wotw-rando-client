#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AssemblyLoadEventArgs {
        inline app::AssemblyLoadEventArgs__Class** type_info = (app::AssemblyLoadEventArgs__Class**)(modloader::win::memory::resolve_rva(0x04778C90));
        inline app::AssemblyLoadEventArgs__Class* get_class() {
            return il2cpp::get_class<app::AssemblyLoadEventArgs__Class>(type_info, "System", "AssemblyLoadEventArgs");
        }
        inline app::AssemblyLoadEventArgs* create() {
            return il2cpp::create_object<app::AssemblyLoadEventArgs>(get_class());
        }
    } // namespace AssemblyLoadEventArgs
} // namespace app::classes::types
