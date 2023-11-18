#pragma once
#include <Modloader/app/structs/KuLookUp.h>
#include <Modloader/app/structs/KuLookUp__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KuLookUp {
        inline app::KuLookUp__Class** type_info() {
            static app::KuLookUp__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::KuLookUp__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::KuLookUp__Class* get_class() {
            return il2cpp::get_class<app::KuLookUp__Class>(type_info(), "", "KuLookUp");
        }
        inline app::KuLookUp* create() {
            return il2cpp::create_object<app::KuLookUp>(get_class());
        }
    } // namespace KuLookUp
} // namespace app::classes::types
