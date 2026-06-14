#pragma once
#include <Modloader/app/structs/KuOriMounting.h>
#include <Modloader/app/structs/KuOriMounting__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KuOriMounting {
        inline app::KuOriMounting__Class** type_info() {
            static app::KuOriMounting__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::KuOriMounting__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::KuOriMounting__Class* get_class() {
            return il2cpp::get_class<app::KuOriMounting__Class>(type_info(), "", "KuOriMounting");
        }
        inline app::KuOriMounting* create() {
            return il2cpp::create_object<app::KuOriMounting>(get_class());
        }
    } // namespace KuOriMounting
} // namespace app::classes::types
