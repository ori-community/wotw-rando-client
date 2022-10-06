#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonEffectWisps {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MoonEffectWisps__Class** type_info;
        inline app::MoonEffectWisps__Class* get_class() {
            return il2cpp::get_class<app::MoonEffectWisps__Class>(type_info, "Moon.EffectsFramework.Wisps", "MoonEffectWisps");
        }
        inline app::MoonEffectWisps* create() {
            return il2cpp::create_object<app::MoonEffectWisps>(get_class());
        }
        inline app::MoonEffectWisps__Array* create_array(int size) {
            return il2cpp::array_new<app::MoonEffectWisps__Array>(get_class(), size);
        }
        inline app::MoonEffectWisps__Array* create_array(const std::vector<app::MoonEffectWisps*>& items) {
            return il2cpp::array_new<app::MoonEffectWisps__Array>(get_class(), items);
        }
    } // namespace MoonEffectWisps
} // namespace app::classes::types
