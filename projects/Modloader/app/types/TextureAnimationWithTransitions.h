#pragma once
#include <Modloader/app/structs/TextureAnimationWithTransitions.h>
#include <Modloader/app/structs/TextureAnimationWithTransitions__Array.h>
#include <Modloader/app/structs/TextureAnimationWithTransitions__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TextureAnimationWithTransitions {
        inline app::TextureAnimationWithTransitions__Class** type_info() {
            static app::TextureAnimationWithTransitions__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TextureAnimationWithTransitions__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TextureAnimationWithTransitions__Class* get_class() {
            return il2cpp::get_class<app::TextureAnimationWithTransitions__Class>(type_info(), "", "TextureAnimationWithTransitions");
        }
        inline app::TextureAnimationWithTransitions* create() {
            return il2cpp::create_object<app::TextureAnimationWithTransitions>(get_class());
        }
        inline app::TextureAnimationWithTransitions__Array* create_array(int size) {
            return il2cpp::array_new<app::TextureAnimationWithTransitions__Array>(get_class(), size);
        }
        inline app::TextureAnimationWithTransitions__Array* create_array(const std::vector<app::TextureAnimationWithTransitions*>& items) {
            return il2cpp::array_new<app::TextureAnimationWithTransitions__Array>(get_class(), items);
        }
    } // namespace TextureAnimationWithTransitions
} // namespace app::classes::types
