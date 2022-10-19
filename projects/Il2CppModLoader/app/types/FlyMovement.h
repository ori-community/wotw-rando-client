#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace FlyMovement {
        namespace {
            inline app::FlyMovement__Class* type_info_ref = nullptr;
        }
        inline app::FlyMovement__Class** type_info = &type_info_ref;
        inline app::FlyMovement__Class* get_class() {
            return il2cpp::get_class<app::FlyMovement__Class>(type_info, "", "FlyMovement");
        }
        inline app::FlyMovement* create() {
            return il2cpp::create_object<app::FlyMovement>(get_class());
        }
    } // namespace FlyMovement
} // namespace app::classes::types
