#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SoapFieldAttribute {
        inline app::SoapFieldAttribute__Class** type_info = (app::SoapFieldAttribute__Class**)(modloader::win::memory::resolve_rva(0x047522D0));
        inline app::SoapFieldAttribute__Class* get_class() {
            return il2cpp::get_class<app::SoapFieldAttribute__Class>(type_info, "System.Runtime.Remoting.Metadata", "SoapFieldAttribute");
        }
        inline app::SoapFieldAttribute* create() {
            return il2cpp::create_object<app::SoapFieldAttribute>(get_class());
        }
    } // namespace SoapFieldAttribute
} // namespace app::classes::types
