#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RollingMovement {
        namespace {
            app::RollingMovement__Class* type_info_ref = nullptr;
        }
        app::RollingMovement__Class** type_info = &type_info_ref;
        inline app::RollingMovement__Class* get_class() {
            return il2cpp::get_class<app::RollingMovement__Class>(type_info, "", "RollingMovement");
        }
        inline app::RollingMovement* create() {
            return il2cpp::create_object<app::RollingMovement>(get_class());
        }
    } // namespace RollingMovement
} // namespace app::classes::types
