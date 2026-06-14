#pragma once
#include <Modloader/app/structs/IFlameHandler.h>
#include <Modloader/app/structs/IFlameHandler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IFlameHandler {
        inline app::IFlameHandler__Class** type_info() {
            static app::IFlameHandler__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IFlameHandler__Class**)(modloader::win::memory::resolve_rva(0x0470CF60));
            }
            return cache;
        }
        inline app::IFlameHandler__Class* get_class() {
            return il2cpp::get_class<app::IFlameHandler__Class>(type_info(), "Moon", "IFlameHandler");
        }
    } // namespace IFlameHandler
} // namespace app::classes::types
