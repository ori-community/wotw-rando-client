#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace X509Helper2_MyNativeHelper {
        inline app::X509Helper2_MyNativeHelper__Class** type_info = (app::X509Helper2_MyNativeHelper__Class**)(modloader::win::memory::resolve_rva(0x047099B0));
        inline app::X509Helper2_MyNativeHelper__Class* get_class() {
            return il2cpp::get_nested_class<app::X509Helper2_MyNativeHelper__Class>(type_info, "System.Security.Cryptography.X509Certificates", "X509Helper2", "MyNativeHelper");
        }
        inline app::X509Helper2_MyNativeHelper* create() {
            return il2cpp::create_object<app::X509Helper2_MyNativeHelper>(get_class());
        }
    } // namespace X509Helper2_MyNativeHelper
} // namespace app::classes::types
