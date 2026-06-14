#pragma once
#include <Modloader/app/structs/RuntimeOps_MergedRuntimeVariables.h>
#include <Modloader/app/structs/RuntimeOps_MergedRuntimeVariables__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RuntimeOps_MergedRuntimeVariables {
        inline app::RuntimeOps_MergedRuntimeVariables__Class** type_info() {
            static app::RuntimeOps_MergedRuntimeVariables__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RuntimeOps_MergedRuntimeVariables__Class**)(modloader::win::memory::resolve_rva(0x04715990));
            }
            return cache;
        }
        inline app::RuntimeOps_MergedRuntimeVariables__Class* get_class() {
            return il2cpp::get_nested_class<app::RuntimeOps_MergedRuntimeVariables__Class>(type_info(), "System.Runtime.CompilerServices", "RuntimeOps", "MergedRuntimeVariables");
        }
        inline app::RuntimeOps_MergedRuntimeVariables* create() {
            return il2cpp::create_object<app::RuntimeOps_MergedRuntimeVariables>(get_class());
        }
    } // namespace RuntimeOps_MergedRuntimeVariables
} // namespace app::classes::types
