#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinMeditateSpell {
        namespace {
            inline app::SeinMeditateSpell__Class* type_info_ref = nullptr;
        }
        inline app::SeinMeditateSpell__Class** type_info = &type_info_ref;
        inline app::SeinMeditateSpell__Class* get_class() {
            return il2cpp::get_class<app::SeinMeditateSpell__Class>(type_info, "", "SeinMeditateSpell");
        }
        inline app::SeinMeditateSpell* create() {
            return il2cpp::create_object<app::SeinMeditateSpell>(get_class());
        }
    } // namespace SeinMeditateSpell
} // namespace app::classes::types
