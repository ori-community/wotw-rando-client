#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CSharpCodeProvider {
        inline app::CSharpCodeProvider__Class** type_info = (app::CSharpCodeProvider__Class**)(modloader::win::memory::resolve_rva(0x04794C40));
        inline app::CSharpCodeProvider__Class* get_class() {
            return il2cpp::get_class<app::CSharpCodeProvider__Class>(type_info, "Microsoft.CSharp", "CSharpCodeProvider");
        }
        inline app::CSharpCodeProvider* create() {
            return il2cpp::create_object<app::CSharpCodeProvider>(get_class());
        }
    } // namespace CSharpCodeProvider
} // namespace app::classes::types
