#pragma once
#include <Modloader/app/structs/VisualLog.h>
#include <Modloader/app/structs/VisualLog__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VisualLog {
        inline app::VisualLog__Class** type_info() {
            static app::VisualLog__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::VisualLog__Class**)(modloader::win::memory::resolve_rva(0x0476BB70));
            }
            return cache;
        }
        inline app::VisualLog__Class* get_class() {
            return il2cpp::get_class<app::VisualLog__Class>(type_info(), "", "VisualLog");
        }
        inline app::VisualLog* create() {
            return il2cpp::create_object<app::VisualLog>(get_class());
        }
    } // namespace VisualLog
} // namespace app::classes::types
