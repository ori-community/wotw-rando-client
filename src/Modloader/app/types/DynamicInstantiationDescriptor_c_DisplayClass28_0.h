#pragma once
#include <Modloader/app/structs/DynamicInstantiationDescriptor_c_DisplayClass28_0.h>
#include <Modloader/app/structs/DynamicInstantiationDescriptor_c_DisplayClass28_0__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DynamicInstantiationDescriptor_c_DisplayClass28_0 {
        inline app::DynamicInstantiationDescriptor_c_DisplayClass28_0__Class** type_info() {
            static app::DynamicInstantiationDescriptor_c_DisplayClass28_0__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DynamicInstantiationDescriptor_c_DisplayClass28_0__Class**)(modloader::win::memory::resolve_rva(0x047207A8));
            }
            return cache;
        }
        inline app::DynamicInstantiationDescriptor_c_DisplayClass28_0__Class* get_class() {
            return il2cpp::get_nested_class<app::DynamicInstantiationDescriptor_c_DisplayClass28_0__Class>(type_info(), "", "DynamicInstantiationDescriptor", "<>c__DisplayClass28_0");
        }
        inline app::DynamicInstantiationDescriptor_c_DisplayClass28_0* create() {
            return il2cpp::create_object<app::DynamicInstantiationDescriptor_c_DisplayClass28_0>(get_class());
        }
    } // namespace DynamicInstantiationDescriptor_c_DisplayClass28_0
} // namespace app::classes::types
