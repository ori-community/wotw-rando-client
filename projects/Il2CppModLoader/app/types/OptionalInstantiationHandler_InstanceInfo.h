#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace OptionalInstantiationHandler_InstanceInfo {
        namespace {
            inline app::OptionalInstantiationHandler_InstanceInfo__Class* type_info_ref = nullptr;
        }
        inline app::OptionalInstantiationHandler_InstanceInfo__Class** type_info = &type_info_ref;
        inline app::OptionalInstantiationHandler_InstanceInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::OptionalInstantiationHandler_InstanceInfo__Class>(type_info, "", "OptionalInstantiationHandler", "InstanceInfo");
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
