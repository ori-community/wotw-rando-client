#pragma once
#include <Modloader/app/structs/DealDamageSphere.h>
#include <Modloader/app/structs/DealDamageSphere__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DealDamageSphere {
        inline app::DealDamageSphere__Class** type_info() {
            static app::DealDamageSphere__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DealDamageSphere__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DealDamageSphere__Class* get_class() {
            return il2cpp::get_class<app::DealDamageSphere__Class>(type_info(), "", "DealDamageSphere");
        }
        inline app::DealDamageSphere* create() {
            return il2cpp::create_object<app::DealDamageSphere>(get_class());
        }
    } // namespace DealDamageSphere
} // namespace app::classes::types
