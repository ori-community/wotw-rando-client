#pragma once
#include <Modloader/app/structs/KuIdle.h>
#include <Modloader/app/structs/KuIdle__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KuIdle {
        inline app::KuIdle__Class** type_info() {
            static app::KuIdle__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::KuIdle__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::KuIdle__Class* get_class() {
            return il2cpp::get_class<app::KuIdle__Class>(type_info(), "", "KuIdle");
        }
        inline app::KuIdle* create() {
            return il2cpp::create_object<app::KuIdle>(get_class());
        }
    } // namespace KuIdle
} // namespace app::classes::types
