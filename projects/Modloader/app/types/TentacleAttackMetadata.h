#pragma once
#include <Modloader/app/structs/TentacleAttackMetadata.h>
#include <Modloader/app/structs/TentacleAttackMetadata__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TentacleAttackMetadata {
        inline app::TentacleAttackMetadata__Class** type_info() {
            static app::TentacleAttackMetadata__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TentacleAttackMetadata__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TentacleAttackMetadata__Class* get_class() {
            return il2cpp::get_class<app::TentacleAttackMetadata__Class>(type_info(), "Moon", "TentacleAttackMetadata");
        }
        inline app::TentacleAttackMetadata* create() {
            return il2cpp::create_object<app::TentacleAttackMetadata>(get_class());
        }
    } // namespace TentacleAttackMetadata
} // namespace app::classes::types
