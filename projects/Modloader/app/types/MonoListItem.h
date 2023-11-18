#pragma once
#include <Modloader/app/structs/MonoListItem.h>
#include <Modloader/app/structs/MonoListItem__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MonoListItem {
        inline app::MonoListItem__Class** type_info() {
            static app::MonoListItem__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MonoListItem__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MonoListItem__Class* get_class() {
            return il2cpp::get_class<app::MonoListItem__Class>(type_info(), "System", "MonoListItem");
        }
        inline app::MonoListItem* create() {
            return il2cpp::create_object<app::MonoListItem>(get_class());
        }
    } // namespace MonoListItem
} // namespace app::classes::types
