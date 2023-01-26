#pragma once
#include <Modloader/app/structs/DynamicInstantiationDescriptor_CountGetter.h>
#include <Modloader/app/structs/DynamicInstantiationDescriptor_CountGetter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DynamicInstantiationDescriptor_CountGetter {
        inline app::DynamicInstantiationDescriptor_CountGetter__Class** type_info() {
            static app::DynamicInstantiationDescriptor_CountGetter__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DynamicInstantiationDescriptor_CountGetter__Class**)(modloader::win::memory::resolve_rva(0x04723560));
            }
            return cache;
        }
        inline app::DynamicInstantiationDescriptor_CountGetter__Class* get_class() {
            return il2cpp::get_nested_class<app::DynamicInstantiationDescriptor_CountGetter__Class>(type_info(), "", "DynamicInstantiationDescriptor", "CountGetter");
        }
        inline app::DynamicInstantiationDescriptor_CountGetter* create() {
            return il2cpp::create_object<app::DynamicInstantiationDescriptor_CountGetter>(get_class());
        }
    } // namespace DynamicInstantiationDescriptor_CountGetter
} // namespace app::classes::types
