#pragma once
#include <Modloader/app/structs/ForcedCooperation.h>
#include <Modloader/app/structs/ForcedCooperation__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ForcedCooperation {
        inline app::ForcedCooperation__Class** type_info() {
            static app::ForcedCooperation__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ForcedCooperation__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ForcedCooperation__Class* get_class() {
            return il2cpp::get_class<app::ForcedCooperation__Class>(type_info(), "ZenFulcrum.EmbeddedBrowser", "ForcedCooperation");
        }
        inline app::ForcedCooperation* create() {
            return il2cpp::create_object<app::ForcedCooperation>(get_class());
        }
    } // namespace ForcedCooperation
} // namespace app::classes::types
