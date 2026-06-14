#pragma once
#include <Modloader/app/structs/XUserGetTokenAndSignatureOptions__Enum.h>
#include <Modloader/app/structs/XUserGetTokenAndSignatureOptions__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XUserGetTokenAndSignatureOptions__Enum {
        inline app::XUserGetTokenAndSignatureOptions__Enum__Class** type_info() {
            static app::XUserGetTokenAndSignatureOptions__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XUserGetTokenAndSignatureOptions__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XUserGetTokenAndSignatureOptions__Enum__Class* get_class() {
            return il2cpp::get_class<app::XUserGetTokenAndSignatureOptions__Enum__Class>(type_info(), "XGamingRuntime", "XUserGetTokenAndSignatureOptions");
        }
        inline app::XUserGetTokenAndSignatureOptions__Enum* create() {
            return il2cpp::create_object<app::XUserGetTokenAndSignatureOptions__Enum>(get_class());
        }
    } // namespace XUserGetTokenAndSignatureOptions__Enum
} // namespace app::classes::types
