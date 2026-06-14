#pragma once
#include <Modloader/app/structs/ComplexBindingPropertiesAttribute.h>
#include <Modloader/app/structs/ComplexBindingPropertiesAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ComplexBindingPropertiesAttribute {
        inline app::ComplexBindingPropertiesAttribute__Class** type_info() {
            static app::ComplexBindingPropertiesAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ComplexBindingPropertiesAttribute__Class**)(modloader::win::memory::resolve_rva(0x0473AF88));
            }
            return cache;
        }
        inline app::ComplexBindingPropertiesAttribute__Class* get_class() {
            return il2cpp::get_class<app::ComplexBindingPropertiesAttribute__Class>(type_info(), "System.ComponentModel", "ComplexBindingPropertiesAttribute");
        }
        inline app::ComplexBindingPropertiesAttribute* create() {
            return il2cpp::create_object<app::ComplexBindingPropertiesAttribute>(get_class());
        }
    } // namespace ComplexBindingPropertiesAttribute
} // namespace app::classes::types
