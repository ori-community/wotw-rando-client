#pragma once
#include <Modloader/app/structs/DynamicInstantiationDescriptor__Array.h>
#include <Modloader/app/structs/DynamicInstantiationDescriptor__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DynamicInstantiationDescriptor__Array {
        inline app::DynamicInstantiationDescriptor__Array__Class** type_info() {
            static app::DynamicInstantiationDescriptor__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DynamicInstantiationDescriptor__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DynamicInstantiationDescriptor__Array__Class* get_class() {
            return il2cpp::get_class<app::DynamicInstantiationDescriptor__Array__Class>(type_info(), "", "DynamicInstantiationDescriptor[]");
        }
        inline app::DynamicInstantiationDescriptor__Array* create() {
            return il2cpp::create_object<app::DynamicInstantiationDescriptor__Array>(get_class());
        }
    } // namespace DynamicInstantiationDescriptor__Array
} // namespace app::classes::types
