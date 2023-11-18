#pragma once
#include <Modloader/app/structs/SeinGrabWall.h>
#include <Modloader/app/structs/SeinGrabWall__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinGrabWall {
        inline app::SeinGrabWall__Class** type_info() {
            static app::SeinGrabWall__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinGrabWall__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinGrabWall__Class* get_class() {
            return il2cpp::get_class<app::SeinGrabWall__Class>(type_info(), "", "SeinGrabWall");
        }
        inline app::SeinGrabWall* create() {
            return il2cpp::create_object<app::SeinGrabWall>(get_class());
        }
    } // namespace SeinGrabWall
} // namespace app::classes::types
