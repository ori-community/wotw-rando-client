#pragma once
#include <Modloader/app/structs/CharacterApplyFrictionToSpeed.h>
#include <Modloader/app/structs/CharacterApplyFrictionToSpeed__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CharacterApplyFrictionToSpeed {
        inline app::CharacterApplyFrictionToSpeed__Class** type_info() {
            static app::CharacterApplyFrictionToSpeed__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CharacterApplyFrictionToSpeed__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CharacterApplyFrictionToSpeed__Class* get_class() {
            return il2cpp::get_class<app::CharacterApplyFrictionToSpeed__Class>(type_info(), "", "CharacterApplyFrictionToSpeed");
        }
        inline app::CharacterApplyFrictionToSpeed* create() {
            return il2cpp::create_object<app::CharacterApplyFrictionToSpeed>(get_class());
        }
    } // namespace CharacterApplyFrictionToSpeed
} // namespace app::classes::types
