#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DynamicInstantiationDescriptor_CountGetter {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DynamicInstantiationDescriptor_CountGetter__Class** type_info;
        inline app::DynamicInstantiationDescriptor_CountGetter__Class* get_class() {
            return il2cpp::get_nested_class<app::DynamicInstantiationDescriptor_CountGetter__Class>(type_info, "", "DynamicInstantiationDescriptor", "CountGetter");
        }
        inline app::DynamicInstantiationDescriptor_CountGetter* create() {
            return il2cpp::create_object<app::DynamicInstantiationDescriptor_CountGetter>(get_class());
        }
    } // namespace DynamicInstantiationDescriptor_CountGetter
} // namespace app::classes::types
