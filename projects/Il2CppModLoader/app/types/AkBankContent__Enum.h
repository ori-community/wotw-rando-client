#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AkBankContent__Enum {
        namespace {
            app::AkBankContent__Enum__Class* type_info_ref = nullptr;
        }
        app::AkBankContent__Enum__Class** type_info = &type_info_ref;
        inline app::AkBankContent__Enum__Class* get_class() {
            return il2cpp::get_class<app::AkBankContent__Enum__Class>(type_info, "", "AkBankContent");
        }
        inline app::AkBankContent__Enum* create() {
            return il2cpp::create_object<app::AkBankContent__Enum>(get_class());
        }
    } // namespace AkBankContent__Enum
} // namespace app::classes::types
