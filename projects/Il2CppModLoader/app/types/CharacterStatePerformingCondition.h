#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CharacterStatePerformingCondition {
        namespace {
            app::CharacterStatePerformingCondition__Class* type_info_ref = nullptr;
        }
        app::CharacterStatePerformingCondition__Class** type_info = &type_info_ref;
        inline app::CharacterStatePerformingCondition__Class* get_class() {
            return il2cpp::get_class<app::CharacterStatePerformingCondition__Class>(type_info, "", "CharacterStatePerformingCondition");
        }
        inline app::CharacterStatePerformingCondition* create() {
            return il2cpp::create_object<app::CharacterStatePerformingCondition>(get_class());
        }
    } // namespace CharacterStatePerformingCondition
} // namespace app::classes::types
