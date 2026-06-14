#pragma once
#include <Modloader/app/structs/SeinGlowSpell_GlowLightState__Enum.h>
#include <Modloader/app/structs/SeinGlowSpell_GlowLightState__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinGlowSpell_GlowLightState__Enum {
        inline app::SeinGlowSpell_GlowLightState__Enum__Class** type_info() {
            static app::SeinGlowSpell_GlowLightState__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinGlowSpell_GlowLightState__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinGlowSpell_GlowLightState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinGlowSpell_GlowLightState__Enum__Class>(type_info(), "", "SeinGlowSpell", "GlowLightState");
        }
        inline app::SeinGlowSpell_GlowLightState__Enum* create() {
            return il2cpp::create_object<app::SeinGlowSpell_GlowLightState__Enum>(get_class());
        }
    } // namespace SeinGlowSpell_GlowLightState__Enum
} // namespace app::classes::types
