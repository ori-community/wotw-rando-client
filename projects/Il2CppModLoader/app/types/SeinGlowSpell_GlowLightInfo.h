#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinGlowSpell_GlowLightInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SeinGlowSpell_GlowLightInfo__Class** type_info;
        inline app::SeinGlowSpell_GlowLightInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinGlowSpell_GlowLightInfo__Class>(type_info, "", "SeinGlowSpell", "GlowLightInfo");
        }
        inline app::SeinGlowSpell_GlowLightInfo* create() {
            return il2cpp::create_object<app::SeinGlowSpell_GlowLightInfo>(get_class());
        }
        inline app::SeinGlowSpell_GlowLightInfo__Array* create_array(int size) {
            return il2cpp::array_new<app::SeinGlowSpell_GlowLightInfo__Array>(get_class(), size);
        }
    } // namespace SeinGlowSpell_GlowLightInfo
} // namespace app::classes::types
