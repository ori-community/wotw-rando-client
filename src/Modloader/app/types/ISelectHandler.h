#pragma once
#include <Modloader/app/structs/ISelectHandler.h>
#include <Modloader/app/structs/ISelectHandler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ISelectHandler {
        inline app::ISelectHandler__Class** type_info() {
            static app::ISelectHandler__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ISelectHandler__Class**)(modloader::win::memory::resolve_rva(0x04763450));
            }
            return cache;
        }
        inline app::ISelectHandler__Class* get_class() {
            return il2cpp::get_class<app::ISelectHandler__Class>(type_info(), "UnityEngine.EventSystems", "ISelectHandler");
        }
    } // namespace ISelectHandler
} // namespace app::classes::types
