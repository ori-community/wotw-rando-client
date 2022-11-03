#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ReflectPropertyDescriptor {
        inline app::ReflectPropertyDescriptor__Class** type_info = (app::ReflectPropertyDescriptor__Class**)(modloader::win::memory::resolve_rva(0x04725700));
        inline app::ReflectPropertyDescriptor__Class* get_class() {
            return il2cpp::get_class<app::ReflectPropertyDescriptor__Class>(type_info, "System.ComponentModel", "ReflectPropertyDescriptor");
        }
        inline app::ReflectPropertyDescriptor* create() {
            return il2cpp::create_object<app::ReflectPropertyDescriptor>(get_class());
        }
        inline app::ReflectPropertyDescriptor__Array* create_array(int size) {
            return il2cpp::array_new<app::ReflectPropertyDescriptor__Array>(get_class(), size);
        }
        inline app::ReflectPropertyDescriptor__Array* create_array(const std::vector<app::ReflectPropertyDescriptor*>& items) {
            return il2cpp::array_new<app::ReflectPropertyDescriptor__Array>(get_class(), items);
        }
    } // namespace ReflectPropertyDescriptor
} // namespace app::classes::types
