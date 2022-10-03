#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpriteAnimator__Array {
        namespace {
            app::SpriteAnimator__Array__Class* type_info_ref = nullptr;
        }
        app::SpriteAnimator__Array__Class** type_info = &type_info_ref;
        inline app::SpriteAnimator__Array__Class* get_class() {
            return il2cpp::get_class<app::SpriteAnimator__Array__Class>(type_info, "", "SpriteAnimator[]");
        }
        inline app::SpriteAnimator__Array* create() {
            return il2cpp::create_object<app::SpriteAnimator__Array>(get_class());
        }
    } // namespace SpriteAnimator__Array
} // namespace app::classes::types
