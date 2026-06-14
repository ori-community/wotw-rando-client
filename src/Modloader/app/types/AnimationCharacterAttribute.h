#pragma once
#include <Modloader/app/structs/AnimationCharacterAttribute.h>
#include <Modloader/app/structs/AnimationCharacterAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AnimationCharacterAttribute {
        inline app::AnimationCharacterAttribute__Class** type_info() {
            static app::AnimationCharacterAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AnimationCharacterAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AnimationCharacterAttribute__Class* get_class() {
            return il2cpp::get_class<app::AnimationCharacterAttribute__Class>(type_info(), "Moon", "AnimationCharacterAttribute");
        }
        inline app::AnimationCharacterAttribute* create() {
            return il2cpp::create_object<app::AnimationCharacterAttribute>(get_class());
        }
    } // namespace AnimationCharacterAttribute
} // namespace app::classes::types
