#pragma once
#include <Modloader/app/structs/IDropHandler.h>
#include <Modloader/app/structs/IDropHandler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IDropHandler {
        inline app::IDropHandler__Class** type_info() {
            static app::IDropHandler__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IDropHandler__Class**)(modloader::win::memory::resolve_rva(0x0477D420));
            }
            return cache;
        }
        inline app::IDropHandler__Class* get_class() {
            return il2cpp::get_class<app::IDropHandler__Class>(type_info(), "UnityEngine.EventSystems", "IDropHandler");
        }
    } // namespace IDropHandler
} // namespace app::classes::types
