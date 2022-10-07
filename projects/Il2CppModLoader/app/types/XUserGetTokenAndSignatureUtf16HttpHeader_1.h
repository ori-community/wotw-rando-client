#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XUserGetTokenAndSignatureUtf16HttpHeader_1 {
        namespace {
            app::XUserGetTokenAndSignatureUtf16HttpHeader_1__Class* type_info_ref = nullptr;
        }
        app::XUserGetTokenAndSignatureUtf16HttpHeader_1__Class** type_info = &type_info_ref;
        inline app::XUserGetTokenAndSignatureUtf16HttpHeader_1__Class* get_class() {
            return il2cpp::get_class<app::XUserGetTokenAndSignatureUtf16HttpHeader_1__Class>(type_info, "XGamingRuntime.Interop", "XUserGetTokenAndSignatureUtf16HttpHeader");
        }
        inline app::XUserGetTokenAndSignatureUtf16HttpHeader_1* create() {
            return il2cpp::create_object<app::XUserGetTokenAndSignatureUtf16HttpHeader_1>(get_class());
        }
        inline app::XUserGetTokenAndSignatureUtf16HttpHeader_1__Boxed* box(app::XUserGetTokenAndSignatureUtf16HttpHeader_1 value) {
            return il2cpp::box_value<app::XUserGetTokenAndSignatureUtf16HttpHeader_1__Boxed>(get_class(), value);
        }
        inline app::XUserGetTokenAndSignatureUtf16HttpHeader_1__Array* create_array(int size) {
            return il2cpp::array_new<app::XUserGetTokenAndSignatureUtf16HttpHeader_1__Array>(get_class(), size);
        }
        inline app::XUserGetTokenAndSignatureUtf16HttpHeader_1__Array* create_array(const std::vector<app::XUserGetTokenAndSignatureUtf16HttpHeader_1>& items) {
            return il2cpp::array_new<app::XUserGetTokenAndSignatureUtf16HttpHeader_1__Array>(get_class(), items);
        }
    } // namespace XUserGetTokenAndSignatureUtf16HttpHeader_1
} // namespace app::classes::types
