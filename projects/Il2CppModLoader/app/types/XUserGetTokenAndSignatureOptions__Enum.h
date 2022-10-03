#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XUserGetTokenAndSignatureOptions__Enum {
        namespace {
            app::XUserGetTokenAndSignatureOptions__Enum__Class* type_info_ref = nullptr;
        }
        app::XUserGetTokenAndSignatureOptions__Enum__Class** type_info = &type_info_ref;
        inline app::XUserGetTokenAndSignatureOptions__Enum__Class* get_class() {
            return il2cpp::get_class<app::XUserGetTokenAndSignatureOptions__Enum__Class>(type_info, "XGamingRuntime", "XUserGetTokenAndSignatureOptions");
        }
        inline app::XUserGetTokenAndSignatureOptions__Enum* create() {
            return il2cpp::create_object<app::XUserGetTokenAndSignatureOptions__Enum>(get_class());
        }
    } // namespace XUserGetTokenAndSignatureOptions__Enum
} // namespace app::classes::types
