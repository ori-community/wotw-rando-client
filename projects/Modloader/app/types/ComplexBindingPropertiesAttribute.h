#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ComplexBindingPropertiesAttribute {
        inline app::ComplexBindingPropertiesAttribute__Class** type_info = (app::ComplexBindingPropertiesAttribute__Class**)(modloader::win::memory::resolve_rva(0x0473AF88));
        inline app::ComplexBindingPropertiesAttribute__Class* get_class() {
            return il2cpp::get_class<app::ComplexBindingPropertiesAttribute__Class>(type_info, "System.ComponentModel", "ComplexBindingPropertiesAttribute");
        }
        inline app::ComplexBindingPropertiesAttribute* create() {
            return il2cpp::create_object<app::ComplexBindingPropertiesAttribute>(get_class());
        }
    } // namespace ComplexBindingPropertiesAttribute
} // namespace app::classes::types
