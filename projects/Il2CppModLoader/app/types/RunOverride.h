#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RunOverride {
        namespace {
            app::RunOverride__Class* type_info_ref = nullptr;
        }
        app::RunOverride__Class** type_info = &type_info_ref;
        inline app::RunOverride__Class* get_class() {
            return il2cpp::get_class<app::RunOverride__Class>(type_info, "", "RunOverride");
        }
        inline app::RunOverride* create() {
            return il2cpp::create_object<app::RunOverride>(get_class());
        }
    } // namespace RunOverride
} // namespace app::classes::types
