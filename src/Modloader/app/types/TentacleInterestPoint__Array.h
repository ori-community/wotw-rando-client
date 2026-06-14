#pragma once
#include <Modloader/app/structs/TentacleInterestPoint__Array.h>
#include <Modloader/app/structs/TentacleInterestPoint__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TentacleInterestPoint__Array {
        inline app::TentacleInterestPoint__Array__Class** type_info() {
            static app::TentacleInterestPoint__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TentacleInterestPoint__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TentacleInterestPoint__Array__Class* get_class() {
            return il2cpp::get_class<app::TentacleInterestPoint__Array__Class>(type_info(), "", "TentacleInterestPoint[]");
        }
        inline app::TentacleInterestPoint__Array* create() {
            return il2cpp::create_object<app::TentacleInterestPoint__Array>(get_class());
        }
    } // namespace TentacleInterestPoint__Array
} // namespace app::classes::types
