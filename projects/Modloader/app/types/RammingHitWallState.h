#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RammingHitWallState__Class.h>
#include <Modloader/app/structs/RammingHitWallState.h>

namespace app::classes::types {
    namespace RammingHitWallState {
        inline app::RammingHitWallState__Class** type_info = (app::RammingHitWallState__Class**)(modloader::win::memory::resolve_rva(0x04766F20));
        inline app::RammingHitWallState__Class* get_class() {
            return il2cpp::get_class<app::RammingHitWallState__Class>(type_info, "", "RammingHitWallState");
        }
        inline app::RammingHitWallState* create() {
            return il2cpp::create_object<app::RammingHitWallState>(get_class());
        }
    } // namespace RammingHitWallState
} // namespace app::classes::types
