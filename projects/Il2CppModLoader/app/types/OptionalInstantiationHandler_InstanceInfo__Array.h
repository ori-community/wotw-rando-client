#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace OptionalInstantiationHandler_InstanceInfo__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::OptionalInstantiationHandler_InstanceInfo__Array__Class** type_info;
        inline app::OptionalInstantiationHandler_InstanceInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::OptionalInstantiationHandler_InstanceInfo__Array__Class>(type_info, "", "OptionalInstantiationHandler+InstanceInfo[]");
        }
        inline app::OptionalInstantiationHandler_InstanceInfo__Array* create() {
            return il2cpp::create_object<app::OptionalInstantiationHandler_InstanceInfo__Array>(get_class());
        }
    } // namespace OptionalInstantiationHandler_InstanceInfo__Array
} // namespace app::classes::types
