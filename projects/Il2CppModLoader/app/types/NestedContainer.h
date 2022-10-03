#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NestedContainer {
        namespace {
            app::NestedContainer__Class* type_info_ref = nullptr;
        }
        app::NestedContainer__Class** type_info = &type_info_ref;
        inline app::NestedContainer__Class* get_class() {
            return il2cpp::get_class<app::NestedContainer__Class>(type_info, "System.ComponentModel", "NestedContainer");
        }
        inline app::NestedContainer* create() {
            return il2cpp::create_object<app::NestedContainer>(get_class());
        }
    } // namespace NestedContainer
} // namespace app::classes::types
