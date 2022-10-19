#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DynamicInstantiationDescriptor_ReflectionInfo__Array {
        namespace {
            inline app::DynamicInstantiationDescriptor_ReflectionInfo__Array__Class* type_info_ref = nullptr;
        }
        inline app::DynamicInstantiationDescriptor_ReflectionInfo__Array__Class** type_info = &type_info_ref;
        inline app::DynamicInstantiationDescriptor_ReflectionInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::DynamicInstantiationDescriptor_ReflectionInfo__Array__Class>(type_info, "", "DynamicInstantiationDescriptor+ReflectionInfo[]");
        }
        inline app::DynamicInstantiationDescriptor_ReflectionInfo__Array* create() {
            return il2cpp::create_object<app::DynamicInstantiationDescriptor_ReflectionInfo__Array>(get_class());
        }
    } // namespace DynamicInstantiationDescriptor_ReflectionInfo__Array
} // namespace app::classes::types
