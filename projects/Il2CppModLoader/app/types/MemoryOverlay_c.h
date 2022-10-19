#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MemoryOverlay_c {
        inline app::MemoryOverlay_c__Class** type_info = (app::MemoryOverlay_c__Class**)(modloader::win::memory::resolve_rva(0x047738B0));
        inline app::MemoryOverlay_c__Class* get_class() {
            return il2cpp::get_nested_class<app::MemoryOverlay_c__Class>(type_info, "Moon.Telemetry.Performance.visualization", "MemoryOverlay", "<>c");
        }
        inline app::MemoryOverlay_c* create() {
            return il2cpp::create_object<app::MemoryOverlay_c>(get_class());
        }
    } // namespace MemoryOverlay_c
} // namespace app::classes::types
