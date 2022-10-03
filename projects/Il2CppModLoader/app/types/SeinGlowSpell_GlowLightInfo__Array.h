#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinGlowSpell_GlowLightInfo__Array {
        namespace {
            app::SeinGlowSpell_GlowLightInfo__Array__Class* type_info_ref = nullptr;
        }
        app::SeinGlowSpell_GlowLightInfo__Array__Class** type_info = &type_info_ref;
        inline app::SeinGlowSpell_GlowLightInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::SeinGlowSpell_GlowLightInfo__Array__Class>(type_info, "", "SeinGlowSpell+GlowLightInfo[]");
        }
        inline app::SeinGlowSpell_GlowLightInfo__Array* create() {
            return il2cpp::create_object<app::SeinGlowSpell_GlowLightInfo__Array>(get_class());
        }
    } // namespace SeinGlowSpell_GlowLightInfo__Array
} // namespace app::classes::types
