#pragma once
#include <Modloader/app/structs/StateMapForAttribute.h>
#include <Modloader/app/structs/StateMapForAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StateMapForAttribute {
        inline app::StateMapForAttribute__Class** type_info() {
            static app::StateMapForAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::StateMapForAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::StateMapForAttribute__Class* get_class() {
            return il2cpp::get_class<app::StateMapForAttribute__Class>(type_info(), "", "StateMapForAttribute");
        }
        inline app::StateMapForAttribute* create() {
            return il2cpp::create_object<app::StateMapForAttribute>(get_class());
        }
    } // namespace StateMapForAttribute
} // namespace app::classes::types
