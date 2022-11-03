#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XElementElementPropertyDescriptor {
        inline app::XElementElementPropertyDescriptor__Class** type_info = (app::XElementElementPropertyDescriptor__Class**)(modloader::win::memory::resolve_rva(0x0471C178));
        inline app::XElementElementPropertyDescriptor__Class* get_class() {
            return il2cpp::get_class<app::XElementElementPropertyDescriptor__Class>(type_info, "MS.Internal.Xml.Linq.ComponentModel", "XElementElementPropertyDescriptor");
        }
        inline app::XElementElementPropertyDescriptor* create() {
            return il2cpp::create_object<app::XElementElementPropertyDescriptor>(get_class());
        }
    } // namespace XElementElementPropertyDescriptor
} // namespace app::classes::types
