#pragma once
#include <Modloader/app/structs/IUpdateHandler.h>
#include <Modloader/app/structs/IUpdateHandler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IUpdateHandler {
        inline app::IUpdateHandler__Class** type_info() {
            static app::IUpdateHandler__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IUpdateHandler__Class**)(modloader::win::memory::resolve_rva(0x04768B30));
            }
            return cache;
        }
        inline app::IUpdateHandler__Class* get_class() {
            return il2cpp::get_class<app::IUpdateHandler__Class>(type_info(), "Moon", "IUpdateHandler");
        }
    } // namespace IUpdateHandler
} // namespace app::classes::types
