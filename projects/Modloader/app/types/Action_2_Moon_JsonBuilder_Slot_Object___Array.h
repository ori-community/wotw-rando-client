#pragma once
#include <Modloader/app/structs/Action_2_Moon_JsonBuilder_Slot_Object___Array.h>
#include <Modloader/app/structs/Action_2_Moon_JsonBuilder_Slot_Object___Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Action_2_Moon_JsonBuilder_Slot_Object___Array {
        inline app::Action_2_Moon_JsonBuilder_Slot_Object___Array__Class** type_info() {
            static app::Action_2_Moon_JsonBuilder_Slot_Object___Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Action_2_Moon_JsonBuilder_Slot_Object___Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Action_2_Moon_JsonBuilder_Slot_Object___Array__Class* get_class() {
            return il2cpp::get_class<app::Action_2_Moon_JsonBuilder_Slot_Object___Array__Class>(type_info(), "System", "Action`2[Moon.JsonBuilder+Slot,Object][]");
        }
        inline app::Action_2_Moon_JsonBuilder_Slot_Object___Array* create() {
            return il2cpp::create_object<app::Action_2_Moon_JsonBuilder_Slot_Object___Array>(get_class());
        }
    } // namespace Action_2_Moon_JsonBuilder_Slot_Object___Array
} // namespace app::classes::types
