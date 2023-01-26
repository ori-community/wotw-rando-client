#pragma once
#include <Modloader/app/structs/ReflectPropertyDescriptor__Array.h>
#include <Modloader/app/structs/ReflectPropertyDescriptor__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ReflectPropertyDescriptor__Array {
        inline app::ReflectPropertyDescriptor__Array__Class** type_info() {
            static app::ReflectPropertyDescriptor__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ReflectPropertyDescriptor__Array__Class**)(modloader::win::memory::resolve_rva(0x04782550));
            }
            return cache;
        }
        inline app::ReflectPropertyDescriptor__Array__Class* get_class() {
            return il2cpp::get_class<app::ReflectPropertyDescriptor__Array__Class>(type_info(), "System.ComponentModel", "ReflectPropertyDescriptor[]");
        }
        inline app::ReflectPropertyDescriptor__Array* create() {
            return il2cpp::create_object<app::ReflectPropertyDescriptor__Array>(get_class());
        }
    } // namespace ReflectPropertyDescriptor__Array
} // namespace app::classes::types
