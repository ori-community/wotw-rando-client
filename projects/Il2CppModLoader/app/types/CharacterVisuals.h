#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CharacterVisuals {
        namespace {
            inline app::CharacterVisuals__Class* type_info_ref = nullptr;
        }
        inline app::CharacterVisuals__Class** type_info = &type_info_ref;
        inline app::CharacterVisuals__Class* get_class() {
            return il2cpp::get_class<app::CharacterVisuals__Class>(type_info, "", "CharacterVisuals");
        }
        inline app::CharacterVisuals* create() {
            return il2cpp::create_object<app::CharacterVisuals>(get_class());
        }
    } // namespace CharacterVisuals
} // namespace app::classes::types
