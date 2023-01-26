#pragma once
#include <Modloader/app/structs/KuPushWall.h>
#include <Modloader/app/structs/KuPushWall__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KuPushWall {
        inline app::KuPushWall__Class** type_info() {
            static app::KuPushWall__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::KuPushWall__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::KuPushWall__Class* get_class() {
            return il2cpp::get_class<app::KuPushWall__Class>(type_info(), "", "KuPushWall");
        }
        inline app::KuPushWall* create() {
            return il2cpp::create_object<app::KuPushWall>(get_class());
        }
    } // namespace KuPushWall
} // namespace app::classes::types
