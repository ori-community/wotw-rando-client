#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ICustomTypeDescriptor {
        inline app::ICustomTypeDescriptor__Class** type_info = (app::ICustomTypeDescriptor__Class**)(modloader::win::memory::resolve_rva(0x0477C5F0));
        inline app::ICustomTypeDescriptor__Class* get_class() {
            return il2cpp::get_class<app::ICustomTypeDescriptor__Class>(type_info, "System.ComponentModel", "ICustomTypeDescriptor");
        }
    } // namespace ICustomTypeDescriptor
} // namespace app::classes::types
