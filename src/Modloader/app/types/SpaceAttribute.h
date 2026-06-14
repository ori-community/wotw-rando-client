#pragma once
#include <Modloader/app/structs/SpaceAttribute.h>
#include <Modloader/app/structs/SpaceAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpaceAttribute {
        inline app::SpaceAttribute__Class** type_info() {
            static app::SpaceAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpaceAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpaceAttribute__Class* get_class() {
            return il2cpp::get_class<app::SpaceAttribute__Class>(type_info(), "UnityEngine", "SpaceAttribute");
        }
        inline app::SpaceAttribute* create() {
            return il2cpp::create_object<app::SpaceAttribute>(get_class());
        }
    } // namespace SpaceAttribute
} // namespace app::classes::types
