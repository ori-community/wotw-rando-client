#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TextureAnimationWithTransitions_TextureAnimationPair {
        namespace {
            app::TextureAnimationWithTransitions_TextureAnimationPair__Class* type_info_ref = nullptr;
        }
        app::TextureAnimationWithTransitions_TextureAnimationPair__Class** type_info = &type_info_ref;
        inline app::TextureAnimationWithTransitions_TextureAnimationPair__Class* get_class() {
            return il2cpp::get_nested_class<app::TextureAnimationWithTransitions_TextureAnimationPair__Class>(type_info, "", "TextureAnimationWithTransitions", "TextureAnimationPair");
        }
        inline app::TextureAnimationWithTransitions_TextureAnimationPair* create() {
            return il2cpp::create_object<app::TextureAnimationWithTransitions_TextureAnimationPair>(get_class());
        }
        inline app::TextureAnimationWithTransitions_TextureAnimationPair__Array* create_array(int size) {
            return il2cpp::array_new<app::TextureAnimationWithTransitions_TextureAnimationPair__Array>(get_class(), size);
        }
    } // namespace TextureAnimationWithTransitions_TextureAnimationPair
} // namespace app::classes::types
