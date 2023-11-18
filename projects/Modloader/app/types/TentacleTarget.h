#pragma once
#include <Modloader/app/structs/TentacleTarget.h>
#include <Modloader/app/structs/TentacleTarget__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TentacleTarget {
        inline app::TentacleTarget__Class** type_info() {
            static app::TentacleTarget__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TentacleTarget__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TentacleTarget__Class* get_class() {
            return il2cpp::get_class<app::TentacleTarget__Class>(type_info(), "", "TentacleTarget");
        }
        inline app::TentacleTarget* create() {
            return il2cpp::create_object<app::TentacleTarget>(get_class());
        }
    } // namespace TentacleTarget
} // namespace app::classes::types
