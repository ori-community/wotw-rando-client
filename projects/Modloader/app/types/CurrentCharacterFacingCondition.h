#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CurrentCharacterFacingCondition__Class.h>
#include <Modloader/app/structs/CurrentCharacterFacingCondition.h>

namespace app::classes::types {
    namespace CurrentCharacterFacingCondition {
        namespace {
            inline app::CurrentCharacterFacingCondition__Class* type_info_ref = nullptr;
        }
        inline app::CurrentCharacterFacingCondition__Class** type_info = &type_info_ref;
        inline app::CurrentCharacterFacingCondition__Class* get_class() {
            return il2cpp::get_class<app::CurrentCharacterFacingCondition__Class>(type_info, "", "CurrentCharacterFacingCondition");
        }
        inline app::CurrentCharacterFacingCondition* create() {
            return il2cpp::create_object<app::CurrentCharacterFacingCondition>(get_class());
        }
    } // namespace CurrentCharacterFacingCondition
} // namespace app::classes::types
