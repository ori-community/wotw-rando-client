#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FallOverride {
        namespace {
            app::FallOverride__Class* type_info_ref = nullptr;
        }
        app::FallOverride__Class** type_info = &type_info_ref;
        inline app::FallOverride__Class* get_class() {
            return il2cpp::get_class<app::FallOverride__Class>(type_info, "", "FallOverride");
        }
        inline app::FallOverride* create() {
            return il2cpp::create_object<app::FallOverride>(get_class());
        }
    } // namespace FallOverride
} // namespace app::classes::types
