#pragma once
#include <Modloader/app/structs/IconAttribute.h>
#include <Modloader/app/structs/IconAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IconAttribute {
        inline app::IconAttribute__Class** type_info() {
            static app::IconAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IconAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IconAttribute__Class* get_class() {
            return il2cpp::get_class<app::IconAttribute__Class>(type_info(), "Moon.BehaviourSystem.BTEditor", "IconAttribute");
        }
        inline app::IconAttribute* create() {
            return il2cpp::create_object<app::IconAttribute>(get_class());
        }
    } // namespace IconAttribute
} // namespace app::classes::types
