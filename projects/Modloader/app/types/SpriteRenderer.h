#pragma once
#include <Modloader/app/structs/SpriteRenderer.h>
#include <Modloader/app/structs/SpriteRenderer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpriteRenderer {
        inline app::SpriteRenderer__Class** type_info() {
            static app::SpriteRenderer__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpriteRenderer__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpriteRenderer__Class* get_class() {
            return il2cpp::get_class<app::SpriteRenderer__Class>(type_info(), "UnityEngine", "SpriteRenderer");
        }
        inline app::SpriteRenderer* create() {
            return il2cpp::create_object<app::SpriteRenderer>(get_class());
        }
    } // namespace SpriteRenderer
} // namespace app::classes::types
