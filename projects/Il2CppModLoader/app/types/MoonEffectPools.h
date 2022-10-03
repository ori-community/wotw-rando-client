#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonEffectPools {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MoonEffectPools__Class** type_info;
        inline app::MoonEffectPools__Class* get_class() {
            return il2cpp::get_class<app::MoonEffectPools__Class>(type_info, "", "MoonEffectPools");
        }
        inline app::MoonEffectPools* create() {
            return il2cpp::create_object<app::MoonEffectPools>(get_class());
        }
    } // namespace MoonEffectPools
} // namespace app::classes::types
