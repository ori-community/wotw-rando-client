#pragma once
#include <Modloader/app/structs/SpriteTransparencyAnimator_WrapMode__Enum.h>
#include <Modloader/app/structs/SpriteTransparencyAnimator_WrapMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpriteTransparencyAnimator_WrapMode__Enum {
        inline app::SpriteTransparencyAnimator_WrapMode__Enum__Class** type_info() {
            static app::SpriteTransparencyAnimator_WrapMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpriteTransparencyAnimator_WrapMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpriteTransparencyAnimator_WrapMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SpriteTransparencyAnimator_WrapMode__Enum__Class>(type_info(), "Moon.Timeline", "SpriteTransparencyAnimator", "WrapMode");
        }
        inline app::SpriteTransparencyAnimator_WrapMode__Enum* create() {
            return il2cpp::create_object<app::SpriteTransparencyAnimator_WrapMode__Enum>(get_class());
        }
    } // namespace SpriteTransparencyAnimator_WrapMode__Enum
} // namespace app::classes::types
