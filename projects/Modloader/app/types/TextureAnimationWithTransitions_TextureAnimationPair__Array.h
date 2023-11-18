#pragma once
#include <Modloader/app/structs/TextureAnimationWithTransitions_TextureAnimationPair__Array.h>
#include <Modloader/app/structs/TextureAnimationWithTransitions_TextureAnimationPair__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TextureAnimationWithTransitions_TextureAnimationPair__Array {
        inline app::TextureAnimationWithTransitions_TextureAnimationPair__Array__Class** type_info() {
            static app::TextureAnimationWithTransitions_TextureAnimationPair__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TextureAnimationWithTransitions_TextureAnimationPair__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TextureAnimationWithTransitions_TextureAnimationPair__Array__Class* get_class() {
            return il2cpp::get_class<app::TextureAnimationWithTransitions_TextureAnimationPair__Array__Class>(type_info(), "", "TextureAnimationWithTransitions+TextureAnimationPair[]");
        }
        inline app::TextureAnimationWithTransitions_TextureAnimationPair__Array* create() {
            return il2cpp::create_object<app::TextureAnimationWithTransitions_TextureAnimationPair__Array>(get_class());
        }
    } // namespace TextureAnimationWithTransitions_TextureAnimationPair__Array
} // namespace app::classes::types
