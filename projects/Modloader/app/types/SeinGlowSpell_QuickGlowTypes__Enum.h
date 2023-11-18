#pragma once
#include <Modloader/app/structs/SeinGlowSpell_QuickGlowTypes__Enum.h>
#include <Modloader/app/structs/SeinGlowSpell_QuickGlowTypes__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinGlowSpell_QuickGlowTypes__Enum {
        inline app::SeinGlowSpell_QuickGlowTypes__Enum__Class** type_info() {
            static app::SeinGlowSpell_QuickGlowTypes__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinGlowSpell_QuickGlowTypes__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinGlowSpell_QuickGlowTypes__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinGlowSpell_QuickGlowTypes__Enum__Class>(type_info(), "", "SeinGlowSpell", "QuickGlowTypes");
        }
        inline app::SeinGlowSpell_QuickGlowTypes__Enum* create() {
            return il2cpp::create_object<app::SeinGlowSpell_QuickGlowTypes__Enum>(get_class());
        }
    } // namespace SeinGlowSpell_QuickGlowTypes__Enum
} // namespace app::classes::types
