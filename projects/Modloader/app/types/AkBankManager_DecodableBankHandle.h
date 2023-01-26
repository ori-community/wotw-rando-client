#pragma once
#include <Modloader/app/structs/AkBankManager_DecodableBankHandle.h>
#include <Modloader/app/structs/AkBankManager_DecodableBankHandle__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AkBankManager_DecodableBankHandle {
        inline app::AkBankManager_DecodableBankHandle__Class** type_info() {
            static app::AkBankManager_DecodableBankHandle__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AkBankManager_DecodableBankHandle__Class**)(modloader::win::memory::resolve_rva(0x04736030));
            }
            return cache;
        }
        inline app::AkBankManager_DecodableBankHandle__Class* get_class() {
            return il2cpp::get_nested_class<app::AkBankManager_DecodableBankHandle__Class>(type_info(), "", "AkBankManager", "DecodableBankHandle");
        }
        inline app::AkBankManager_DecodableBankHandle* create() {
            return il2cpp::create_object<app::AkBankManager_DecodableBankHandle>(get_class());
        }
    } // namespace AkBankManager_DecodableBankHandle
} // namespace app::classes::types
