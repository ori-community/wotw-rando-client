#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DynamicInstantiationDescriptor {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DynamicInstantiationDescriptor__Class** type_info;
        inline app::DynamicInstantiationDescriptor__Class* get_class() {
            return il2cpp::get_class<app::DynamicInstantiationDescriptor__Class>(type_info, "", "DynamicInstantiationDescriptor");
        }
        inline app::DynamicInstantiationDescriptor* create() {
            return il2cpp::create_object<app::DynamicInstantiationDescriptor>(get_class());
        }
        inline app::DynamicInstantiationDescriptor__Array* create_array(int size) {
            return il2cpp::array_new<app::DynamicInstantiationDescriptor__Array>(get_class(), size);
        }
    } // namespace DynamicInstantiationDescriptor
} // namespace app::classes::types
