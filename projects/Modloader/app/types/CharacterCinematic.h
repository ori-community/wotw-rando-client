#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CharacterCinematic {
        namespace {
            inline app::CharacterCinematic__Class* type_info_ref = nullptr;
        }
        inline app::CharacterCinematic__Class** type_info = &type_info_ref;
        inline app::CharacterCinematic__Class* get_class() {
            return il2cpp::get_class<app::CharacterCinematic__Class>(type_info, "", "CharacterCinematic");
        }
        inline app::CharacterCinematic* create() {
            return il2cpp::create_object<app::CharacterCinematic>(get_class());
        }
    } // namespace CharacterCinematic
} // namespace app::classes::types
