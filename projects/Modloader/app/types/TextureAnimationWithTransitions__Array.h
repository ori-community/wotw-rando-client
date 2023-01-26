#pragma once
#include <Modloader/app/structs/TextureAnimationWithTransitions__Array.h>
#include <Modloader/app/structs/TextureAnimationWithTransitions__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TextureAnimationWithTransitions__Array {
        inline app::TextureAnimationWithTransitions__Array__Class** type_info() {
            static app::TextureAnimationWithTransitions__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TextureAnimationWithTransitions__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TextureAnimationWithTransitions__Array__Class* get_class() {
            return il2cpp::get_class<app::TextureAnimationWithTransitions__Array__Class>(type_info(), "", "TextureAnimationWithTransitions[]");
        }
        inline app::TextureAnimationWithTransitions__Array* create() {
            return il2cpp::create_object<app::TextureAnimationWithTransitions__Array>(get_class());
        }
    } // namespace TextureAnimationWithTransitions__Array
} // namespace app::classes::types
