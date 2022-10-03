#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InheritVelocityPlatform {
        namespace {
            app::InheritVelocityPlatform__Class* type_info_ref = nullptr;
        }
        app::InheritVelocityPlatform__Class** type_info = &type_info_ref;
        inline app::InheritVelocityPlatform__Class* get_class() {
            return il2cpp::get_class<app::InheritVelocityPlatform__Class>(type_info, "", "InheritVelocityPlatform");
        }
        inline app::InheritVelocityPlatform* create() {
            return il2cpp::create_object<app::InheritVelocityPlatform>(get_class());
        }
    } // namespace InheritVelocityPlatform
} // namespace app::classes::types
