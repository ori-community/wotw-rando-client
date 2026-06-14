#pragma once
#include <Modloader/app/structs/AkBankContent__Enum.h>
#include <Modloader/app/structs/AkBankContent__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AkBankContent__Enum {
        inline app::AkBankContent__Enum__Class** type_info() {
            static app::AkBankContent__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AkBankContent__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AkBankContent__Enum__Class* get_class() {
            return il2cpp::get_class<app::AkBankContent__Enum__Class>(type_info(), "", "AkBankContent");
        }
        inline app::AkBankContent__Enum* create() {
            return il2cpp::create_object<app::AkBankContent__Enum>(get_class());
        }
    } // namespace AkBankContent__Enum
} // namespace app::classes::types
