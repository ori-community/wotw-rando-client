#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DestroyCharacterAction {
        namespace {
            inline app::DestroyCharacterAction__Class* type_info_ref = nullptr;
        }
        inline app::DestroyCharacterAction__Class** type_info = &type_info_ref;
        inline app::DestroyCharacterAction__Class* get_class() {
            return il2cpp::get_class<app::DestroyCharacterAction__Class>(type_info, "", "DestroyCharacterAction");
        }
        inline app::DestroyCharacterAction* create() {
            return il2cpp::create_object<app::DestroyCharacterAction>(get_class());
        }
    } // namespace DestroyCharacterAction
} // namespace app::classes::types
