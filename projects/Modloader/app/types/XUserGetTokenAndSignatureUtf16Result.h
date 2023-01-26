#pragma once
#include <Modloader/app/structs/XUserGetTokenAndSignatureUtf16Result.h>
#include <Modloader/app/structs/XUserGetTokenAndSignatureUtf16Result__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XUserGetTokenAndSignatureUtf16Result {
        inline app::XUserGetTokenAndSignatureUtf16Result__Class** type_info() {
            static app::XUserGetTokenAndSignatureUtf16Result__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XUserGetTokenAndSignatureUtf16Result__Class**)(modloader::win::memory::resolve_rva(0x0472CD18));
            }
            return cache;
        }
        inline app::XUserGetTokenAndSignatureUtf16Result__Class* get_class() {
            return il2cpp::get_class<app::XUserGetTokenAndSignatureUtf16Result__Class>(type_info(), "XGamingRuntime", "XUserGetTokenAndSignatureUtf16Result");
        }
        inline app::XUserGetTokenAndSignatureUtf16Result* create() {
            return il2cpp::create_object<app::XUserGetTokenAndSignatureUtf16Result>(get_class());
        }
    } // namespace XUserGetTokenAndSignatureUtf16Result
} // namespace app::classes::types
