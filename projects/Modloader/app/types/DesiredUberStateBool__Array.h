#pragma once
#include <Modloader/app/structs/DesiredUberStateBool__Array.h>
#include <Modloader/app/structs/DesiredUberStateBool__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DesiredUberStateBool__Array {
        inline app::DesiredUberStateBool__Array__Class** type_info() {
            static app::DesiredUberStateBool__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DesiredUberStateBool__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DesiredUberStateBool__Array__Class* get_class() {
            return il2cpp::get_class<app::DesiredUberStateBool__Array__Class>(type_info(), "", "DesiredUberStateBool[]");
        }
        inline app::DesiredUberStateBool__Array* create() {
            return il2cpp::create_object<app::DesiredUberStateBool__Array>(get_class());
        }
    } // namespace DesiredUberStateBool__Array
} // namespace app::classes::types
