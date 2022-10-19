#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SoapAttribute {
        inline app::SoapAttribute__Class** type_info = (app::SoapAttribute__Class**)(modloader::win::memory::resolve_rva(0x04704160));
        inline app::SoapAttribute__Class* get_class() {
            return il2cpp::get_class<app::SoapAttribute__Class>(type_info, "System.Runtime.Remoting.Metadata", "SoapAttribute");
        }
        inline app::SoapAttribute* create() {
            return il2cpp::create_object<app::SoapAttribute>(get_class());
        }
    } // namespace SoapAttribute
} // namespace app::classes::types
