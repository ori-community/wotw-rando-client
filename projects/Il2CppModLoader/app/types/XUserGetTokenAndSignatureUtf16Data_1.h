#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XUserGetTokenAndSignatureUtf16Data_1 {
        inline app::XUserGetTokenAndSignatureUtf16Data_1__Class** type_info = (app::XUserGetTokenAndSignatureUtf16Data_1__Class**)(modloader::win::memory::resolve_rva(0x0470FD18));
        inline app::XUserGetTokenAndSignatureUtf16Data_1__Class* get_class() {
            return il2cpp::get_class<app::XUserGetTokenAndSignatureUtf16Data_1__Class>(type_info, "XGamingRuntime.Interop", "XUserGetTokenAndSignatureUtf16Data");
        }
        inline app::XUserGetTokenAndSignatureUtf16Data_1* create() {
            return il2cpp::create_object<app::XUserGetTokenAndSignatureUtf16Data_1>(get_class());
        }
        inline app::XUserGetTokenAndSignatureUtf16Data_1__Boxed* box(app::XUserGetTokenAndSignatureUtf16Data_1 value) {
            return il2cpp::box_value<app::XUserGetTokenAndSignatureUtf16Data_1__Boxed>(get_class(), value);
        }
    } // namespace XUserGetTokenAndSignatureUtf16Data_1
} // namespace app::classes::types
