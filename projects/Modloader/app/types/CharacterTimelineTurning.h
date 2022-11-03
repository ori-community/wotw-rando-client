#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CharacterTimelineTurning {
        namespace {
            inline app::CharacterTimelineTurning__Class* type_info_ref = nullptr;
        }
        inline app::CharacterTimelineTurning__Class** type_info = &type_info_ref;
        inline app::CharacterTimelineTurning__Class* get_class() {
            return il2cpp::get_class<app::CharacterTimelineTurning__Class>(type_info, "", "CharacterTimelineTurning");
        }
        inline app::CharacterTimelineTurning* create() {
            return il2cpp::create_object<app::CharacterTimelineTurning>(get_class());
        }
    } // namespace CharacterTimelineTurning
} // namespace app::classes::types
