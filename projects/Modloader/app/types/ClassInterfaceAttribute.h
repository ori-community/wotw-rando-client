#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ClassInterfaceAttribute {
        namespace {
            inline app::ClassInterfaceAttribute__Class* type_info_ref = nullptr;
        }
        inline app::ClassInterfaceAttribute__Class** type_info = &type_info_ref;
        inline app::ClassInterfaceAttribute__Class* get_class() {
            return il2cpp::get_class<app::ClassInterfaceAttribute__Class>(type_info, "System.Runtime.InteropServices", "ClassInterfaceAttribute");
        }
        inline app::ClassInterfaceAttribute* create() {
            return il2cpp::create_object<app::ClassInterfaceAttribute>(get_class());
        }
    } // namespace ClassInterfaceAttribute
} // namespace app::classes::types
