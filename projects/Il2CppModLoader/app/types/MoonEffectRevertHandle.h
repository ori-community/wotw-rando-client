#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonEffectRevertHandle {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MoonEffectRevertHandle__Class** type_info;
        inline app::MoonEffectRevertHandle__Class* get_class() {
            return il2cpp::get_class<app::MoonEffectRevertHandle__Class>(type_info, "Moon.EffectsFramework", "MoonEffectRevertHandle");
        }
        inline app::MoonEffectRevertHandle* create() {
            return il2cpp::create_object<app::MoonEffectRevertHandle>(get_class());
        }
        inline app::MoonEffectRevertHandle__Array* create_array(int size) {
            return il2cpp::array_new<app::MoonEffectRevertHandle__Array>(get_class(), size);
        }
    } // namespace MoonEffectRevertHandle
} // namespace app::classes::types
