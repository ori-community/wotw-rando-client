#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace VolumeEntityMovementProcessor {
        inline app::VolumeEntityMovementProcessor__Class** type_info = (app::VolumeEntityMovementProcessor__Class**)(modloader::win::memory::resolve_rva(0x047330E0));
        inline app::VolumeEntityMovementProcessor__Class* get_class() {
            return il2cpp::get_class<app::VolumeEntityMovementProcessor__Class>(type_info, "Moon", "VolumeEntityMovementProcessor");
        }
        inline app::VolumeEntityMovementProcessor* create() {
            return il2cpp::create_object<app::VolumeEntityMovementProcessor>(get_class());
        }
    } // namespace VolumeEntityMovementProcessor
} // namespace app::classes::types
