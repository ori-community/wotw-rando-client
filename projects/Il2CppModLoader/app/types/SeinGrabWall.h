#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinGrabWall {
        namespace {
            app::SeinGrabWall__Class* type_info_ref = nullptr;
        }
        app::SeinGrabWall__Class** type_info = &type_info_ref;
        inline app::SeinGrabWall__Class* get_class() {
            return il2cpp::get_class<app::SeinGrabWall__Class>(type_info, "", "SeinGrabWall");
        }
        inline app::SeinGrabWall* create() {
            return il2cpp::create_object<app::SeinGrabWall>(get_class());
        }
    } // namespace SeinGrabWall
} // namespace app::classes::types
