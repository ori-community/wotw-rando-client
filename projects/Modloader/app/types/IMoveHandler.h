#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IMoveHandler {
        inline app::IMoveHandler__Class** type_info = (app::IMoveHandler__Class**)(modloader::win::memory::resolve_rva(0x0474F398));
        inline app::IMoveHandler__Class* get_class() {
            return il2cpp::get_class<app::IMoveHandler__Class>(type_info, "UnityEngine.EventSystems", "IMoveHandler");
        }
    } // namespace IMoveHandler
} // namespace app::classes::types
