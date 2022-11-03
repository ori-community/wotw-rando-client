#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CharacterCapsuleController {
        namespace {
            inline app::CharacterCapsuleController__Class* type_info_ref = nullptr;
        }
        inline app::CharacterCapsuleController__Class** type_info = &type_info_ref;
        inline app::CharacterCapsuleController__Class* get_class() {
            return il2cpp::get_class<app::CharacterCapsuleController__Class>(type_info, "", "CharacterCapsuleController");
        }
        inline app::CharacterCapsuleController* create() {
            return il2cpp::create_object<app::CharacterCapsuleController>(get_class());
        }
    } // namespace CharacterCapsuleController
} // namespace app::classes::types
