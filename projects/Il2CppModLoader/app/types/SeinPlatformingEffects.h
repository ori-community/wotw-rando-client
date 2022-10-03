#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinPlatformingEffects {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SeinPlatformingEffects__Class** type_info;
        inline app::SeinPlatformingEffects__Class* get_class() {
            return il2cpp::get_class<app::SeinPlatformingEffects__Class>(type_info, "", "SeinPlatformingEffects");
        }
        inline app::SeinPlatformingEffects* create() {
            return il2cpp::create_object<app::SeinPlatformingEffects>(get_class());
        }
    } // namespace SeinPlatformingEffects
} // namespace app::classes::types
