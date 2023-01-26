#pragma once
#include <Modloader/app/structs/DebugControls.h>
#include <Modloader/app/structs/DebugControls__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DebugControls {
        inline app::DebugControls__Class** type_info() {
            static app::DebugControls__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DebugControls__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DebugControls__Class* get_class() {
            return il2cpp::get_class<app::DebugControls__Class>(type_info(), "", "DebugControls");
        }
        inline app::DebugControls* create() {
            return il2cpp::create_object<app::DebugControls>(get_class());
        }
    } // namespace DebugControls
} // namespace app::classes::types
