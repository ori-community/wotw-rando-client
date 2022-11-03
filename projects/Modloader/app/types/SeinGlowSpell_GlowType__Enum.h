#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinGlowSpell_GlowType__Enum {
        namespace {
            inline app::SeinGlowSpell_GlowType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::SeinGlowSpell_GlowType__Enum__Class** type_info = &type_info_ref;
        inline app::SeinGlowSpell_GlowType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinGlowSpell_GlowType__Enum__Class>(type_info, "", "SeinGlowSpell", "GlowType");
        }
        inline app::SeinGlowSpell_GlowType__Enum* create() {
            return il2cpp::create_object<app::SeinGlowSpell_GlowType__Enum>(get_class());
        }
    } // namespace SeinGlowSpell_GlowType__Enum
} // namespace app::classes::types
