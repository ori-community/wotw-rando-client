#pragma once
#include <Modloader/app/structs/IExplicitUpdateHandlerBase.h>
#include <Modloader/app/structs/IExplicitUpdateHandlerBase__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IExplicitUpdateHandlerBase {
        inline app::IExplicitUpdateHandlerBase__Class** type_info() {
            static app::IExplicitUpdateHandlerBase__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IExplicitUpdateHandlerBase__Class**)(modloader::win::memory::resolve_rva(0x0475CD70));
            }
            return cache;
        }
        inline app::IExplicitUpdateHandlerBase__Class* get_class() {
            return il2cpp::get_class<app::IExplicitUpdateHandlerBase__Class>(type_info(), "Moon", "IExplicitUpdateHandlerBase");
        }
    } // namespace IExplicitUpdateHandlerBase
} // namespace app::classes::types
