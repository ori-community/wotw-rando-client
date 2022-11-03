#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SoapParameterAttribute {
        inline app::SoapParameterAttribute__Class** type_info = (app::SoapParameterAttribute__Class**)(modloader::win::memory::resolve_rva(0x04799680));
        inline app::SoapParameterAttribute__Class* get_class() {
            return il2cpp::get_class<app::SoapParameterAttribute__Class>(type_info, "System.Runtime.Remoting.Metadata", "SoapParameterAttribute");
        }
        inline app::SoapParameterAttribute* create() {
            return il2cpp::create_object<app::SoapParameterAttribute>(get_class());
        }
    } // namespace SoapParameterAttribute
} // namespace app::classes::types
