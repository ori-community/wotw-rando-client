#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TextureAnimationWithTransitions {
        namespace {
            app::TextureAnimationWithTransitions__Class* type_info_ref = nullptr;
        }
        app::TextureAnimationWithTransitions__Class** type_info = &type_info_ref;
        inline app::TextureAnimationWithTransitions__Class* get_class() {
            return il2cpp::get_class<app::TextureAnimationWithTransitions__Class>(type_info, "", "TextureAnimationWithTransitions");
        }
        inline app::TextureAnimationWithTransitions* create() {
            return il2cpp::create_object<app::TextureAnimationWithTransitions>(get_class());
        }
        inline app::TextureAnimationWithTransitions__Array* create_array(int size) {
            return il2cpp::array_new<app::TextureAnimationWithTransitions__Array>(get_class(), size);
        }
    } // namespace TextureAnimationWithTransitions
} // namespace app::classes::types
