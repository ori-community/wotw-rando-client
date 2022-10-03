#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HR {
        namespace {
            app::HR__Class* type_info_ref = nullptr;
        }
        app::HR__Class** type_info = &type_info_ref;
        inline app::HR__Class* get_class() {
            return il2cpp::get_class<app::HR__Class>(type_info, "XGamingRuntime.Interop", "HR");
        }
        inline app::HR* create() {
            return il2cpp::create_object<app::HR>(get_class());
        }
    } // namespace HR
} // namespace app::classes::types
