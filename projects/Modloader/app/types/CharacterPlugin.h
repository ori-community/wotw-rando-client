#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CharacterPlugin {
        namespace {
            inline app::CharacterPlugin__Class* type_info_ref = nullptr;
        }
        inline app::CharacterPlugin__Class** type_info = &type_info_ref;
        inline app::CharacterPlugin__Class* get_class() {
            return il2cpp::get_class<app::CharacterPlugin__Class>(type_info, "", "CharacterPlugin");
        }
        inline app::CharacterPlugin* create() {
            return il2cpp::create_object<app::CharacterPlugin>(get_class());
        }
    } // namespace CharacterPlugin
} // namespace app::classes::types
