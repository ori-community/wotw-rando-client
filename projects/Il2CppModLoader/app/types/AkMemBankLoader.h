#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AkMemBankLoader {
        namespace {
            inline app::AkMemBankLoader__Class* type_info_ref = nullptr;
        }
        inline app::AkMemBankLoader__Class** type_info = &type_info_ref;
        inline app::AkMemBankLoader__Class* get_class() {
            return il2cpp::get_class<app::AkMemBankLoader__Class>(type_info, "", "AkMemBankLoader");
        }
        inline app::AkMemBankLoader* create() {
            return il2cpp::create_object<app::AkMemBankLoader>(get_class());
        }
    } // namespace AkMemBankLoader
} // namespace app::classes::types
