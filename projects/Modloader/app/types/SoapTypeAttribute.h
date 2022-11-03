#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SoapTypeAttribute {
        inline app::SoapTypeAttribute__Class** type_info = (app::SoapTypeAttribute__Class**)(modloader::win::memory::resolve_rva(0x04738588));
        inline app::SoapTypeAttribute__Class* get_class() {
            return il2cpp::get_class<app::SoapTypeAttribute__Class>(type_info, "System.Runtime.Remoting.Metadata", "SoapTypeAttribute");
        }
        inline app::SoapTypeAttribute* create() {
            return il2cpp::create_object<app::SoapTypeAttribute>(get_class());
        }
    } // namespace SoapTypeAttribute
} // namespace app::classes::types
