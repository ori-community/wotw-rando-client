#pragma once
#include <Modloader/app/structs/XUserGetTokenAndSignatureUtf16Data.h>
#include <Modloader/app/structs/XUserGetTokenAndSignatureUtf16Data__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XUserGetTokenAndSignatureUtf16Data {
        inline app::XUserGetTokenAndSignatureUtf16Data__Class** type_info() {
            static app::XUserGetTokenAndSignatureUtf16Data__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XUserGetTokenAndSignatureUtf16Data__Class**)(modloader::win::memory::resolve_rva(0x04787E20));
            }
            return cache;
        }
        inline app::XUserGetTokenAndSignatureUtf16Data__Class* get_class() {
            return il2cpp::get_class<app::XUserGetTokenAndSignatureUtf16Data__Class>(type_info(), "XGamingRuntime", "XUserGetTokenAndSignatureUtf16Data");
        }
        inline app::XUserGetTokenAndSignatureUtf16Data* create() {
            return il2cpp::create_object<app::XUserGetTokenAndSignatureUtf16Data>(get_class());
        }
    } // namespace XUserGetTokenAndSignatureUtf16Data
} // namespace app::classes::types
