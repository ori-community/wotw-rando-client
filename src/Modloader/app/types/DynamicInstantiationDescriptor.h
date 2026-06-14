#pragma once
#include <Modloader/app/structs/DynamicInstantiationDescriptor.h>
#include <Modloader/app/structs/DynamicInstantiationDescriptor__Array.h>
#include <Modloader/app/structs/DynamicInstantiationDescriptor__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DynamicInstantiationDescriptor {
        inline app::DynamicInstantiationDescriptor__Class** type_info() {
            static app::DynamicInstantiationDescriptor__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DynamicInstantiationDescriptor__Class**)(modloader::win::memory::resolve_rva(0x04722930));
            }
            return cache;
        }
        inline app::DynamicInstantiationDescriptor__Class* get_class() {
            return il2cpp::get_class<app::DynamicInstantiationDescriptor__Class>(type_info(), "", "DynamicInstantiationDescriptor");
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
