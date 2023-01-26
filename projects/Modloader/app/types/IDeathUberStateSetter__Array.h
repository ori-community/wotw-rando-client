#pragma once
#include <Modloader/app/structs/IDeathUberStateSetter__Array.h>
#include <Modloader/app/structs/IDeathUberStateSetter__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IDeathUberStateSetter__Array {
        inline app::IDeathUberStateSetter__Array__Class** type_info() {
            static app::IDeathUberStateSetter__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IDeathUberStateSetter__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IDeathUberStateSetter__Array__Class* get_class() {
            return il2cpp::get_class<app::IDeathUberStateSetter__Array__Class>(type_info(), "", "IDeathUberStateSetter[]");
        }
        inline app::IDeathUberStateSetter__Array* create() {
            return il2cpp::create_object<app::IDeathUberStateSetter__Array>(get_class());
        }
    } // namespace IDeathUberStateSetter__Array
} // namespace app::classes::types
