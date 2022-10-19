#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SetSpriteAnimator {
        namespace {
            inline app::SetSpriteAnimator__Class* type_info_ref = nullptr;
        }
        inline app::SetSpriteAnimator__Class** type_info = &type_info_ref;
        inline app::SetSpriteAnimator__Class* get_class() {
            return il2cpp::get_class<app::SetSpriteAnimator__Class>(type_info, "", "SetSpriteAnimator");
        }
        inline app::SetSpriteAnimator* create() {
            return il2cpp::create_object<app::SetSpriteAnimator>(get_class());
        }
    } // namespace SetSpriteAnimator
} // namespace app::classes::types
