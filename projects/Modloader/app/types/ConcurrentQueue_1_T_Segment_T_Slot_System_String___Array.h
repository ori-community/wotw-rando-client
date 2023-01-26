#pragma once
#include <Modloader/app/structs/ConcurrentQueue_1_T_Segment_T_Slot_System_String___Array.h>
#include <Modloader/app/structs/ConcurrentQueue_1_T_Segment_T_Slot_System_String___Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ConcurrentQueue_1_T_Segment_T_Slot_System_String___Array {
        inline app::ConcurrentQueue_1_T_Segment_T_Slot_System_String___Array__Class** type_info() {
            static app::ConcurrentQueue_1_T_Segment_T_Slot_System_String___Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ConcurrentQueue_1_T_Segment_T_Slot_System_String___Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ConcurrentQueue_1_T_Segment_T_Slot_System_String___Array__Class* get_class() {
            return il2cpp::get_class<app::ConcurrentQueue_1_T_Segment_T_Slot_System_String___Array__Class>(type_info(), "System.Collections.Concurrent", "ConcurrentQueue`1[T]+Segment[T]+Slot[System.String][]");
        }
        inline app::ConcurrentQueue_1_T_Segment_T_Slot_System_String___Array* create() {
            return il2cpp::create_object<app::ConcurrentQueue_1_T_Segment_T_Slot_System_String___Array>(get_class());
        }
    } // namespace ConcurrentQueue_1_T_Segment_T_Slot_System_String___Array
} // namespace app::classes::types
