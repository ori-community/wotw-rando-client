#pragma once
#include <Modloader/app/structs/UpdateManager_ExplicitEntry__Array.h>
#include <Modloader/app/structs/UpdateManager_ExplicitEntry__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UpdateManager_ExplicitEntry__Array {
        inline app::UpdateManager_ExplicitEntry__Array__Class** type_info() {
            static app::UpdateManager_ExplicitEntry__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UpdateManager_ExplicitEntry__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UpdateManager_ExplicitEntry__Array__Class* get_class() {
            return il2cpp::get_class<app::UpdateManager_ExplicitEntry__Array__Class>(type_info(), "Moon.Driver", "UpdateManager+ExplicitEntry[]");
        }
        inline app::UpdateManager_ExplicitEntry__Array* create() {
            return il2cpp::create_object<app::UpdateManager_ExplicitEntry__Array>(get_class());
        }
    } // namespace UpdateManager_ExplicitEntry__Array
} // namespace app::classes::types
