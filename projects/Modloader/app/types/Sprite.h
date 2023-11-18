#pragma once
#include <Modloader/app/structs/Sprite.h>
#include <Modloader/app/structs/Sprite__Array.h>
#include <Modloader/app/structs/Sprite__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Sprite {
        inline app::Sprite__Class** type_info() {
            static app::Sprite__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Sprite__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Sprite__Class* get_class() {
            return il2cpp::get_class<app::Sprite__Class>(type_info(), "UnityEngine", "Sprite");
        }
        inline app::Sprite* create() {
            return il2cpp::create_object<app::Sprite>(get_class());
        }
        inline app::Sprite__Array* create_array(int size) {
            return il2cpp::array_new<app::Sprite__Array>(get_class(), size);
        }
        inline app::Sprite__Array* create_array(const std::vector<app::Sprite*>& items) {
            return il2cpp::array_new<app::Sprite__Array>(get_class(), items);
        }
    } // namespace Sprite
} // namespace app::classes::types
