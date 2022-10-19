#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DynamicInstantiationDescriptor_CountGetter {
        inline app::DynamicInstantiationDescriptor_CountGetter__Class** type_info = (app::DynamicInstantiationDescriptor_CountGetter__Class**)(modloader::win::memory::resolve_rva(0x04723560));
        inline app::DynamicInstantiationDescriptor_CountGetter__Class* get_class() {
            return il2cpp::get_nested_class<app::DynamicInstantiationDescriptor_CountGetter__Class>(type_info, "", "DynamicInstantiationDescriptor", "CountGetter");
        }
        inline app::DynamicInstantiationDescriptor_CountGetter* create() {
            return il2cpp::create_object<app::DynamicInstantiationDescriptor_CountGetter>(get_class());
        }
    } // namespace DynamicInstantiationDescriptor_CountGetter
} // namespace app::classes::types
