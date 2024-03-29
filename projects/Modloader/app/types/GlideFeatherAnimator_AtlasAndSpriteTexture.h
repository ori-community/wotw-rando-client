#pragma once
#include <Modloader/app/structs/GlideFeatherAnimator_AtlasAndSpriteTexture.h>
#include <Modloader/app/structs/GlideFeatherAnimator_AtlasAndSpriteTexture__Array.h>
#include <Modloader/app/structs/GlideFeatherAnimator_AtlasAndSpriteTexture__Boxed.h>
#include <Modloader/app/structs/GlideFeatherAnimator_AtlasAndSpriteTexture__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GlideFeatherAnimator_AtlasAndSpriteTexture {
        inline app::GlideFeatherAnimator_AtlasAndSpriteTexture__Class** type_info() {
            static app::GlideFeatherAnimator_AtlasAndSpriteTexture__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GlideFeatherAnimator_AtlasAndSpriteTexture__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GlideFeatherAnimator_AtlasAndSpriteTexture__Class* get_class() {
            return il2cpp::get_nested_class<app::GlideFeatherAnimator_AtlasAndSpriteTexture__Class>(type_info(), "", "GlideFeatherAnimator", "AtlasAndSpriteTexture");
        }
        inline app::GlideFeatherAnimator_AtlasAndSpriteTexture* create() {
            return il2cpp::create_object<app::GlideFeatherAnimator_AtlasAndSpriteTexture>(get_class());
        }
        inline app::GlideFeatherAnimator_AtlasAndSpriteTexture__Boxed* box(app::GlideFeatherAnimator_AtlasAndSpriteTexture value) {
            return il2cpp::box_value<app::GlideFeatherAnimator_AtlasAndSpriteTexture__Boxed>(get_class(), value);
        }
        inline app::GlideFeatherAnimator_AtlasAndSpriteTexture__Array* create_array(int size) {
            return il2cpp::array_new<app::GlideFeatherAnimator_AtlasAndSpriteTexture__Array>(get_class(), size);
        }
        inline app::GlideFeatherAnimator_AtlasAndSpriteTexture__Array* create_array(const std::vector<app::GlideFeatherAnimator_AtlasAndSpriteTexture>& items) {
            return il2cpp::array_new<app::GlideFeatherAnimator_AtlasAndSpriteTexture__Array>(get_class(), items);
        }
    } // namespace GlideFeatherAnimator_AtlasAndSpriteTexture
} // namespace app::classes::types
