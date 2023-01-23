#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/HashSet_1_T_Slot_DeathWisp___Array__Class.h>
#include <Modloader/app/structs/HashSet_1_T_Slot_DeathWisp___Array.h>

namespace app::classes::types {
    namespace HashSet_1_T_Slot_DeathWisp___Array {
        namespace {
            inline app::HashSet_1_T_Slot_DeathWisp___Array__Class* type_info_ref = nullptr;
        }
        inline app::HashSet_1_T_Slot_DeathWisp___Array__Class** type_info = &type_info_ref;
        inline app::HashSet_1_T_Slot_DeathWisp___Array__Class* get_class() {
            return il2cpp::get_class<app::HashSet_1_T_Slot_DeathWisp___Array__Class>(type_info, "System.Collections.Generic", "HashSet`1[T]+Slot[DeathWisp][]");
        }
        inline app::HashSet_1_T_Slot_DeathWisp___Array* create() {
            return il2cpp::create_object<app::HashSet_1_T_Slot_DeathWisp___Array>(get_class());
        }
    } // namespace HashSet_1_T_Slot_DeathWisp___Array
} // namespace app::classes::types
