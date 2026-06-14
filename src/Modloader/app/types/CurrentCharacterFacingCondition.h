#pragma once
#include <Modloader/app/structs/CurrentCharacterFacingCondition.h>
#include <Modloader/app/structs/CurrentCharacterFacingCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CurrentCharacterFacingCondition {
        inline app::CurrentCharacterFacingCondition__Class** type_info() {
            static app::CurrentCharacterFacingCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CurrentCharacterFacingCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CurrentCharacterFacingCondition__Class* get_class() {
            return il2cpp::get_class<app::CurrentCharacterFacingCondition__Class>(type_info(), "", "CurrentCharacterFacingCondition");
        }
        inline app::CurrentCharacterFacingCondition* create() {
            return il2cpp::create_object<app::CurrentCharacterFacingCondition>(get_class());
        }
    } // namespace CurrentCharacterFacingCondition
} // namespace app::classes::types
