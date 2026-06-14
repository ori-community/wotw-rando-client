#pragma once
#include <Modloader/app/structs/KuDashPuppet.h>
#include <Modloader/app/structs/KuDashPuppet__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KuDashPuppet {
        inline app::KuDashPuppet__Class** type_info() {
            static app::KuDashPuppet__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::KuDashPuppet__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::KuDashPuppet__Class* get_class() {
            return il2cpp::get_class<app::KuDashPuppet__Class>(type_info(), "", "KuDashPuppet");
        }
        inline app::KuDashPuppet* create() {
            return il2cpp::create_object<app::KuDashPuppet>(get_class());
        }
    } // namespace KuDashPuppet
} // namespace app::classes::types
