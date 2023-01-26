#pragma once
#include <Modloader/app/structs/DebugMenu_ExternalItem__Array.h>
#include <Modloader/app/structs/DebugMenu_ExternalItem__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DebugMenu_ExternalItem__Array {
        inline app::DebugMenu_ExternalItem__Array__Class** type_info() {
            static app::DebugMenu_ExternalItem__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DebugMenu_ExternalItem__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DebugMenu_ExternalItem__Array__Class* get_class() {
            return il2cpp::get_class<app::DebugMenu_ExternalItem__Array__Class>(type_info(), "", "DebugMenu+ExternalItem[]");
        }
        inline app::DebugMenu_ExternalItem__Array* create() {
            return il2cpp::create_object<app::DebugMenu_ExternalItem__Array>(get_class());
        }
    } // namespace DebugMenu_ExternalItem__Array
} // namespace app::classes::types
