#pragma once
#include <Modloader/app/structs/BidirectionalValuePair_2_System_Object_System_Object___Array.h>
#include <Modloader/app/structs/BidirectionalValuePair_2_System_Object_System_Object___Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BidirectionalValuePair_2_System_Object_System_Object___Array {
        inline app::BidirectionalValuePair_2_System_Object_System_Object___Array__Class** type_info() {
            static app::BidirectionalValuePair_2_System_Object_System_Object___Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BidirectionalValuePair_2_System_Object_System_Object___Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BidirectionalValuePair_2_System_Object_System_Object___Array__Class* get_class() {
            return il2cpp::get_class<app::BidirectionalValuePair_2_System_Object_System_Object___Array__Class>(type_info(), "Moon", "BidirectionalValuePair`2[System.Object,System.Object][]");
        }
        inline app::BidirectionalValuePair_2_System_Object_System_Object___Array* create() {
            return il2cpp::create_object<app::BidirectionalValuePair_2_System_Object_System_Object___Array>(get_class());
        }
    } // namespace BidirectionalValuePair_2_System_Object_System_Object___Array
} // namespace app::classes::types
