#pragma once
#include <Modloader/app/structs/UserGetTokenAndSignatureOptions__Enum.h>
#include <Modloader/app/structs/UserGetTokenAndSignatureOptions__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UserGetTokenAndSignatureOptions__Enum {
        inline app::UserGetTokenAndSignatureOptions__Enum__Class** type_info() {
            static app::UserGetTokenAndSignatureOptions__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UserGetTokenAndSignatureOptions__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UserGetTokenAndSignatureOptions__Enum__Class* get_class() {
            return il2cpp::get_class<app::UserGetTokenAndSignatureOptions__Enum__Class>(type_info(), "Grdk", "UserGetTokenAndSignatureOptions");
        }
        inline app::UserGetTokenAndSignatureOptions__Enum* create() {
            return il2cpp::create_object<app::UserGetTokenAndSignatureOptions__Enum>(get_class());
        }
    } // namespace UserGetTokenAndSignatureOptions__Enum
} // namespace app::classes::types
