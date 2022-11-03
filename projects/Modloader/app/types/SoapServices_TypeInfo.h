#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SoapServices_TypeInfo {
        inline app::SoapServices_TypeInfo__Class** type_info = (app::SoapServices_TypeInfo__Class**)(modloader::win::memory::resolve_rva(0x04778058));
        inline app::SoapServices_TypeInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::SoapServices_TypeInfo__Class>(type_info, "System.Runtime.Remoting", "SoapServices", "TypeInfo");
        }
        inline app::SoapServices_TypeInfo* create() {
            return il2cpp::create_object<app::SoapServices_TypeInfo>(get_class());
        }
    } // namespace SoapServices_TypeInfo
} // namespace app::classes::types
