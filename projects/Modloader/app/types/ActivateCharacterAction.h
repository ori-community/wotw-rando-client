#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ActivateCharacterAction__Class.h>
#include <Modloader/app/structs/ActivateCharacterAction.h>

namespace app::classes::types {
    namespace ActivateCharacterAction {
        namespace {
            inline app::ActivateCharacterAction__Class* type_info_ref = nullptr;
        }
        inline app::ActivateCharacterAction__Class** type_info = &type_info_ref;
        inline app::ActivateCharacterAction__Class* get_class() {
            return il2cpp::get_class<app::ActivateCharacterAction__Class>(type_info, "", "ActivateCharacterAction");
        }
        inline app::ActivateCharacterAction* create() {
            return il2cpp::create_object<app::ActivateCharacterAction>(get_class());
        }
    } // namespace ActivateCharacterAction
} // namespace app::classes::types
