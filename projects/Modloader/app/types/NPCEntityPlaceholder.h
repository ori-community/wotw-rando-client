#pragma once
#include <Modloader/app/structs/NPCEntityPlaceholder.h>
#include <Modloader/app/structs/NPCEntityPlaceholder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NPCEntityPlaceholder {
        inline app::NPCEntityPlaceholder__Class** type_info() {
            static app::NPCEntityPlaceholder__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NPCEntityPlaceholder__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NPCEntityPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::NPCEntityPlaceholder__Class>(type_info(), "", "NPCEntityPlaceholder");
        }
        inline app::NPCEntityPlaceholder* create() {
            return il2cpp::create_object<app::NPCEntityPlaceholder>(get_class());
        }
    } // namespace NPCEntityPlaceholder
} // namespace app::classes::types
