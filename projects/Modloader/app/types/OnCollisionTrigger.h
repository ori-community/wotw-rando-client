#pragma once
#include <Modloader/app/structs/OnCollisionTrigger.h>
#include <Modloader/app/structs/OnCollisionTrigger__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OnCollisionTrigger {
        inline app::OnCollisionTrigger__Class** type_info() {
            static app::OnCollisionTrigger__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::OnCollisionTrigger__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::OnCollisionTrigger__Class* get_class() {
            return il2cpp::get_class<app::OnCollisionTrigger__Class>(type_info(), "", "OnCollisionTrigger");
        }
        inline app::OnCollisionTrigger* create() {
            return il2cpp::create_object<app::OnCollisionTrigger>(get_class());
        }
    } // namespace OnCollisionTrigger
} // namespace app::classes::types
