#pragma once
#include <Modloader/app/structs/MaterialBasedSeinPlatformingEffects__Array.h>
#include <Modloader/app/structs/MaterialBasedSeinPlatformingEffects__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MaterialBasedSeinPlatformingEffects__Array {
        inline app::MaterialBasedSeinPlatformingEffects__Array__Class** type_info() {
            static app::MaterialBasedSeinPlatformingEffects__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MaterialBasedSeinPlatformingEffects__Array__Class**)(modloader::win::memory::resolve_rva(0x047954F8));
            }
            return cache;
        }
        inline app::MaterialBasedSeinPlatformingEffects__Array__Class* get_class() {
            return il2cpp::get_class<app::MaterialBasedSeinPlatformingEffects__Array__Class>(type_info(), "", "MaterialBasedSeinPlatformingEffects[]");
        }
        inline app::MaterialBasedSeinPlatformingEffects__Array* create() {
            return il2cpp::create_object<app::MaterialBasedSeinPlatformingEffects__Array>(get_class());
        }
    } // namespace MaterialBasedSeinPlatformingEffects__Array
} // namespace app::classes::types
