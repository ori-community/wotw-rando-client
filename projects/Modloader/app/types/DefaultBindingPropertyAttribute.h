#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DefaultBindingPropertyAttribute__Class.h>
#include <Modloader/app/structs/DefaultBindingPropertyAttribute.h>

namespace app::classes::types {
    namespace DefaultBindingPropertyAttribute {
        inline app::DefaultBindingPropertyAttribute__Class** type_info = (app::DefaultBindingPropertyAttribute__Class**)(modloader::win::memory::resolve_rva(0x04708258));
        inline app::DefaultBindingPropertyAttribute__Class* get_class() {
            return il2cpp::get_class<app::DefaultBindingPropertyAttribute__Class>(type_info, "System.ComponentModel", "DefaultBindingPropertyAttribute");
        }
        inline app::DefaultBindingPropertyAttribute* create() {
            return il2cpp::create_object<app::DefaultBindingPropertyAttribute>(get_class());
        }
    } // namespace DefaultBindingPropertyAttribute
} // namespace app::classes::types
