#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RuntimeOps_RuntimeVariables {
        inline app::RuntimeOps_RuntimeVariables__Class** type_info = (app::RuntimeOps_RuntimeVariables__Class**)(modloader::win::memory::resolve_rva(0x04701718));
        inline app::RuntimeOps_RuntimeVariables__Class* get_class() {
            return il2cpp::get_nested_class<app::RuntimeOps_RuntimeVariables__Class>(type_info, "System.Runtime.CompilerServices", "RuntimeOps", "RuntimeVariables");
        }
        inline app::RuntimeOps_RuntimeVariables* create() {
            return il2cpp::create_object<app::RuntimeOps_RuntimeVariables>(get_class());
        }
    } // namespace RuntimeOps_RuntimeVariables
} // namespace app::classes::types
