#pragma once
#include <Modloader/app/structs/OptionalInstantiationHandler_InstanceInfo.h>
#include <Modloader/app/structs/OptionalInstantiationHandler_InstanceInfo__Array.h>
#include <Modloader/app/structs/OptionalInstantiationHandler_InstanceInfo__Boxed.h>
#include <Modloader/app/structs/OptionalInstantiationHandler_InstanceInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OptionalInstantiationHandler_InstanceInfo {
        inline app::OptionalInstantiationHandler_InstanceInfo__Class** type_info() {
            static app::OptionalInstantiationHandler_InstanceInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::OptionalInstantiationHandler_InstanceInfo__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::OptionalInstantiationHandler_InstanceInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::OptionalInstantiationHandler_InstanceInfo__Class>(type_info(), "", "OptionalInstantiationHandler", "InstanceInfo");
        }
        inline app::OptionalInstantiationHandler_InstanceInfo* create() {
            return il2cpp::create_object<app::OptionalInstantiationHandler_InstanceInfo>(get_class());
        }
        inline app::OptionalInstantiationHandler_InstanceInfo__Boxed* box(app::OptionalInstantiationHandler_InstanceInfo value) {
            return il2cpp::box_value<app::OptionalInstantiationHandler_InstanceInfo__Boxed>(get_class(), value);
        }
        inline app::OptionalInstantiationHandler_InstanceInfo__Array* create_array(int size) {
            return il2cpp::array_new<app::OptionalInstantiationHandler_InstanceInfo__Array>(get_class(), size);
        }
        inline app::OptionalInstantiationHandler_InstanceInfo__Array* create_array(const std::vector<app::OptionalInstantiationHandler_InstanceInfo>& items) {
            return il2cpp::array_new<app::OptionalInstantiationHandler_InstanceInfo__Array>(get_class(), items);
        }
    } // namespace OptionalInstantiationHandler_InstanceInfo
} // namespace app::classes::types
