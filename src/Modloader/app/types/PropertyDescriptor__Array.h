#pragma once
#include <Modloader/app/structs/PropertyDescriptor__Array.h>
#include <Modloader/app/structs/PropertyDescriptor__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PropertyDescriptor__Array {
        inline app::PropertyDescriptor__Array__Class** type_info() {
            static app::PropertyDescriptor__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PropertyDescriptor__Array__Class**)(modloader::win::memory::resolve_rva(0x0476C998));
            }
            return cache;
        }
        inline app::PropertyDescriptor__Array__Class* get_class() {
            return il2cpp::get_class<app::PropertyDescriptor__Array__Class>(type_info(), "System.ComponentModel", "PropertyDescriptor[]");
        }
        inline app::PropertyDescriptor__Array* create() {
            return il2cpp::create_object<app::PropertyDescriptor__Array>(get_class());
        }
    } // namespace PropertyDescriptor__Array
} // namespace app::classes::types
