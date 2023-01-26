#pragma once
#include <Modloader/app/structs/KuFeatherFlap.h>
#include <Modloader/app/structs/KuFeatherFlap__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KuFeatherFlap {
        inline app::KuFeatherFlap__Class** type_info() {
            static app::KuFeatherFlap__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::KuFeatherFlap__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::KuFeatherFlap__Class* get_class() {
            return il2cpp::get_class<app::KuFeatherFlap__Class>(type_info(), "", "KuFeatherFlap");
        }
        inline app::KuFeatherFlap* create() {
            return il2cpp::create_object<app::KuFeatherFlap>(get_class());
        }
    } // namespace KuFeatherFlap
} // namespace app::classes::types
