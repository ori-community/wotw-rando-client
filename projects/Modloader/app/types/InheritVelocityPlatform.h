#pragma once
#include <Modloader/app/structs/InheritVelocityPlatform.h>
#include <Modloader/app/structs/InheritVelocityPlatform__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InheritVelocityPlatform {
        inline app::InheritVelocityPlatform__Class** type_info() {
            static app::InheritVelocityPlatform__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::InheritVelocityPlatform__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::InheritVelocityPlatform__Class* get_class() {
            return il2cpp::get_class<app::InheritVelocityPlatform__Class>(type_info(), "", "InheritVelocityPlatform");
        }
        inline app::InheritVelocityPlatform* create() {
            return il2cpp::create_object<app::InheritVelocityPlatform>(get_class());
        }
    } // namespace InheritVelocityPlatform
} // namespace app::classes::types
