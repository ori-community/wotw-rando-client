#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GroundEntityMovementProcessor {
        inline app::GroundEntityMovementProcessor__Class** type_info = (app::GroundEntityMovementProcessor__Class**)(modloader::win::memory::resolve_rva(0x04740500));
        inline app::GroundEntityMovementProcessor__Class* get_class() {
            return il2cpp::get_class<app::GroundEntityMovementProcessor__Class>(type_info, "", "GroundEntityMovementProcessor");
        }
        inline app::GroundEntityMovementProcessor* create() {
            return il2cpp::create_object<app::GroundEntityMovementProcessor>(get_class());
        }
    } // namespace GroundEntityMovementProcessor
} // namespace app::classes::types
