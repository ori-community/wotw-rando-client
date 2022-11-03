#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CharacterApplyFrictionToSpeed {
        namespace {
            inline app::CharacterApplyFrictionToSpeed__Class* type_info_ref = nullptr;
        }
        inline app::CharacterApplyFrictionToSpeed__Class** type_info = &type_info_ref;
        inline app::CharacterApplyFrictionToSpeed__Class* get_class() {
            return il2cpp::get_class<app::CharacterApplyFrictionToSpeed__Class>(type_info, "", "CharacterApplyFrictionToSpeed");
        }
        inline app::CharacterApplyFrictionToSpeed* create() {
            return il2cpp::create_object<app::CharacterApplyFrictionToSpeed>(get_class());
        }
    } // namespace CharacterApplyFrictionToSpeed
} // namespace app::classes::types
