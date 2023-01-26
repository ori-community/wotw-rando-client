#pragma once
#include <Modloader/app/structs/GhostReplaysOverview.h>
#include <Modloader/app/structs/GhostReplaysOverview__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GhostReplaysOverview {
        inline app::GhostReplaysOverview__Class** type_info() {
            static app::GhostReplaysOverview__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GhostReplaysOverview__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GhostReplaysOverview__Class* get_class() {
            return il2cpp::get_class<app::GhostReplaysOverview__Class>(type_info(), "", "GhostReplaysOverview");
        }
        inline app::GhostReplaysOverview* create() {
            return il2cpp::create_object<app::GhostReplaysOverview>(get_class());
        }
    } // namespace GhostReplaysOverview
} // namespace app::classes::types
