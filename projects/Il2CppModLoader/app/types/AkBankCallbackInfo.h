#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AkBankCallbackInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AkBankCallbackInfo__Class** type_info;
        inline app::AkBankCallbackInfo__Class* get_class() {
            return il2cpp::get_class<app::AkBankCallbackInfo__Class>(type_info, "", "AkBankCallbackInfo");
        }
        inline app::AkBankCallbackInfo* create() {
            return il2cpp::create_object<app::AkBankCallbackInfo>(get_class());
        }
    } // namespace AkBankCallbackInfo
} // namespace app::classes::types
