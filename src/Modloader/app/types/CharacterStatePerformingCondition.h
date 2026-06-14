#pragma once
#include <Modloader/app/structs/CharacterStatePerformingCondition.h>
#include <Modloader/app/structs/CharacterStatePerformingCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CharacterStatePerformingCondition {
        inline app::CharacterStatePerformingCondition__Class** type_info() {
            static app::CharacterStatePerformingCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CharacterStatePerformingCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CharacterStatePerformingCondition__Class* get_class() {
            return il2cpp::get_class<app::CharacterStatePerformingCondition__Class>(type_info(), "", "CharacterStatePerformingCondition");
        }
        inline app::CharacterStatePerformingCondition* create() {
            return il2cpp::create_object<app::CharacterStatePerformingCondition>(get_class());
        }
    } // namespace CharacterStatePerformingCondition
} // namespace app::classes::types
