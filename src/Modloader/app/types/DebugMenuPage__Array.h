#pragma once
#include <Modloader/app/structs/DebugMenuPage__Array.h>
#include <Modloader/app/structs/DebugMenuPage__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DebugMenuPage__Array {
        inline app::DebugMenuPage__Array__Class** type_info() {
            static app::DebugMenuPage__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DebugMenuPage__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DebugMenuPage__Array__Class* get_class() {
            return il2cpp::get_class<app::DebugMenuPage__Array__Class>(type_info(), "", "DebugMenuPage[]");
        }
        inline app::DebugMenuPage__Array* create() {
            return il2cpp::create_object<app::DebugMenuPage__Array>(get_class());
        }
    } // namespace DebugMenuPage__Array
} // namespace app::classes::types
