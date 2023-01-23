#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CharacterStateComboAdapter__Class.h>
#include <Modloader/app/structs/CharacterStateComboAdapter.h>

namespace app::classes::types {
    namespace CharacterStateComboAdapter {
        namespace {
            inline app::CharacterStateComboAdapter__Class* type_info_ref = nullptr;
        }
        inline app::CharacterStateComboAdapter__Class** type_info = &type_info_ref;
        inline app::CharacterStateComboAdapter__Class* get_class() {
            return il2cpp::get_class<app::CharacterStateComboAdapter__Class>(type_info, "Moon.ComboSystem", "CharacterStateComboAdapter");
        }
        inline app::CharacterStateComboAdapter* create() {
            return il2cpp::create_object<app::CharacterStateComboAdapter>(get_class());
        }
    } // namespace CharacterStateComboAdapter
} // namespace app::classes::types
