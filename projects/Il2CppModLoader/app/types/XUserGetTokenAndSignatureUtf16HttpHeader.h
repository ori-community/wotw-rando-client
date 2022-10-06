#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XUserGetTokenAndSignatureUtf16HttpHeader {
        namespace {
            app::XUserGetTokenAndSignatureUtf16HttpHeader__Class* type_info_ref = nullptr;
        }
        app::XUserGetTokenAndSignatureUtf16HttpHeader__Class** type_info = &type_info_ref;
        inline app::XUserGetTokenAndSignatureUtf16HttpHeader__Class* get_class() {
            return il2cpp::get_class<app::XUserGetTokenAndSignatureUtf16HttpHeader__Class>(type_info, "XGamingRuntime", "XUserGetTokenAndSignatureUtf16HttpHeader");
        }
        inline app::XUserGetTokenAndSignatureUtf16HttpHeader* create() {
            return il2cpp::create_object<app::XUserGetTokenAndSignatureUtf16HttpHeader>(get_class());
        }
        inline app::XUserGetTokenAndSignatureUtf16HttpHeader__Array* create_array(int size) {
            return il2cpp::array_new<app::XUserGetTokenAndSignatureUtf16HttpHeader__Array>(get_class(), size);
        }
        inline app::XUserGetTokenAndSignatureUtf16HttpHeader__Array* create_array(const std::vector<app::XUserGetTokenAndSignatureUtf16HttpHeader*>& items) {
            return il2cpp::array_new<app::XUserGetTokenAndSignatureUtf16HttpHeader__Array>(get_class(), items);
        }
    } // namespace XUserGetTokenAndSignatureUtf16HttpHeader
} // namespace app::classes::types
