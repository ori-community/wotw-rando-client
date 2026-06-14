#pragma once
#include <Modloader/app/structs/DebugTeleportSettings__Array.h>
#include <Modloader/app/structs/DebugTeleportSettings__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DebugTeleportSettings__Array {
        inline app::DebugTeleportSettings__Array__Class** type_info() {
            static app::DebugTeleportSettings__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DebugTeleportSettings__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DebugTeleportSettings__Array__Class* get_class() {
            return il2cpp::get_class<app::DebugTeleportSettings__Array__Class>(type_info(), "", "DebugTeleportSettings[]");
        }
        inline app::DebugTeleportSettings__Array* create() {
            return il2cpp::create_object<app::DebugTeleportSettings__Array>(get_class());
        }
    } // namespace DebugTeleportSettings__Array
} // namespace app::classes::types
