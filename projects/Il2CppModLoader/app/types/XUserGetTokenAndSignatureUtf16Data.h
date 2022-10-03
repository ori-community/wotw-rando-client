#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XUserGetTokenAndSignatureUtf16Data {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XUserGetTokenAndSignatureUtf16Data__Class** type_info;
        inline app::XUserGetTokenAndSignatureUtf16Data__Class* get_class() {
            return il2cpp::get_class<app::XUserGetTokenAndSignatureUtf16Data__Class>(type_info, "XGamingRuntime", "XUserGetTokenAndSignatureUtf16Data");
        }
        inline app::XUserGetTokenAndSignatureUtf16Data* create() {
            return il2cpp::create_object<app::XUserGetTokenAndSignatureUtf16Data>(get_class());
        }
    } // namespace XUserGetTokenAndSignatureUtf16Data
} // namespace app::classes::types
