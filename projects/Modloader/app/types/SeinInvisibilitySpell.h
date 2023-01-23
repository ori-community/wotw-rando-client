#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SeinInvisibilitySpell__Class.h>
#include <Modloader/app/structs/SeinInvisibilitySpell.h>

namespace app::classes::types {
    namespace SeinInvisibilitySpell {
        namespace {
            inline app::SeinInvisibilitySpell__Class* type_info_ref = nullptr;
        }
        inline app::SeinInvisibilitySpell__Class** type_info = &type_info_ref;
        inline app::SeinInvisibilitySpell__Class* get_class() {
            return il2cpp::get_class<app::SeinInvisibilitySpell__Class>(type_info, "", "SeinInvisibilitySpell");
        }
        inline app::SeinInvisibilitySpell* create() {
            return il2cpp::create_object<app::SeinInvisibilitySpell>(get_class());
        }
    } // namespace SeinInvisibilitySpell
} // namespace app::classes::types
