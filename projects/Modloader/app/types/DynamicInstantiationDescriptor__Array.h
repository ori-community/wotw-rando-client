#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DynamicInstantiationDescriptor__Array__Class.h>
#include <Modloader/app/structs/DynamicInstantiationDescriptor__Array.h>

namespace app::classes::types {
    namespace DynamicInstantiationDescriptor__Array {
        namespace {
            inline app::DynamicInstantiationDescriptor__Array__Class* type_info_ref = nullptr;
        }
        inline app::DynamicInstantiationDescriptor__Array__Class** type_info = &type_info_ref;
        inline app::DynamicInstantiationDescriptor__Array__Class* get_class() {
            return il2cpp::get_class<app::DynamicInstantiationDescriptor__Array__Class>(type_info, "", "DynamicInstantiationDescriptor[]");
        }
        inline app::DynamicInstantiationDescriptor__Array* create() {
            return il2cpp::create_object<app::DynamicInstantiationDescriptor__Array>(get_class());
        }
    } // namespace DynamicInstantiationDescriptor__Array
} // namespace app::classes::types
