#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinNaruComboAnimator_AtlasAndSpriteTexture {
        namespace {
            app::SeinNaruComboAnimator_AtlasAndSpriteTexture__Class* type_info_ref = nullptr;
        }
        app::SeinNaruComboAnimator_AtlasAndSpriteTexture__Class** type_info = &type_info_ref;
        inline app::SeinNaruComboAnimator_AtlasAndSpriteTexture__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinNaruComboAnimator_AtlasAndSpriteTexture__Class>(type_info, "", "SeinNaruComboAnimator", "AtlasAndSpriteTexture");
        }
        inline app::SeinNaruComboAnimator_AtlasAndSpriteTexture* create() {
            return il2cpp::create_object<app::SeinNaruComboAnimator_AtlasAndSpriteTexture>(get_class());
        }
        inline app::SeinNaruComboAnimator_AtlasAndSpriteTexture__Boxed* box(app::SeinNaruComboAnimator_AtlasAndSpriteTexture value) {
            return il2cpp::box_value<app::SeinNaruComboAnimator_AtlasAndSpriteTexture__Boxed>(get_class(), value);
        }
        inline app::SeinNaruComboAnimator_AtlasAndSpriteTexture__Array* create_array(int size) {
            return il2cpp::array_new<app::SeinNaruComboAnimator_AtlasAndSpriteTexture__Array>(get_class(), size);
        }
        inline app::SeinNaruComboAnimator_AtlasAndSpriteTexture__Array* create_array(const std::vector<app::SeinNaruComboAnimator_AtlasAndSpriteTexture>& items) {
            return il2cpp::array_new<app::SeinNaruComboAnimator_AtlasAndSpriteTexture__Array>(get_class(), items);
        }
    } // namespace SeinNaruComboAnimator_AtlasAndSpriteTexture
} // namespace app::classes::types
