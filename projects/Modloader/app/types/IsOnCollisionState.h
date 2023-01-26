#pragma once
#include <Modloader/app/structs/IsOnCollisionState.h>
#include <Modloader/app/structs/IsOnCollisionState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IsOnCollisionState {
        inline app::IsOnCollisionState__Class** type_info() {
            static app::IsOnCollisionState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IsOnCollisionState__Class**)(modloader::win::memory::resolve_rva(0x04790050));
            }
            return cache;
        }
        inline app::IsOnCollisionState__Class* get_class() {
            return il2cpp::get_class<app::IsOnCollisionState__Class>(type_info(), "", "IsOnCollisionState");
        }
        inline app::IsOnCollisionState* create() {
            return il2cpp::create_object<app::IsOnCollisionState>(get_class());
        }
    } // namespace IsOnCollisionState
} // namespace app::classes::types
