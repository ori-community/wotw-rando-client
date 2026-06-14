#pragma once
#include <Modloader/app/structs/SwarmNestEntity.h>
#include <Modloader/app/structs/SwarmNestEntity__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SwarmNestEntity {
        inline app::SwarmNestEntity__Class** type_info() {
            static app::SwarmNestEntity__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SwarmNestEntity__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SwarmNestEntity__Class* get_class() {
            return il2cpp::get_class<app::SwarmNestEntity__Class>(type_info(), "", "SwarmNestEntity");
        }
        inline app::SwarmNestEntity* create() {
            return il2cpp::create_object<app::SwarmNestEntity>(get_class());
        }
    } // namespace SwarmNestEntity
} // namespace app::classes::types
