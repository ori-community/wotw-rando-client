#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace UserGetTokenAndSignatureOptions__Enum {
        namespace {
            inline app::UserGetTokenAndSignatureOptions__Enum__Class* type_info_ref = nullptr;
        }
        inline app::UserGetTokenAndSignatureOptions__Enum__Class** type_info = &type_info_ref;
        inline app::UserGetTokenAndSignatureOptions__Enum__Class* get_class() {
            return il2cpp::get_class<app::UserGetTokenAndSignatureOptions__Enum__Class>(type_info, "Grdk", "UserGetTokenAndSignatureOptions");
        }
        inline app::UserGetTokenAndSignatureOptions__Enum* create() {
            return il2cpp::create_object<app::UserGetTokenAndSignatureOptions__Enum>(get_class());
        }
    } // namespace UserGetTokenAndSignatureOptions__Enum
} // namespace app::classes::types
