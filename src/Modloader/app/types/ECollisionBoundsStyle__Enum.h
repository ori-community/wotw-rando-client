#pragma once
#include <Modloader/app/structs/ECollisionBoundsStyle__Enum.h>
#include <Modloader/app/structs/ECollisionBoundsStyle__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ECollisionBoundsStyle__Enum {
        inline app::ECollisionBoundsStyle__Enum__Class** type_info() {
            static app::ECollisionBoundsStyle__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ECollisionBoundsStyle__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ECollisionBoundsStyle__Enum__Class* get_class() {
            return il2cpp::get_class<app::ECollisionBoundsStyle__Enum__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "ECollisionBoundsStyle");
        }
        inline app::ECollisionBoundsStyle__Enum* create() {
            return il2cpp::create_object<app::ECollisionBoundsStyle__Enum>(get_class());
        }
    } // namespace ECollisionBoundsStyle__Enum
} // namespace app::classes::types
