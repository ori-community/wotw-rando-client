#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TextureAnimationWithTransitions {
        namespace {
            inline app::TextureAnimationWithTransitions__Class* type_info_ref = nullptr;
        }
        inline app::TextureAnimationWithTransitions__Class** type_info = &type_info_ref;
        inline app::TextureAnimationWithTransitions__Class* get_class() {
            return il2cpp::get_class<app::TextureAnimationWithTransitions__Class>(type_info, "", "TextureAnimationWithTransitions");
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
