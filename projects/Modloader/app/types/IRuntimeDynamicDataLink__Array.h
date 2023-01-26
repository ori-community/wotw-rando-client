#pragma once
#include <Modloader/app/structs/IRuntimeDynamicDataLink__Array.h>
#include <Modloader/app/structs/IRuntimeDynamicDataLink__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IRuntimeDynamicDataLink__Array {
        inline app::IRuntimeDynamicDataLink__Array__Class** type_info() {
            static app::IRuntimeDynamicDataLink__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IRuntimeDynamicDataLink__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IRuntimeDynamicDataLink__Array__Class* get_class() {
            return il2cpp::get_class<app::IRuntimeDynamicDataLink__Array__Class>(type_info(), "Moon", "IRuntimeDynamicDataLink[]");
        }
        inline app::IRuntimeDynamicDataLink__Array* create() {
            return il2cpp::create_object<app::IRuntimeDynamicDataLink__Array>(get_class());
        }
    } // namespace IRuntimeDynamicDataLink__Array
} // namespace app::classes::types
