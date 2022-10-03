#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XUserGetTokenAndSignatureUtf16Result {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XUserGetTokenAndSignatureUtf16Result__Class** type_info;
        inline app::XUserGetTokenAndSignatureUtf16Result__Class* get_class() {
            return il2cpp::get_class<app::XUserGetTokenAndSignatureUtf16Result__Class>(type_info, "XGamingRuntime", "XUserGetTokenAndSignatureUtf16Result");
        }
        inline app::XUserGetTokenAndSignatureUtf16Result* create() {
            return il2cpp::create_object<app::XUserGetTokenAndSignatureUtf16Result>(get_class());
        }
    } // namespace XUserGetTokenAndSignatureUtf16Result
} // namespace app::classes::types
