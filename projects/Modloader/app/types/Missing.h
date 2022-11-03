#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Missing {
        inline app::Missing__Class** type_info = (app::Missing__Class**)(modloader::win::memory::resolve_rva(0x04708798));
        inline app::Missing__Class* get_class() {
            return il2cpp::get_class<app::Missing__Class>(type_info, "System.Reflection", "Missing");
        }
        inline app::Missing* create() {
            return il2cpp::create_object<app::Missing>(get_class());
        }
    } // namespace Missing
} // namespace app::classes::types
