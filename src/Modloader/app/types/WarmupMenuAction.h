#pragma once
#include <Modloader/app/structs/WarmupMenuAction.h>
#include <Modloader/app/structs/WarmupMenuAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WarmupMenuAction {
        inline app::WarmupMenuAction__Class** type_info() {
            static app::WarmupMenuAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WarmupMenuAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WarmupMenuAction__Class* get_class() {
            return il2cpp::get_class<app::WarmupMenuAction__Class>(type_info(), "", "WarmupMenuAction");
        }
        inline app::WarmupMenuAction* create() {
            return il2cpp::create_object<app::WarmupMenuAction>(get_class());
        }
    } // namespace WarmupMenuAction
} // namespace app::classes::types
