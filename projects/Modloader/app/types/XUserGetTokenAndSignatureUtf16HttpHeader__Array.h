#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XUserGetTokenAndSignatureUtf16HttpHeader__Array {
        namespace {
            inline app::XUserGetTokenAndSignatureUtf16HttpHeader__Array__Class* type_info_ref = nullptr;
        }
        inline app::XUserGetTokenAndSignatureUtf16HttpHeader__Array__Class** type_info = &type_info_ref;
        inline app::XUserGetTokenAndSignatureUtf16HttpHeader__Array__Class* get_class() {
            return il2cpp::get_class<app::XUserGetTokenAndSignatureUtf16HttpHeader__Array__Class>(type_info, "XGamingRuntime", "XUserGetTokenAndSignatureUtf16HttpHeader[]");
        }
        inline app::XUserGetTokenAndSignatureUtf16HttpHeader__Array* create() {
            return il2cpp::create_object<app::XUserGetTokenAndSignatureUtf16HttpHeader__Array>(get_class());
        }
    } // namespace XUserGetTokenAndSignatureUtf16HttpHeader__Array
} // namespace app::classes::types
