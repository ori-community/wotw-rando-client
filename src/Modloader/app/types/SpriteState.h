#pragma once
#include <Modloader/app/structs/SpriteState.h>
#include <Modloader/app/structs/SpriteState__Array.h>
#include <Modloader/app/structs/SpriteState__Boxed.h>
#include <Modloader/app/structs/SpriteState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpriteState {
        inline app::SpriteState__Class** type_info() {
            static app::SpriteState__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpriteState__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpriteState__Class* get_class() {
            return il2cpp::get_class<app::SpriteState__Class>(type_info(), "UnityEngine.UI", "SpriteState");
        }
        inline app::SpriteState* create() {
            return il2cpp::create_object<app::SpriteState>(get_class());
        }
        inline app::SpriteState__Boxed* box(app::SpriteState value) {
            return il2cpp::box_value<app::SpriteState__Boxed>(get_class(), value);
        }
        inline app::SpriteState__Array* create_array(int size) {
            return il2cpp::array_new<app::SpriteState__Array>(get_class(), size);
        }
        inline app::SpriteState__Array* create_array(const std::vector<app::SpriteState>& items) {
            return il2cpp::array_new<app::SpriteState__Array>(get_class(), items);
        }
    } // namespace SpriteState
} // namespace app::classes::types
