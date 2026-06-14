#pragma once
#include <Modloader/app/structs/OptionalInstantiationHandler_InstanceInfo__Array.h>
#include <Modloader/app/structs/OptionalInstantiationHandler_InstanceInfo__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OptionalInstantiationHandler_InstanceInfo__Array {
        inline app::OptionalInstantiationHandler_InstanceInfo__Array__Class** type_info() {
            static app::OptionalInstantiationHandler_InstanceInfo__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::OptionalInstantiationHandler_InstanceInfo__Array__Class**)(modloader::win::memory::resolve_rva(0x0471E348));
            }
            return cache;
        }
        inline app::OptionalInstantiationHandler_InstanceInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::OptionalInstantiationHandler_InstanceInfo__Array__Class>(type_info(), "", "OptionalInstantiationHandler+InstanceInfo[]");
        }
        inline app::OptionalInstantiationHandler_InstanceInfo__Array* create() {
            return il2cpp::create_object<app::OptionalInstantiationHandler_InstanceInfo__Array>(get_class());
        }
    } // namespace OptionalInstantiationHandler_InstanceInfo__Array
} // namespace app::classes::types
