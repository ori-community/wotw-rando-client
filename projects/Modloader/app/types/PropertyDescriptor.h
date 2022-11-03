#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PropertyDescriptor {
        inline app::PropertyDescriptor__Class** type_info = (app::PropertyDescriptor__Class**)(modloader::win::memory::resolve_rva(0x047055F0));
        inline app::PropertyDescriptor__Class* get_class() {
            return il2cpp::get_class<app::PropertyDescriptor__Class>(type_info, "System.ComponentModel", "PropertyDescriptor");
        }
        inline app::PropertyDescriptor* create() {
            return il2cpp::create_object<app::PropertyDescriptor>(get_class());
        }
        inline app::PropertyDescriptor__Array* create_array(int size) {
            return il2cpp::array_new<app::PropertyDescriptor__Array>(get_class(), size);
        }
        inline app::PropertyDescriptor__Array* create_array(const std::vector<app::PropertyDescriptor*>& items) {
            return il2cpp::array_new<app::PropertyDescriptor__Array>(get_class(), items);
        }
    } // namespace PropertyDescriptor
} // namespace app::classes::types
