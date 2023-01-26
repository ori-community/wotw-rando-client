#pragma once
#include <Modloader/app/structs/TextureAnimationWithTransitions_TextureAnimationPair.h>
#include <Modloader/app/structs/TextureAnimationWithTransitions_TextureAnimationPair__Array.h>
#include <Modloader/app/structs/TextureAnimationWithTransitions_TextureAnimationPair__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TextureAnimationWithTransitions_TextureAnimationPair {
        inline app::TextureAnimationWithTransitions_TextureAnimationPair__Class** type_info() {
            static app::TextureAnimationWithTransitions_TextureAnimationPair__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TextureAnimationWithTransitions_TextureAnimationPair__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TextureAnimationWithTransitions_TextureAnimationPair__Class* get_class() {
            return il2cpp::get_nested_class<app::TextureAnimationWithTransitions_TextureAnimationPair__Class>(type_info(), "", "TextureAnimationWithTransitions", "TextureAnimationPair");
        }
        inline app::TextureAnimationWithTransitions_TextureAnimationPair* create() {
            return il2cpp::create_object<app::TextureAnimationWithTransitions_TextureAnimationPair>(get_class());
        }
        inline app::TextureAnimationWithTransitions_TextureAnimationPair__Array* create_array(int size) {
            return il2cpp::array_new<app::TextureAnimationWithTransitions_TextureAnimationPair__Array>(get_class(), size);
        }
        inline app::TextureAnimationWithTransitions_TextureAnimationPair__Array* create_array(const std::vector<app::TextureAnimationWithTransitions_TextureAnimationPair*>& items) {
            return il2cpp::array_new<app::TextureAnimationWithTransitions_TextureAnimationPair__Array>(get_class(), items);
        }
    } // namespace TextureAnimationWithTransitions_TextureAnimationPair
} // namespace app::classes::types
