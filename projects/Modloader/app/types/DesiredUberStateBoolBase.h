#pragma once
#include <Modloader/app/structs/DesiredUberStateBoolBase.h>
#include <Modloader/app/structs/DesiredUberStateBoolBase__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DesiredUberStateBoolBase {
        inline app::DesiredUberStateBoolBase__Class** type_info() {
            static app::DesiredUberStateBoolBase__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DesiredUberStateBoolBase__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DesiredUberStateBoolBase__Class* get_class() {
            return il2cpp::get_class<app::DesiredUberStateBoolBase__Class>(type_info(), "", "DesiredUberStateBoolBase");
        }
        inline app::DesiredUberStateBoolBase* create() {
            return il2cpp::create_object<app::DesiredUberStateBoolBase>(get_class());
        }
    } // namespace DesiredUberStateBoolBase
} // namespace app::classes::types
