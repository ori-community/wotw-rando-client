#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ProcessModuleCollection {
        namespace {
            app::ProcessModuleCollection__Class* type_info_ref = nullptr;
        }
        app::ProcessModuleCollection__Class** type_info = &type_info_ref;
        inline app::ProcessModuleCollection__Class* get_class() {
            return il2cpp::get_class<app::ProcessModuleCollection__Class>(type_info, "System.Diagnostics", "ProcessModuleCollection");
        }
        inline app::ProcessModuleCollection* create() {
            return il2cpp::create_object<app::ProcessModuleCollection>(get_class());
        }
    } // namespace ProcessModuleCollection
} // namespace app::classes::types
