#pragma once
#include <Modloader/app/structs/AkBankManager_AsyncBankHandle.h>
#include <Modloader/app/structs/AkBankManager_AsyncBankHandle__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AkBankManager_AsyncBankHandle {
        inline app::AkBankManager_AsyncBankHandle__Class** type_info() {
            static app::AkBankManager_AsyncBankHandle__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AkBankManager_AsyncBankHandle__Class**)(modloader::win::memory::resolve_rva(0x04724CA8));
            }
            return cache;
        }
        inline app::AkBankManager_AsyncBankHandle__Class* get_class() {
            return il2cpp::get_nested_class<app::AkBankManager_AsyncBankHandle__Class>(type_info(), "", "AkBankManager", "AsyncBankHandle");
        }
        inline app::AkBankManager_AsyncBankHandle* create() {
            return il2cpp::create_object<app::AkBankManager_AsyncBankHandle>(get_class());
        }
    } // namespace AkBankManager_AsyncBankHandle
} // namespace app::classes::types
