#pragma once
#include <Modloader/app/structs/ContactSwitch__Array.h>
#include <Modloader/app/structs/ContactSwitch__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ContactSwitch__Array {
        inline app::ContactSwitch__Array__Class** type_info() {
            static app::ContactSwitch__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ContactSwitch__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ContactSwitch__Array__Class* get_class() {
            return il2cpp::get_class<app::ContactSwitch__Array__Class>(type_info(), "", "ContactSwitch[]");
        }
        inline app::ContactSwitch__Array* create() {
            return il2cpp::create_object<app::ContactSwitch__Array>(get_class());
        }
    } // namespace ContactSwitch__Array
} // namespace app::classes::types
