#pragma once
#include <Modloader/app/structs/KuLand.h>
#include <Modloader/app/structs/KuLand__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KuLand {
        inline app::KuLand__Class** type_info() {
            static app::KuLand__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::KuLand__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::KuLand__Class* get_class() {
            return il2cpp::get_class<app::KuLand__Class>(type_info(), "", "KuLand");
        }
        inline app::KuLand* create() {
            return il2cpp::create_object<app::KuLand>(get_class());
        }
    } // namespace KuLand
} // namespace app::classes::types
