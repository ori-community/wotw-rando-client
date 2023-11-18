#pragma once
#include <Modloader/app/structs/KuRun.h>
#include <Modloader/app/structs/KuRun__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KuRun {
        inline app::KuRun__Class** type_info() {
            static app::KuRun__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::KuRun__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::KuRun__Class* get_class() {
            return il2cpp::get_class<app::KuRun__Class>(type_info(), "", "KuRun");
        }
        inline app::KuRun* create() {
            return il2cpp::create_object<app::KuRun>(get_class());
        }
    } // namespace KuRun
} // namespace app::classes::types
