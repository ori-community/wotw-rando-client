#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XElementElementsPropertyDescriptor {
        inline app::XElementElementsPropertyDescriptor__Class** type_info = (app::XElementElementsPropertyDescriptor__Class**)(modloader::win::memory::resolve_rva(0x0470F7A8));
        inline app::XElementElementsPropertyDescriptor__Class* get_class() {
            return il2cpp::get_class<app::XElementElementsPropertyDescriptor__Class>(type_info, "MS.Internal.Xml.Linq.ComponentModel", "XElementElementsPropertyDescriptor");
        }
        inline app::XElementElementsPropertyDescriptor* create() {
            return il2cpp::create_object<app::XElementElementsPropertyDescriptor>(get_class());
        }
    } // namespace XElementElementsPropertyDescriptor
} // namespace app::classes::types
