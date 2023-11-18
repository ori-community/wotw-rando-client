#pragma once
#include <Modloader/app/structs/ICancelHandler.h>
#include <Modloader/app/structs/ICancelHandler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ICancelHandler {
        inline app::ICancelHandler__Class** type_info() {
            static app::ICancelHandler__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ICancelHandler__Class**)(modloader::win::memory::resolve_rva(0x0475B4A0));
            }
            return cache;
        }
        inline app::ICancelHandler__Class* get_class() {
            return il2cpp::get_class<app::ICancelHandler__Class>(type_info(), "UnityEngine.EventSystems", "ICancelHandler");
        }
    } // namespace ICancelHandler
} // namespace app::classes::types
