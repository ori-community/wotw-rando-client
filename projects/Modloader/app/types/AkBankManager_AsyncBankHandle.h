#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AkBankManager_AsyncBankHandle {
        inline app::AkBankManager_AsyncBankHandle__Class** type_info = (app::AkBankManager_AsyncBankHandle__Class**)(modloader::win::memory::resolve_rva(0x04724CA8));
        inline app::AkBankManager_AsyncBankHandle__Class* get_class() {
            return il2cpp::get_nested_class<app::AkBankManager_AsyncBankHandle__Class>(type_info, "", "AkBankManager", "AsyncBankHandle");
        }
        inline app::AkBankManager_AsyncBankHandle* create() {
            return il2cpp::create_object<app::AkBankManager_AsyncBankHandle>(get_class());
        }
    } // namespace AkBankManager_AsyncBankHandle
} // namespace app::classes::types
