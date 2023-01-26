#pragma once
#include <Modloader/app/structs/TentacleHead.h>
#include <Modloader/app/structs/TentacleHead__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TentacleHead {
        inline app::TentacleHead__Class** type_info() {
            static app::TentacleHead__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TentacleHead__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TentacleHead__Class* get_class() {
            return il2cpp::get_class<app::TentacleHead__Class>(type_info(), "", "TentacleHead");
        }
        inline app::TentacleHead* create() {
            return il2cpp::create_object<app::TentacleHead>(get_class());
        }
    } // namespace TentacleHead
} // namespace app::classes::types
