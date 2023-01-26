#pragma once
#include <Modloader/app/structs/SpritePackingRotation__Enum.h>
#include <Modloader/app/structs/SpritePackingRotation__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpritePackingRotation__Enum {
        inline app::SpritePackingRotation__Enum__Class** type_info() {
            static app::SpritePackingRotation__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpritePackingRotation__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpritePackingRotation__Enum__Class* get_class() {
            return il2cpp::get_class<app::SpritePackingRotation__Enum__Class>(type_info(), "UnityEngine", "SpritePackingRotation");
        }
        inline app::SpritePackingRotation__Enum* create() {
            return il2cpp::create_object<app::SpritePackingRotation__Enum>(get_class());
        }
    } // namespace SpritePackingRotation__Enum
} // namespace app::classes::types
