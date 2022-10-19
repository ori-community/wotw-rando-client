#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SoapMethodAttribute {
        inline app::SoapMethodAttribute__Class** type_info = (app::SoapMethodAttribute__Class**)(modloader::win::memory::resolve_rva(0x047050C0));
        inline app::SoapMethodAttribute__Class* get_class() {
            return il2cpp::get_class<app::SoapMethodAttribute__Class>(type_info, "System.Runtime.Remoting.Metadata", "SoapMethodAttribute");
        }
        inline app::SoapMethodAttribute* create() {
            return il2cpp::create_object<app::SoapMethodAttribute>(get_class());
        }
    } // namespace SoapMethodAttribute
} // namespace app::classes::types
