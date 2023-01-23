#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CheatsHandler_InitDebugMenu_d_14__Class.h>
#include <Modloader/app/structs/CheatsHandler_InitDebugMenu_d_14.h>

namespace app::classes::types {
    namespace CheatsHandler_InitDebugMenu_d_14 {
        inline app::CheatsHandler_InitDebugMenu_d_14__Class** type_info = (app::CheatsHandler_InitDebugMenu_d_14__Class**)(modloader::win::memory::resolve_rva(0x04700AA0));
        inline app::CheatsHandler_InitDebugMenu_d_14__Class* get_class() {
            return il2cpp::get_nested_class<app::CheatsHandler_InitDebugMenu_d_14__Class>(type_info, "", "CheatsHandler", "<InitDebugMenu>d__14");
        }
        inline app::CheatsHandler_InitDebugMenu_d_14* create() {
            return il2cpp::create_object<app::CheatsHandler_InitDebugMenu_d_14>(get_class());
        }
    } // namespace CheatsHandler_InitDebugMenu_d_14
} // namespace app::classes::types
