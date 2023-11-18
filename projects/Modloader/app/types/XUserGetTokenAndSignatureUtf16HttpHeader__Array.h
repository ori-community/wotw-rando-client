#pragma once
#include <Modloader/app/structs/XUserGetTokenAndSignatureUtf16HttpHeader__Array.h>
#include <Modloader/app/structs/XUserGetTokenAndSignatureUtf16HttpHeader__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XUserGetTokenAndSignatureUtf16HttpHeader__Array {
        inline app::XUserGetTokenAndSignatureUtf16HttpHeader__Array__Class** type_info() {
            static app::XUserGetTokenAndSignatureUtf16HttpHeader__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XUserGetTokenAndSignatureUtf16HttpHeader__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XUserGetTokenAndSignatureUtf16HttpHeader__Array__Class* get_class() {
            return il2cpp::get_class<app::XUserGetTokenAndSignatureUtf16HttpHeader__Array__Class>(type_info(), "XGamingRuntime", "XUserGetTokenAndSignatureUtf16HttpHeader[]");
        }
        inline app::XUserGetTokenAndSignatureUtf16HttpHeader__Array* create() {
            return il2cpp::create_object<app::XUserGetTokenAndSignatureUtf16HttpHeader__Array>(get_class());
        }
    } // namespace XUserGetTokenAndSignatureUtf16HttpHeader__Array
} // namespace app::classes::types
