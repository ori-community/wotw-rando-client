#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DynamicInstantiationDescriptor_c_DisplayClass28_0 {
        inline app::DynamicInstantiationDescriptor_c_DisplayClass28_0__Class** type_info = (app::DynamicInstantiationDescriptor_c_DisplayClass28_0__Class**)(modloader::win::memory::resolve_rva(0x047207A8));
        inline app::DynamicInstantiationDescriptor_c_DisplayClass28_0__Class* get_class() {
            return il2cpp::get_nested_class<app::DynamicInstantiationDescriptor_c_DisplayClass28_0__Class>(type_info, "", "DynamicInstantiationDescriptor", "<>c__DisplayClass28_0");
        }
        inline app::DynamicInstantiationDescriptor_c_DisplayClass28_0* create() {
            return il2cpp::create_object<app::DynamicInstantiationDescriptor_c_DisplayClass28_0>(get_class());
        }
    } // namespace DynamicInstantiationDescriptor_c_DisplayClass28_0
} // namespace app::classes::types
