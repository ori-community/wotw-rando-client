#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace INewWindowHandler {
        inline app::INewWindowHandler__Class** type_info = (app::INewWindowHandler__Class**)(modloader::win::memory::resolve_rva(0x04762E18));
        inline app::INewWindowHandler__Class* get_class() {
            return il2cpp::get_class<app::INewWindowHandler__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "INewWindowHandler");
        }
    } // namespace INewWindowHandler
} // namespace app::classes::types
