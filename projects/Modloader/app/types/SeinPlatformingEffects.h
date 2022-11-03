#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinPlatformingEffects {
        inline app::SeinPlatformingEffects__Class** type_info = (app::SeinPlatformingEffects__Class**)(modloader::win::memory::resolve_rva(0x0475E5F0));
        inline app::SeinPlatformingEffects__Class* get_class() {
            return il2cpp::get_class<app::SeinPlatformingEffects__Class>(type_info, "", "SeinPlatformingEffects");
        }
        inline app::SeinPlatformingEffects* create() {
            return il2cpp::create_object<app::SeinPlatformingEffects>(get_class());
        }
    } // namespace SeinPlatformingEffects
} // namespace app::classes::types
