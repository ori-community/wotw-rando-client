#pragma once
#include <Modloader/app/structs/SeinNaruComboAnimator_AtlasAndSpriteTexture__Array.h>
#include <Modloader/app/structs/SeinNaruComboAnimator_AtlasAndSpriteTexture__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinNaruComboAnimator_AtlasAndSpriteTexture__Array {
        inline app::SeinNaruComboAnimator_AtlasAndSpriteTexture__Array__Class** type_info() {
            static app::SeinNaruComboAnimator_AtlasAndSpriteTexture__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinNaruComboAnimator_AtlasAndSpriteTexture__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinNaruComboAnimator_AtlasAndSpriteTexture__Array__Class* get_class() {
            return il2cpp::get_class<app::SeinNaruComboAnimator_AtlasAndSpriteTexture__Array__Class>(type_info(), "", "SeinNaruComboAnimator+AtlasAndSpriteTexture[]");
        }
        inline app::SeinNaruComboAnimator_AtlasAndSpriteTexture__Array* create() {
            return il2cpp::create_object<app::SeinNaruComboAnimator_AtlasAndSpriteTexture__Array>(get_class());
        }
    } // namespace SeinNaruComboAnimator_AtlasAndSpriteTexture__Array
} // namespace app::classes::types
