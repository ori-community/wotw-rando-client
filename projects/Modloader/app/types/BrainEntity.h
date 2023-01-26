#pragma once
#include <Modloader/app/structs/BrainEntity.h>
#include <Modloader/app/structs/BrainEntity__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BrainEntity {
        inline app::BrainEntity__Class** type_info() {
            static app::BrainEntity__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BrainEntity__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BrainEntity__Class* get_class() {
            return il2cpp::get_class<app::BrainEntity__Class>(type_info(), "Moon", "BrainEntity");
        }
        inline app::BrainEntity* create() {
            return il2cpp::create_object<app::BrainEntity>(get_class());
        }
    } // namespace BrainEntity
} // namespace app::classes::types
