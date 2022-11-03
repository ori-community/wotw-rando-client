#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ArrayConverter_ArrayPropertyDescriptor {
        inline app::ArrayConverter_ArrayPropertyDescriptor__Class** type_info = (app::ArrayConverter_ArrayPropertyDescriptor__Class**)(modloader::win::memory::resolve_rva(0x04780C38));
        inline app::ArrayConverter_ArrayPropertyDescriptor__Class* get_class() {
            return il2cpp::get_nested_class<app::ArrayConverter_ArrayPropertyDescriptor__Class>(type_info, "System.ComponentModel", "ArrayConverter", "ArrayPropertyDescriptor");
        }
        inline app::ArrayConverter_ArrayPropertyDescriptor* create() {
            return il2cpp::create_object<app::ArrayConverter_ArrayPropertyDescriptor>(get_class());
        }
    } // namespace ArrayConverter_ArrayPropertyDescriptor
} // namespace app::classes::types
