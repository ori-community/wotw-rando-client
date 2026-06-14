#pragma once
#include <Modloader/app/structs/INewWindowHandler.h>
#include <Modloader/app/structs/INewWindowHandler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace INewWindowHandler {
        inline app::INewWindowHandler__Class** type_info() {
            static app::INewWindowHandler__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::INewWindowHandler__Class**)(modloader::win::memory::resolve_rva(0x04762E18));
            }
            return cache;
        }
        inline app::INewWindowHandler__Class* get_class() {
            return il2cpp::get_class<app::INewWindowHandler__Class>(type_info(), "ZenFulcrum.EmbeddedBrowser", "INewWindowHandler");
        }
    } // namespace INewWindowHandler
} // namespace app::classes::types
