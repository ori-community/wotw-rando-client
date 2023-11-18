#pragma once
#include <Modloader/app/structs/AkBankCallbackInfo.h>
#include <Modloader/app/structs/AkBankCallbackInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AkBankCallbackInfo {
        inline app::AkBankCallbackInfo__Class** type_info() {
            static app::AkBankCallbackInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AkBankCallbackInfo__Class**)(modloader::win::memory::resolve_rva(0x04720E10));
            }
            return cache;
        }
        inline app::AkBankCallbackInfo__Class* get_class() {
            return il2cpp::get_class<app::AkBankCallbackInfo__Class>(type_info(), "", "AkBankCallbackInfo");
        }
        inline app::AkBankCallbackInfo* create() {
            return il2cpp::create_object<app::AkBankCallbackInfo>(get_class());
        }
    } // namespace AkBankCallbackInfo
} // namespace app::classes::types
