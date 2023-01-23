#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/XUserGetTokenAndSignatureOptions__Enum__Class.h>
#include <Modloader/app/structs/XUserGetTokenAndSignatureOptions__Enum.h>

namespace app::classes::types {
    namespace XUserGetTokenAndSignatureOptions__Enum {
        namespace {
            inline app::XUserGetTokenAndSignatureOptions__Enum__Class* type_info_ref = nullptr;
        }
        inline app::XUserGetTokenAndSignatureOptions__Enum__Class** type_info = &type_info_ref;
        inline app::XUserGetTokenAndSignatureOptions__Enum__Class* get_class() {
            return il2cpp::get_class<app::XUserGetTokenAndSignatureOptions__Enum__Class>(type_info, "XGamingRuntime", "XUserGetTokenAndSignatureOptions");
        }
        inline app::XUserGetTokenAndSignatureOptions__Enum* create() {
            return il2cpp::create_object<app::XUserGetTokenAndSignatureOptions__Enum>(get_class());
        }
    } // namespace XUserGetTokenAndSignatureOptions__Enum
} // namespace app::classes::types
