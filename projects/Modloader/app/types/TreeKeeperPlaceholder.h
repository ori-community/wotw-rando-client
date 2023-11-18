#pragma once
#include <Modloader/app/structs/TreeKeeperPlaceholder.h>
#include <Modloader/app/structs/TreeKeeperPlaceholder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TreeKeeperPlaceholder {
        inline app::TreeKeeperPlaceholder__Class** type_info() {
            static app::TreeKeeperPlaceholder__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TreeKeeperPlaceholder__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TreeKeeperPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::TreeKeeperPlaceholder__Class>(type_info(), "", "TreeKeeperPlaceholder");
        }
        inline app::TreeKeeperPlaceholder* create() {
            return il2cpp::create_object<app::TreeKeeperPlaceholder>(get_class());
        }
    } // namespace TreeKeeperPlaceholder
} // namespace app::classes::types
