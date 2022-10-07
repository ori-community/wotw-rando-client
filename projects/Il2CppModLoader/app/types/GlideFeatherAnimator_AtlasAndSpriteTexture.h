#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GlideFeatherAnimator_AtlasAndSpriteTexture {
        namespace {
            app::GlideFeatherAnimator_AtlasAndSpriteTexture__Class* type_info_ref = nullptr;
        }
        app::GlideFeatherAnimator_AtlasAndSpriteTexture__Class** type_info = &type_info_ref;
        inline app::GlideFeatherAnimator_AtlasAndSpriteTexture__Class* get_class() {
            return il2cpp::get_nested_class<app::GlideFeatherAnimator_AtlasAndSpriteTexture__Class>(type_info, "", "GlideFeatherAnimator", "AtlasAndSpriteTexture");
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
