#pragma once
#include <Modloader/app/structs/DynamicInstantiationDescriptor_ReflectionInfo__Array.h>
#include <Modloader/app/structs/DynamicInstantiationDescriptor_ReflectionInfo__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DynamicInstantiationDescriptor_ReflectionInfo__Array {
        inline app::DynamicInstantiationDescriptor_ReflectionInfo__Array__Class** type_info() {
            static app::DynamicInstantiationDescriptor_ReflectionInfo__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DynamicInstantiationDescriptor_ReflectionInfo__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DynamicInstantiationDescriptor_ReflectionInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::DynamicInstantiationDescriptor_ReflectionInfo__Array__Class>(type_info(), "", "DynamicInstantiationDescriptor+ReflectionInfo[]");
        }
        inline app::DynamicInstantiationDescriptor_ReflectionInfo__Array* create() {
            return il2cpp::create_object<app::DynamicInstantiationDescriptor_ReflectionInfo__Array>(get_class());
        }
    } // namespace DynamicInstantiationDescriptor_ReflectionInfo__Array
} // namespace app::classes::types
