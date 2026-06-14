#pragma once
#include <Modloader/app/structs/DestroyCharacterAction.h>
#include <Modloader/app/structs/DestroyCharacterAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DestroyCharacterAction {
        inline app::DestroyCharacterAction__Class** type_info() {
            static app::DestroyCharacterAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DestroyCharacterAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DestroyCharacterAction__Class* get_class() {
            return il2cpp::get_class<app::DestroyCharacterAction__Class>(type_info(), "", "DestroyCharacterAction");
        }
        inline app::DestroyCharacterAction* create() {
            return il2cpp::create_object<app::DestroyCharacterAction>(get_class());
        }
    } // namespace DestroyCharacterAction
} // namespace app::classes::types
