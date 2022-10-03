#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ProcessThreadCollection {
        namespace {
            app::ProcessThreadCollection__Class* type_info_ref = nullptr;
        }
        app::ProcessThreadCollection__Class** type_info = &type_info_ref;
        inline app::ProcessThreadCollection__Class* get_class() {
            return il2cpp::get_class<app::ProcessThreadCollection__Class>(type_info, "System.Diagnostics", "ProcessThreadCollection");
        }
        inline app::ProcessThreadCollection* create() {
            return il2cpp::create_object<app::ProcessThreadCollection>(get_class());
        }
    } // namespace ProcessThreadCollection
} // namespace app::classes::types
