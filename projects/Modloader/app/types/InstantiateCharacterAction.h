#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace InstantiateCharacterAction {
        namespace {
            inline app::InstantiateCharacterAction__Class* type_info_ref = nullptr;
        }
        inline app::InstantiateCharacterAction__Class** type_info = &type_info_ref;
        inline app::InstantiateCharacterAction__Class* get_class() {
            return il2cpp::get_class<app::InstantiateCharacterAction__Class>(type_info, "", "InstantiateCharacterAction");
        }
        inline app::InstantiateCharacterAction* create() {
            return il2cpp::create_object<app::InstantiateCharacterAction>(get_class());
        }
    } // namespace InstantiateCharacterAction
} // namespace app::classes::types
