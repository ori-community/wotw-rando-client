#pragma once
#include <Modloader/app/structs/SpritePackingMode__Enum.h>
#include <Modloader/app/structs/SpritePackingMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpritePackingMode__Enum {
        inline app::SpritePackingMode__Enum__Class** type_info() {
            static app::SpritePackingMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpritePackingMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpritePackingMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::SpritePackingMode__Enum__Class>(type_info(), "UnityEngine", "SpritePackingMode");
        }
        inline app::SpritePackingMode__Enum* create() {
            return il2cpp::create_object<app::SpritePackingMode__Enum>(get_class());
        }
    } // namespace SpritePackingMode__Enum
} // namespace app::classes::types
