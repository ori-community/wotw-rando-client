#pragma once
#include <Modloader/app/structs/TextureAnimation_AnimationTextureInfo__Array.h>
#include <Modloader/app/structs/TextureAnimation_AnimationTextureInfo__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TextureAnimation_AnimationTextureInfo__Array {
        inline app::TextureAnimation_AnimationTextureInfo__Array__Class** type_info() {
            static app::TextureAnimation_AnimationTextureInfo__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TextureAnimation_AnimationTextureInfo__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TextureAnimation_AnimationTextureInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::TextureAnimation_AnimationTextureInfo__Array__Class>(type_info(), "", "TextureAnimation+AnimationTextureInfo[]");
        }
        inline app::TextureAnimation_AnimationTextureInfo__Array* create() {
            return il2cpp::create_object<app::TextureAnimation_AnimationTextureInfo__Array>(get_class());
        }
    } // namespace TextureAnimation_AnimationTextureInfo__Array
} // namespace app::classes::types
