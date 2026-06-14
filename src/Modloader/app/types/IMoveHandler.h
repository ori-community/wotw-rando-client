#pragma once
#include <Modloader/app/structs/IMoveHandler.h>
#include <Modloader/app/structs/IMoveHandler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IMoveHandler {
        inline app::IMoveHandler__Class** type_info() {
            static app::IMoveHandler__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IMoveHandler__Class**)(modloader::win::memory::resolve_rva(0x0474F398));
            }
            return cache;
        }
        inline app::IMoveHandler__Class* get_class() {
            return il2cpp::get_class<app::IMoveHandler__Class>(type_info(), "UnityEngine.EventSystems", "IMoveHandler");
        }
    } // namespace IMoveHandler
} // namespace app::classes::types
