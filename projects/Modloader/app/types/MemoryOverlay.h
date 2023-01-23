#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MemoryOverlay__Class.h>
#include <Modloader/app/structs/MemoryOverlay.h>

namespace app::classes::types {
    namespace MemoryOverlay {
        inline app::MemoryOverlay__Class** type_info = (app::MemoryOverlay__Class**)(modloader::win::memory::resolve_rva(0x04752C80));
        inline app::MemoryOverlay__Class* get_class() {
            return il2cpp::get_class<app::MemoryOverlay__Class>(type_info, "Moon.Telemetry.Performance.visualization", "MemoryOverlay");
        }
        inline app::MemoryOverlay* create() {
            return il2cpp::create_object<app::MemoryOverlay>(get_class());
        }
    } // namespace MemoryOverlay
} // namespace app::classes::types
