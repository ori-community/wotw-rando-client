#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonEffectComponentCache {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MoonEffectComponentCache__Class** type_info;
        inline app::MoonEffectComponentCache__Class* get_class() {
            return il2cpp::get_class<app::MoonEffectComponentCache__Class>(type_info, "Moon.EffectsFramework", "MoonEffectComponentCache");
        }
        inline app::MoonEffectComponentCache* create() {
            return il2cpp::create_object<app::MoonEffectComponentCache>(get_class());
        }
    } // namespace MoonEffectComponentCache
} // namespace app::classes::types
