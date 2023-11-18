#pragma once
#include <Modloader/app/structs/XUserGetTokenAndSignatureUtf16HttpHeader.h>
#include <Modloader/app/structs/XUserGetTokenAndSignatureUtf16HttpHeader__Array.h>
#include <Modloader/app/structs/XUserGetTokenAndSignatureUtf16HttpHeader__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XUserGetTokenAndSignatureUtf16HttpHeader {
        inline app::XUserGetTokenAndSignatureUtf16HttpHeader__Class** type_info() {
            static app::XUserGetTokenAndSignatureUtf16HttpHeader__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XUserGetTokenAndSignatureUtf16HttpHeader__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XUserGetTokenAndSignatureUtf16HttpHeader__Class* get_class() {
            return il2cpp::get_class<app::XUserGetTokenAndSignatureUtf16HttpHeader__Class>(type_info(), "XGamingRuntime", "XUserGetTokenAndSignatureUtf16HttpHeader");
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
