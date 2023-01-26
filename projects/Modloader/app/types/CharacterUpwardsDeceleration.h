#pragma once
#include <Modloader/app/structs/CharacterUpwardsDeceleration.h>
#include <Modloader/app/structs/CharacterUpwardsDeceleration__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CharacterUpwardsDeceleration {
        inline app::CharacterUpwardsDeceleration__Class** type_info() {
            static app::CharacterUpwardsDeceleration__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CharacterUpwardsDeceleration__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CharacterUpwardsDeceleration__Class* get_class() {
            return il2cpp::get_class<app::CharacterUpwardsDeceleration__Class>(type_info(), "", "CharacterUpwardsDeceleration");
        }
        inline app::CharacterUpwardsDeceleration* create() {
            return il2cpp::create_object<app::CharacterUpwardsDeceleration>(get_class());
        }
    } // namespace CharacterUpwardsDeceleration
} // namespace app::classes::types
