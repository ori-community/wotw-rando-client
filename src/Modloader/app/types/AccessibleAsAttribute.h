#pragma once
#include <Modloader/app/structs/AccessibleAsAttribute.h>
#include <Modloader/app/structs/AccessibleAsAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AccessibleAsAttribute {
        inline app::AccessibleAsAttribute__Class** type_info() {
            static app::AccessibleAsAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AccessibleAsAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AccessibleAsAttribute__Class* get_class() {
            return il2cpp::get_class<app::AccessibleAsAttribute__Class>(type_info(), "Moon.SceneManagement", "AccessibleAsAttribute");
        }
        inline app::AccessibleAsAttribute* create() {
            return il2cpp::create_object<app::AccessibleAsAttribute>(get_class());
        }
    } // namespace AccessibleAsAttribute
} // namespace app::classes::types
