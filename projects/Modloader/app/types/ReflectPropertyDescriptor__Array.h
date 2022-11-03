#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ReflectPropertyDescriptor__Array {
        inline app::ReflectPropertyDescriptor__Array__Class** type_info = (app::ReflectPropertyDescriptor__Array__Class**)(modloader::win::memory::resolve_rva(0x04782550));
        inline app::ReflectPropertyDescriptor__Array__Class* get_class() {
            return il2cpp::get_class<app::ReflectPropertyDescriptor__Array__Class>(type_info, "System.ComponentModel", "ReflectPropertyDescriptor[]");
        }
        inline app::ReflectPropertyDescriptor__Array* create() {
            return il2cpp::create_object<app::ReflectPropertyDescriptor__Array>(get_class());
        }
    } // namespace ReflectPropertyDescriptor__Array
} // namespace app::classes::types
