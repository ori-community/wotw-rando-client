#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinGlowSpell_GlowState__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SeinGlowSpell_GlowState__Enum__Class** type_info;
        inline app::SeinGlowSpell_GlowState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinGlowSpell_GlowState__Enum__Class>(type_info, "", "SeinGlowSpell", "GlowState");
        }
        inline app::SeinGlowSpell_GlowState__Enum* create() {
            return il2cpp::create_object<app::SeinGlowSpell_GlowState__Enum>(get_class());
        }
    } // namespace SeinGlowSpell_GlowState__Enum
} // namespace app::classes::types
