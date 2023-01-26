#pragma once
#include <Modloader/app/structs/UpdateHandle.h>
#include <Modloader/app/structs/UpdateHandle__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UpdateHandle {
        inline app::UpdateHandle__Class** type_info() {
            static app::UpdateHandle__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UpdateHandle__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UpdateHandle__Class* get_class() {
            return il2cpp::get_class<app::UpdateHandle__Class>(type_info(), "Moon", "UpdateHandle");
        }
        inline app::UpdateHandle* create() {
            return il2cpp::create_object<app::UpdateHandle>(get_class());
        }
    } // namespace UpdateHandle
} // namespace app::classes::types
