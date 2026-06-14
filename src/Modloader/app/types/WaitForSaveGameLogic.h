#pragma once
#include <Modloader/app/structs/WaitForSaveGameLogic.h>
#include <Modloader/app/structs/WaitForSaveGameLogic__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WaitForSaveGameLogic {
        inline app::WaitForSaveGameLogic__Class** type_info() {
            static app::WaitForSaveGameLogic__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::WaitForSaveGameLogic__Class**)(modloader::win::memory::resolve_rva(0x04750728));
            }
            return cache;
        }
        inline app::WaitForSaveGameLogic__Class* get_class() {
            return il2cpp::get_class<app::WaitForSaveGameLogic__Class>(type_info(), "", "WaitForSaveGameLogic");
        }
        inline app::WaitForSaveGameLogic* create() {
            return il2cpp::create_object<app::WaitForSaveGameLogic>(get_class());
        }
    } // namespace WaitForSaveGameLogic
} // namespace app::classes::types
