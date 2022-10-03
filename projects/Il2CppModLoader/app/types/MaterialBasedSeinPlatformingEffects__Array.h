#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MaterialBasedSeinPlatformingEffects__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MaterialBasedSeinPlatformingEffects__Array__Class** type_info;
        inline app::MaterialBasedSeinPlatformingEffects__Array__Class* get_class() {
            return il2cpp::get_class<app::MaterialBasedSeinPlatformingEffects__Array__Class>(type_info, "", "MaterialBasedSeinPlatformingEffects[]");
        }
        inline app::MaterialBasedSeinPlatformingEffects__Array* create() {
            return il2cpp::create_object<app::MaterialBasedSeinPlatformingEffects__Array>(get_class());
        }
    } // namespace MaterialBasedSeinPlatformingEffects__Array
} // namespace app::classes::types
