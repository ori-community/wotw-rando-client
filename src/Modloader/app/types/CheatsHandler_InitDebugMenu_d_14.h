#pragma once
#include <Modloader/app/structs/CheatsHandler_InitDebugMenu_d_14.h>
#include <Modloader/app/structs/CheatsHandler_InitDebugMenu_d_14__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CheatsHandler_InitDebugMenu_d_14 {
        inline app::CheatsHandler_InitDebugMenu_d_14__Class** type_info() {
            static app::CheatsHandler_InitDebugMenu_d_14__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CheatsHandler_InitDebugMenu_d_14__Class**)(modloader::win::memory::resolve_rva(0x04700AA0));
            }
            return cache;
        }
        inline app::CheatsHandler_InitDebugMenu_d_14__Class* get_class() {
            return il2cpp::get_nested_class<app::CheatsHandler_InitDebugMenu_d_14__Class>(type_info(), "", "CheatsHandler", "<InitDebugMenu>d__14");
        }
        inline app::CheatsHandler_InitDebugMenu_d_14* create() {
            return il2cpp::create_object<app::CheatsHandler_InitDebugMenu_d_14>(get_class());
        }
    } // namespace CheatsHandler_InitDebugMenu_d_14
} // namespace app::classes::types
