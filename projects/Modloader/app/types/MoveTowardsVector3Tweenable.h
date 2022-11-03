#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoveTowardsVector3Tweenable {
        inline app::MoveTowardsVector3Tweenable__Class** type_info = (app::MoveTowardsVector3Tweenable__Class**)(modloader::win::memory::resolve_rva(0x04794730));
        inline app::MoveTowardsVector3Tweenable__Class* get_class() {
            return il2cpp::get_class<app::MoveTowardsVector3Tweenable__Class>(type_info, "Moon", "MoveTowardsVector3Tweenable");
        }
        inline app::MoveTowardsVector3Tweenable* create() {
            return il2cpp::create_object<app::MoveTowardsVector3Tweenable>(get_class());
        }
    } // namespace MoveTowardsVector3Tweenable
} // namespace app::classes::types
