#pragma once
#include <Modloader/app/structs/TreeKeeperEntity.h>
#include <Modloader/app/structs/TreeKeeperEntity__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TreeKeeperEntity {
        inline app::TreeKeeperEntity__Class** type_info() {
            static app::TreeKeeperEntity__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TreeKeeperEntity__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TreeKeeperEntity__Class* get_class() {
            return il2cpp::get_class<app::TreeKeeperEntity__Class>(type_info(), "", "TreeKeeperEntity");
        }
        inline app::TreeKeeperEntity* create() {
            return il2cpp::create_object<app::TreeKeeperEntity>(get_class());
        }
    } // namespace TreeKeeperEntity
} // namespace app::classes::types
