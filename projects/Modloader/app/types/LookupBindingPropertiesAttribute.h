#pragma once
#include <Modloader/app/structs/LookupBindingPropertiesAttribute.h>
#include <Modloader/app/structs/LookupBindingPropertiesAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LookupBindingPropertiesAttribute {
        inline app::LookupBindingPropertiesAttribute__Class** type_info() {
            static app::LookupBindingPropertiesAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LookupBindingPropertiesAttribute__Class**)(modloader::win::memory::resolve_rva(0x047741B0));
            }
            return cache;
        }
        inline app::LookupBindingPropertiesAttribute__Class* get_class() {
            return il2cpp::get_class<app::LookupBindingPropertiesAttribute__Class>(type_info(), "System.ComponentModel", "LookupBindingPropertiesAttribute");
        }
        inline app::LookupBindingPropertiesAttribute* create() {
            return il2cpp::create_object<app::LookupBindingPropertiesAttribute>(get_class());
        }
    } // namespace LookupBindingPropertiesAttribute
} // namespace app::classes::types
