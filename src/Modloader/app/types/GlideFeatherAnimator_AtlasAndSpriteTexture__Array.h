#pragma once
#include <Modloader/app/structs/GlideFeatherAnimator_AtlasAndSpriteTexture__Array.h>
#include <Modloader/app/structs/GlideFeatherAnimator_AtlasAndSpriteTexture__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GlideFeatherAnimator_AtlasAndSpriteTexture__Array {
        inline app::GlideFeatherAnimator_AtlasAndSpriteTexture__Array__Class** type_info() {
            static app::GlideFeatherAnimator_AtlasAndSpriteTexture__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GlideFeatherAnimator_AtlasAndSpriteTexture__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GlideFeatherAnimator_AtlasAndSpriteTexture__Array__Class* get_class() {
            return il2cpp::get_class<app::GlideFeatherAnimator_AtlasAndSpriteTexture__Array__Class>(type_info(), "", "GlideFeatherAnimator+AtlasAndSpriteTexture[]");
        }
        inline app::GlideFeatherAnimator_AtlasAndSpriteTexture__Array* create() {
            return il2cpp::create_object<app::GlideFeatherAnimator_AtlasAndSpriteTexture__Array>(get_class());
        }
    } // namespace GlideFeatherAnimator_AtlasAndSpriteTexture__Array
} // namespace app::classes::types
