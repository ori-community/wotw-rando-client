#pragma once
#include <Modloader/app/structs/ObsoleteAttribute.h>
#include <Modloader/app/structs/ObsoleteAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ObsoleteAttribute {
        inline app::ObsoleteAttribute__Class** type_info() {
            static app::ObsoleteAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ObsoleteAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ObsoleteAttribute__Class* get_class() {
            return il2cpp::get_class<app::ObsoleteAttribute__Class>(type_info(), "System", "ObsoleteAttribute");
        }
        inline app::ObsoleteAttribute* create() {
            return il2cpp::create_object<app::ObsoleteAttribute>(get_class());
        }
    } // namespace ObsoleteAttribute
} // namespace app::classes::types
