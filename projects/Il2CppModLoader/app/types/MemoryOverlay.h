#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MemoryOverlay {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MemoryOverlay__Class** type_info;
        inline app::MemoryOverlay__Class* get_class() {
            return il2cpp::get_class<app::MemoryOverlay__Class>(type_info, "Moon.Telemetry.Performance.visualization", "MemoryOverlay");
        }
        inline app::MemoryOverlay* create() {
            return il2cpp::create_object<app::MemoryOverlay>(get_class());
        }
    } // namespace MemoryOverlay
} // namespace app::classes::types
