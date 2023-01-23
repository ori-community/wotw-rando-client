#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CharacterVisuals__Class.h>
#include <Modloader/app/structs/CharacterVisuals.h>

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
