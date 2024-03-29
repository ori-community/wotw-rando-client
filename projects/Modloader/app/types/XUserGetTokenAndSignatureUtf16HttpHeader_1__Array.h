#pragma once
#include <Modloader/app/structs/XUserGetTokenAndSignatureUtf16HttpHeader_1__Array.h>
#include <Modloader/app/structs/XUserGetTokenAndSignatureUtf16HttpHeader_1__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XUserGetTokenAndSignatureUtf16HttpHeader_1__Array {
        inline app::XUserGetTokenAndSignatureUtf16HttpHeader_1__Array__Class** type_info() {
            static app::XUserGetTokenAndSignatureUtf16HttpHeader_1__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XUserGetTokenAndSignatureUtf16HttpHeader_1__Array__Class**)(modloader::win::memory::resolve_rva(0x0473AC40));
            }
            return cache;
        }
        inline app::XUserGetTokenAndSignatureUtf16HttpHeader_1__Array__Class* get_class() {
            return il2cpp::get_class<app::XUserGetTokenAndSignatureUtf16HttpHeader_1__Array__Class>(type_info(), "XGamingRuntime.Interop", "XUserGetTokenAndSignatureUtf16HttpHeader[]");
        }
        inline app::XUserGetTokenAndSignatureUtf16HttpHeader_1__Array* create() {
            return il2cpp::create_object<app::XUserGetTokenAndSignatureUtf16HttpHeader_1__Array>(get_class());
        }
    } // namespace XUserGetTokenAndSignatureUtf16HttpHeader_1__Array
} // namespace app::classes::types
