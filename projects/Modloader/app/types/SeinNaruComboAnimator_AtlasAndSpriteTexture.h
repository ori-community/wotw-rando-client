#pragma once
#include <Modloader/app/structs/SeinNaruComboAnimator_AtlasAndSpriteTexture.h>
#include <Modloader/app/structs/SeinNaruComboAnimator_AtlasAndSpriteTexture__Array.h>
#include <Modloader/app/structs/SeinNaruComboAnimator_AtlasAndSpriteTexture__Boxed.h>
#include <Modloader/app/structs/SeinNaruComboAnimator_AtlasAndSpriteTexture__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinNaruComboAnimator_AtlasAndSpriteTexture {
        inline app::SeinNaruComboAnimator_AtlasAndSpriteTexture__Class** type_info() {
            static app::SeinNaruComboAnimator_AtlasAndSpriteTexture__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinNaruComboAnimator_AtlasAndSpriteTexture__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinNaruComboAnimator_AtlasAndSpriteTexture__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinNaruComboAnimator_AtlasAndSpriteTexture__Class>(type_info(), "", "SeinNaruComboAnimator", "AtlasAndSpriteTexture");
        }
        inline app::SeinNaruComboAnimator_AtlasAndSpriteTexture* create() {
            return il2cpp::create_object<app::SeinNaruComboAnimator_AtlasAndSpriteTexture>(get_class());
        }
        inline app::SeinNaruComboAnimator_AtlasAndSpriteTexture__Boxed* box(app::SeinNaruComboAnimator_AtlasAndSpriteTexture value) {
            return il2cpp::box_value<app::SeinNaruComboAnimator_AtlasAndSpriteTexture__Boxed>(get_class(), value);
        }
        inline app::SeinNaruComboAnimator_AtlasAndSpriteTexture__Array* create_array(int size) {
            return il2cpp::array_new<app::SeinNaruComboAnimator_AtlasAndSpriteTexture__Array>(get_class(), size);
        }
        inline app::SeinNaruComboAnimator_AtlasAndSpriteTexture__Array* create_array(const std::vector<app::SeinNaruComboAnimator_AtlasAndSpriteTexture>& items) {
            return il2cpp::array_new<app::SeinNaruComboAnimator_AtlasAndSpriteTexture__Array>(get_class(), items);
        }
    } // namespace SeinNaruComboAnimator_AtlasAndSpriteTexture
} // namespace app::classes::types
