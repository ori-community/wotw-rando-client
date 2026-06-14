#pragma once
#include <Modloader/app/structs/MatchJointsPostprocess.h>
#include <Modloader/app/structs/MatchJointsPostprocess__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MatchJointsPostprocess {
        inline app::MatchJointsPostprocess__Class** type_info() {
            static app::MatchJointsPostprocess__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MatchJointsPostprocess__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MatchJointsPostprocess__Class* get_class() {
            return il2cpp::get_class<app::MatchJointsPostprocess__Class>(type_info(), "Moon.Animation", "MatchJointsPostprocess");
        }
        inline app::MatchJointsPostprocess* create() {
            return il2cpp::create_object<app::MatchJointsPostprocess>(get_class());
        }
    } // namespace MatchJointsPostprocess
} // namespace app::classes::types
