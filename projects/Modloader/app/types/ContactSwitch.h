#pragma once
#include <Modloader/app/structs/ContactSwitch.h>
#include <Modloader/app/structs/ContactSwitch__Array.h>
#include <Modloader/app/structs/ContactSwitch__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ContactSwitch {
        inline app::ContactSwitch__Class** type_info() {
            static app::ContactSwitch__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ContactSwitch__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ContactSwitch__Class* get_class() {
            return il2cpp::get_class<app::ContactSwitch__Class>(type_info(), "", "ContactSwitch");
        }
        inline app::ContactSwitch* create() {
            return il2cpp::create_object<app::ContactSwitch>(get_class());
        }
        inline app::ContactSwitch__Array* create_array(int size) {
            return il2cpp::array_new<app::ContactSwitch__Array>(get_class(), size);
        }
        inline app::ContactSwitch__Array* create_array(const std::vector<app::ContactSwitch*>& items) {
            return il2cpp::array_new<app::ContactSwitch__Array>(get_class(), items);
        }
    } // namespace ContactSwitch
} // namespace app::classes::types
