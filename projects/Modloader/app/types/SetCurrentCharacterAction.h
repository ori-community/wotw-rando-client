#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SetCurrentCharacterAction__Class.h>
#include <Modloader/app/structs/SetCurrentCharacterAction.h>

namespace app::classes::types {
    namespace SetCurrentCharacterAction {
        namespace {
            inline app::SetCurrentCharacterAction__Class* type_info_ref = nullptr;
        }
        inline app::SetCurrentCharacterAction__Class** type_info = &type_info_ref;
        inline app::SetCurrentCharacterAction__Class* get_class() {
            return il2cpp::get_class<app::SetCurrentCharacterAction__Class>(type_info, "", "SetCurrentCharacterAction");
        }
        inline app::SetCurrentCharacterAction* create() {
            return il2cpp::create_object<app::SetCurrentCharacterAction>(get_class());
        }
    } // namespace SetCurrentCharacterAction
} // namespace app::classes::types
