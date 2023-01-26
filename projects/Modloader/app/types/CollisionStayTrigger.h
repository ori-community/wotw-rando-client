#pragma once
#include <Modloader/app/structs/CollisionStayTrigger.h>
#include <Modloader/app/structs/CollisionStayTrigger__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CollisionStayTrigger {
        inline app::CollisionStayTrigger__Class** type_info() {
            static app::CollisionStayTrigger__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CollisionStayTrigger__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CollisionStayTrigger__Class* get_class() {
            return il2cpp::get_class<app::CollisionStayTrigger__Class>(type_info(), "", "CollisionStayTrigger");
        }
        inline app::CollisionStayTrigger* create() {
            return il2cpp::create_object<app::CollisionStayTrigger>(get_class());
        }
    } // namespace CollisionStayTrigger
} // namespace app::classes::types
