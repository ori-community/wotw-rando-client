#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RuntimeOps {
        namespace {
            app::RuntimeOps__Class* type_info_ref = nullptr;
        }
        app::RuntimeOps__Class** type_info = &type_info_ref;
        inline app::RuntimeOps__Class* get_class() {
            return il2cpp::get_class<app::RuntimeOps__Class>(type_info, "System.Runtime.CompilerServices", "RuntimeOps");
        }
        inline app::RuntimeOps* create() {
            return il2cpp::create_object<app::RuntimeOps>(get_class());
        }
    } // namespace RuntimeOps
} // namespace app::classes::types
