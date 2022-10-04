#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IMoonEffectComposition {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IMoonEffectComposition__Class** type_info;
        inline app::IMoonEffectComposition__Class* get_class() {
            return il2cpp::get_class<app::IMoonEffectComposition__Class>(type_info, "Moon.EffectsFramework", "IMoonEffectComposition");
        }
        inline app::IMoonEffectComposition* create() {
            return il2cpp::create_object<app::IMoonEffectComposition>(get_class());
        }
        inline app::IMoonEffectComposition__Array* create_array(int size) {
            return il2cpp::array_new<app::IMoonEffectComposition__Array>(get_class(), size);
        }
    } // namespace IMoonEffectComposition
} // namespace app::classes::types
