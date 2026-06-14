#pragma once
#include <Modloader/app/structs/SpriteState__Array.h>
#include <Modloader/app/structs/SpriteState__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpriteState__Array {
        inline app::SpriteState__Array__Class** type_info() {
            static app::SpriteState__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpriteState__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpriteState__Array__Class* get_class() {
            return il2cpp::get_class<app::SpriteState__Array__Class>(type_info(), "UnityEngine.UI", "SpriteState[]");
        }
        inline app::SpriteState__Array* create() {
            return il2cpp::create_object<app::SpriteState__Array>(get_class());
        }
    } // namespace SpriteState__Array
} // namespace app::classes::types
