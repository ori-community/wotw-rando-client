#pragma once
#include <Modloader/app/structs/AkBankManager.h>
#include <Modloader/app/structs/AkBankManager__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AkBankManager {
        inline app::AkBankManager__Class** type_info() {
            static app::AkBankManager__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AkBankManager__Class**)(modloader::win::memory::resolve_rva(0x0477A940));
            }
            return cache;
        }
        inline app::AkBankManager__Class* get_class() {
            return il2cpp::get_class<app::AkBankManager__Class>(type_info(), "", "AkBankManager");
        }
        inline app::AkBankManager* create() {
            return il2cpp::create_object<app::AkBankManager>(get_class());
        }
    } // namespace AkBankManager
} // namespace app::classes::types
