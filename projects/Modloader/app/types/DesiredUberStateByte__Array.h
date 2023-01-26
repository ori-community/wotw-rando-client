#pragma once
#include <Modloader/app/structs/DesiredUberStateByte__Array.h>
#include <Modloader/app/structs/DesiredUberStateByte__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DesiredUberStateByte__Array {
        inline app::DesiredUberStateByte__Array__Class** type_info() {
            static app::DesiredUberStateByte__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DesiredUberStateByte__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DesiredUberStateByte__Array__Class* get_class() {
            return il2cpp::get_class<app::DesiredUberStateByte__Array__Class>(type_info(), "", "DesiredUberStateByte[]");
        }
        inline app::DesiredUberStateByte__Array* create() {
            return il2cpp::create_object<app::DesiredUberStateByte__Array>(get_class());
        }
    } // namespace DesiredUberStateByte__Array
} // namespace app::classes::types
