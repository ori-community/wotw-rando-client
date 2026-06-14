#pragma once
#include <Modloader/app/structs/UtilitySelectorNode_UtilitySelectorMode__Enum.h>
#include <Modloader/app/structs/UtilitySelectorNode_UtilitySelectorMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UtilitySelectorNode_UtilitySelectorMode__Enum {
        inline app::UtilitySelectorNode_UtilitySelectorMode__Enum__Class** type_info() {
            static app::UtilitySelectorNode_UtilitySelectorMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UtilitySelectorNode_UtilitySelectorMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UtilitySelectorNode_UtilitySelectorMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::UtilitySelectorNode_UtilitySelectorMode__Enum__Class>(type_info(), "Moon.BehaviourSystem", "UtilitySelectorNode", "UtilitySelectorMode");
        }
        inline app::UtilitySelectorNode_UtilitySelectorMode__Enum* create() {
            return il2cpp::create_object<app::UtilitySelectorNode_UtilitySelectorMode__Enum>(get_class());
        }
    } // namespace UtilitySelectorNode_UtilitySelectorMode__Enum
} // namespace app::classes::types
