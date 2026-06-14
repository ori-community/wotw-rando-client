#pragma once
#include <Modloader/app/structs/SeinGlowSpell_GlowLightInfo__Array.h>
#include <Modloader/app/structs/SeinGlowSpell_GlowLightInfo__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinGlowSpell_GlowLightInfo__Array {
        inline app::SeinGlowSpell_GlowLightInfo__Array__Class** type_info() {
            static app::SeinGlowSpell_GlowLightInfo__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinGlowSpell_GlowLightInfo__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinGlowSpell_GlowLightInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::SeinGlowSpell_GlowLightInfo__Array__Class>(type_info(), "", "SeinGlowSpell+GlowLightInfo[]");
        }
        inline app::SeinGlowSpell_GlowLightInfo__Array* create() {
            return il2cpp::create_object<app::SeinGlowSpell_GlowLightInfo__Array>(get_class());
        }
    } // namespace SeinGlowSpell_GlowLightInfo__Array
} // namespace app::classes::types
