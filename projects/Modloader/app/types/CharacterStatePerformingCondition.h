#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CharacterStatePerformingCondition__Class.h>
#include <Modloader/app/structs/CharacterStatePerformingCondition.h>

namespace app::classes::types {
    namespace CharacterStatePerformingCondition {
        namespace {
            inline app::CharacterStatePerformingCondition__Class* type_info_ref = nullptr;
        }
        inline app::CharacterStatePerformingCondition__Class** type_info = &type_info_ref;
        inline app::CharacterStatePerformingCondition__Class* get_class() {
            return il2cpp::get_class<app::CharacterStatePerformingCondition__Class>(type_info, "", "CharacterStatePerformingCondition");
        }
        inline app::CharacterStatePerformingCondition* create() {
            return il2cpp::create_object<app::CharacterStatePerformingCondition>(get_class());
        }
    } // namespace CharacterStatePerformingCondition
} // namespace app::classes::types
