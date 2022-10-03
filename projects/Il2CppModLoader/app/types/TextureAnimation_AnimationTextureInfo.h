#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TextureAnimation_AnimationTextureInfo {
        namespace {
            app::TextureAnimation_AnimationTextureInfo__Class* type_info_ref = nullptr;
        }
        app::TextureAnimation_AnimationTextureInfo__Class** type_info = &type_info_ref;
        inline app::TextureAnimation_AnimationTextureInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::TextureAnimation_AnimationTextureInfo__Class>(type_info, "", "TextureAnimation", "AnimationTextureInfo");
        }
        inline app::TextureAnimation_AnimationTextureInfo* create() {
            return il2cpp::create_object<app::TextureAnimation_AnimationTextureInfo>(get_class());
        }
        inline app::TextureAnimation_AnimationTextureInfo__Boxed* box(app::TextureAnimation_AnimationTextureInfo value) {
            return il2cpp::box_value<app::TextureAnimation_AnimationTextureInfo__Boxed>(get_class(), value);
        }
        inline app::TextureAnimation_AnimationTextureInfo__Array* create_array(int size) {
            return il2cpp::array_new<app::TextureAnimation_AnimationTextureInfo__Array>(get_class(), size);
        }
    } // namespace TextureAnimation_AnimationTextureInfo
} // namespace app::classes::types
