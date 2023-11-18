#pragma once
#include <Modloader/app/structs/IDesignerHost.h>
#include <Modloader/app/structs/IDesignerHost__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IDesignerHost {
        inline app::IDesignerHost__Class** type_info() {
            static app::IDesignerHost__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IDesignerHost__Class**)(modloader::win::memory::resolve_rva(0x0476D530));
            }
            return cache;
        }
        inline app::IDesignerHost__Class* get_class() {
            return il2cpp::get_class<app::IDesignerHost__Class>(type_info(), "System.ComponentModel.Design", "IDesignerHost");
        }
    } // namespace IDesignerHost
} // namespace app::classes::types
