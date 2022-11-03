#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RuntimeOps_MergedRuntimeVariables {
        inline app::RuntimeOps_MergedRuntimeVariables__Class** type_info = (app::RuntimeOps_MergedRuntimeVariables__Class**)(modloader::win::memory::resolve_rva(0x04715990));
        inline app::RuntimeOps_MergedRuntimeVariables__Class* get_class() {
            return il2cpp::get_nested_class<app::RuntimeOps_MergedRuntimeVariables__Class>(type_info, "System.Runtime.CompilerServices", "RuntimeOps", "MergedRuntimeVariables");
        }
        inline app::RuntimeOps_MergedRuntimeVariables* create() {
            return il2cpp::create_object<app::RuntimeOps_MergedRuntimeVariables>(get_class());
        }
    } // namespace RuntimeOps_MergedRuntimeVariables
} // namespace app::classes::types
