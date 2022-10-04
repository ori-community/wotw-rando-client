#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IMoonEffectCompositionRoot {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IMoonEffectCompositionRoot__Class** type_info;
        inline app::IMoonEffectCompositionRoot__Class* get_class() {
            return il2cpp::get_class<app::IMoonEffectCompositionRoot__Class>(type_info, "Moon.EffectsFramework", "IMoonEffectCompositionRoot");
        }
        inline app::IMoonEffectCompositionRoot* create() {
            return il2cpp::create_object<app::IMoonEffectCompositionRoot>(get_class());
        }
    } // namespace IMoonEffectCompositionRoot
} // namespace app::classes::types
