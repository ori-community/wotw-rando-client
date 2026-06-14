#pragma once
#include <Modloader/app/structs/SpriteAnimatorSerializer.h>
#include <Modloader/app/structs/SpriteAnimatorSerializer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpriteAnimatorSerializer {
        inline app::SpriteAnimatorSerializer__Class** type_info() {
            static app::SpriteAnimatorSerializer__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpriteAnimatorSerializer__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpriteAnimatorSerializer__Class* get_class() {
            return il2cpp::get_class<app::SpriteAnimatorSerializer__Class>(type_info(), "", "SpriteAnimatorSerializer");
        }
        inline app::SpriteAnimatorSerializer* create() {
            return il2cpp::create_object<app::SpriteAnimatorSerializer>(get_class());
        }
    } // namespace SpriteAnimatorSerializer
} // namespace app::classes::types
