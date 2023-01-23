#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ConcurrentQueue_1_T_Segment_T_Slot_System_Object___Array__Class.h>
#include <Modloader/app/structs/ConcurrentQueue_1_T_Segment_T_Slot_System_Object___Array.h>

namespace app::classes::types {
    namespace ConcurrentQueue_1_T_Segment_T_Slot_System_Object___Array {
        namespace {
            inline app::ConcurrentQueue_1_T_Segment_T_Slot_System_Object___Array__Class* type_info_ref = nullptr;
        }
        inline app::ConcurrentQueue_1_T_Segment_T_Slot_System_Object___Array__Class** type_info = &type_info_ref;
        inline app::ConcurrentQueue_1_T_Segment_T_Slot_System_Object___Array__Class* get_class() {
            return il2cpp::get_class<app::ConcurrentQueue_1_T_Segment_T_Slot_System_Object___Array__Class>(type_info, "System.Collections.Concurrent", "ConcurrentQueue`1[T]+Segment[T]+Slot[System.Object][]");
        }
        inline app::ConcurrentQueue_1_T_Segment_T_Slot_System_Object___Array* create() {
            return il2cpp::create_object<app::ConcurrentQueue_1_T_Segment_T_Slot_System_Object___Array>(get_class());
        }
    } // namespace ConcurrentQueue_1_T_Segment_T_Slot_System_Object___Array
} // namespace app::classes::types
