#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TextureAnimationWithTransitions__Array {
        namespace {
            app::TextureAnimationWithTransitions__Array__Class* type_info_ref = nullptr;
        }
        app::TextureAnimationWithTransitions__Array__Class** type_info = &type_info_ref;
        inline app::TextureAnimationWithTransitions__Array__Class* get_class() {
            return il2cpp::get_class<app::TextureAnimationWithTransitions__Array__Class>(type_info, "", "TextureAnimationWithTransitions[]");
        }
        inline app::TextureAnimationWithTransitions__Array* create() {
            return il2cpp::create_object<app::TextureAnimationWithTransitions__Array>(get_class());
        }
    } // namespace TextureAnimationWithTransitions__Array
} // namespace app::classes::types
