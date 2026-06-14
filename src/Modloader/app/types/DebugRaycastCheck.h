#pragma once
#include <Modloader/app/structs/DebugRaycastCheck.h>
#include <Modloader/app/structs/DebugRaycastCheck__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DebugRaycastCheck {
        inline app::DebugRaycastCheck__Class** type_info() {
            static app::DebugRaycastCheck__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DebugRaycastCheck__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DebugRaycastCheck__Class* get_class() {
            return il2cpp::get_class<app::DebugRaycastCheck__Class>(type_info(), "", "DebugRaycastCheck");
        }
        inline app::DebugRaycastCheck* create() {
            return il2cpp::create_object<app::DebugRaycastCheck>(get_class());
        }
    } // namespace DebugRaycastCheck
} // namespace app::classes::types
