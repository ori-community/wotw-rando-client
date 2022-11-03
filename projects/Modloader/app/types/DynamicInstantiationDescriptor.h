#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DynamicInstantiationDescriptor {
        inline app::DynamicInstantiationDescriptor__Class** type_info = (app::DynamicInstantiationDescriptor__Class**)(modloader::win::memory::resolve_rva(0x04722930));
        inline app::DynamicInstantiationDescriptor__Class* get_class() {
            return il2cpp::get_class<app::DynamicInstantiationDescriptor__Class>(type_info, "", "DynamicInstantiationDescriptor");
        }
        inline app::DynamicInstantiationDescriptor* create() {
            return il2cpp::create_object<app::DynamicInstantiationDescriptor>(get_class());
        }
        inline app::DynamicInstantiationDescriptor__Array* create_array(int size) {
            return il2cpp::array_new<app::DynamicInstantiationDescriptor__Array>(get_class(), size);
        }
        inline app::DynamicInstantiationDescriptor__Array* create_array(const std::vector<app::DynamicInstantiationDescriptor*>& items) {
            return il2cpp::array_new<app::DynamicInstantiationDescriptor__Array>(get_class(), items);
        }
    } // namespace DynamicInstantiationDescriptor
} // namespace app::classes::types
