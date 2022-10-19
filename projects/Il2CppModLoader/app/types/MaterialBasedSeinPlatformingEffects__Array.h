#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MaterialBasedSeinPlatformingEffects__Array {
        inline app::MaterialBasedSeinPlatformingEffects__Array__Class** type_info = (app::MaterialBasedSeinPlatformingEffects__Array__Class**)(modloader::win::memory::resolve_rva(0x047954F8));
        inline app::MaterialBasedSeinPlatformingEffects__Array__Class* get_class() {
            return il2cpp::get_class<app::MaterialBasedSeinPlatformingEffects__Array__Class>(type_info, "", "MaterialBasedSeinPlatformingEffects[]");
        }
        inline app::MaterialBasedSeinPlatformingEffects__Array* create() {
            return il2cpp::create_object<app::MaterialBasedSeinPlatformingEffects__Array>(get_class());
        }
    } // namespace MaterialBasedSeinPlatformingEffects__Array
} // namespace app::classes::types
