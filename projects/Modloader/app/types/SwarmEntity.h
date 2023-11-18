#pragma once
#include <Modloader/app/structs/SwarmEntity.h>
#include <Modloader/app/structs/SwarmEntity__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SwarmEntity {
        inline app::SwarmEntity__Class** type_info() {
            static app::SwarmEntity__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SwarmEntity__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SwarmEntity__Class* get_class() {
            return il2cpp::get_class<app::SwarmEntity__Class>(type_info(), "", "SwarmEntity");
        }
        inline app::SwarmEntity* create() {
            return il2cpp::create_object<app::SwarmEntity>(get_class());
        }
    } // namespace SwarmEntity
} // namespace app::classes::types
