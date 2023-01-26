#pragma once
#include <Modloader/app/structs/SeinGlowSpell_GlowType__Enum.h>
#include <Modloader/app/structs/SeinGlowSpell_GlowType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinGlowSpell_GlowType__Enum {
        inline app::SeinGlowSpell_GlowType__Enum__Class** type_info() {
            static app::SeinGlowSpell_GlowType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinGlowSpell_GlowType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinGlowSpell_GlowType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinGlowSpell_GlowType__Enum__Class>(type_info(), "", "SeinGlowSpell", "GlowType");
        }
        inline app::SeinGlowSpell_GlowType__Enum* create() {
            return il2cpp::create_object<app::SeinGlowSpell_GlowType__Enum>(get_class());
        }
    } // namespace SeinGlowSpell_GlowType__Enum
} // namespace app::classes::types
