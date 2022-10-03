#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PhysicsCage {
        namespace {
            app::PhysicsCage__Class* type_info_ref = nullptr;
        }
        app::PhysicsCage__Class** type_info = &type_info_ref;
        inline app::PhysicsCage__Class* get_class() {
            return il2cpp::get_class<app::PhysicsCage__Class>(type_info, "", "PhysicsCage");
        }
        inline app::PhysicsCage* create() {
            return il2cpp::create_object<app::PhysicsCage>(get_class());
        }
    } // namespace PhysicsCage
} // namespace app::classes::types
