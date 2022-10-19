#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DynamicInstantiationDescriptor_ReflectionInfo {
        inline app::DynamicInstantiationDescriptor_ReflectionInfo__Class** type_info = (app::DynamicInstantiationDescriptor_ReflectionInfo__Class**)(modloader::win::memory::resolve_rva(0x04781B08));
        inline app::DynamicInstantiationDescriptor_ReflectionInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::DynamicInstantiationDescriptor_ReflectionInfo__Class>(type_info, "", "DynamicInstantiationDescriptor", "ReflectionInfo");
        }
        inline app::DynamicInstantiationDescriptor_ReflectionInfo* create() {
            return il2cpp::create_object<app::DynamicInstantiationDescriptor_ReflectionInfo>(get_class());
        }
        inline app::DynamicInstantiationDescriptor_ReflectionInfo__Boxed* box(app::DynamicInstantiationDescriptor_ReflectionInfo value) {
            return il2cpp::box_value<app::DynamicInstantiationDescriptor_ReflectionInfo__Boxed>(get_class(), value);
        }
        inline app::DynamicInstantiationDescriptor_ReflectionInfo__Array* create_array(int size) {
            return il2cpp::array_new<app::DynamicInstantiationDescriptor_ReflectionInfo__Array>(get_class(), size);
        }
        inline app::DynamicInstantiationDescriptor_ReflectionInfo__Array* create_array(const std::vector<app::DynamicInstantiationDescriptor_ReflectionInfo>& items) {
            return il2cpp::array_new<app::DynamicInstantiationDescriptor_ReflectionInfo__Array>(get_class(), items);
        }
    } // namespace DynamicInstantiationDescriptor_ReflectionInfo
} // namespace app::classes::types
