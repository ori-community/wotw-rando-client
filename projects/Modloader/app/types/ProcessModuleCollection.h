#pragma once
#include <Modloader/app/structs/ProcessModuleCollection.h>
#include <Modloader/app/structs/ProcessModuleCollection__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ProcessModuleCollection {
        inline app::ProcessModuleCollection__Class** type_info() {
            static app::ProcessModuleCollection__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ProcessModuleCollection__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ProcessModuleCollection__Class* get_class() {
            return il2cpp::get_class<app::ProcessModuleCollection__Class>(type_info(), "System.Diagnostics", "ProcessModuleCollection");
        }
        inline app::ProcessModuleCollection* create() {
            return il2cpp::create_object<app::ProcessModuleCollection>(get_class());
        }
    } // namespace ProcessModuleCollection
} // namespace app::classes::types
