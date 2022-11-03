#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AkBankManager {
        inline app::AkBankManager__Class** type_info = (app::AkBankManager__Class**)(modloader::win::memory::resolve_rva(0x0477A940));
        inline app::AkBankManager__Class* get_class() {
            return il2cpp::get_class<app::AkBankManager__Class>(type_info, "", "AkBankManager");
        }
        inline app::AkBankManager* create() {
            return il2cpp::create_object<app::AkBankManager>(get_class());
        }
    } // namespace AkBankManager
} // namespace app::classes::types
