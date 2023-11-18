#pragma once
#include <Modloader/app/structs/Dictionary_2_TK_TVal_Ent_Mo_InteractionGra_ISta_Li_1_Mo_InteractionGra_Transiti___Arr__Cla.h>
#include <Modloader/app/structs/Dictionary_2_TKe_TValu_Entr_Moo_InteractionGrap_ISta_Li_1_Mo_InteractionGra_Transiti___Arr.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Dictionary_2_TKey_TValue_Entry_Moon_InteractionGraph_IState_List_1_Moon_InteractionGraph_Transition___Array {
        inline app::Dictionary_2_TKey_TValue_Entry_Moon_InteractionGraph_IState_List_1_Moon_InteractionGraph_Transition___Array__Class** type_info() {
            static app::Dictionary_2_TKey_TValue_Entry_Moon_InteractionGraph_IState_List_1_Moon_InteractionGraph_Transition___Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Dictionary_2_TKey_TValue_Entry_Moon_InteractionGraph_IState_List_1_Moon_InteractionGraph_Transition___Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Dictionary_2_TKey_TValue_Entry_Moon_InteractionGraph_IState_List_1_Moon_InteractionGraph_Transition___Array__Class* get_class() {
            return il2cpp::get_class<app::Dictionary_2_TKey_TValue_Entry_Moon_InteractionGraph_IState_List_1_Moon_InteractionGraph_Transition___Array__Class>(type_info(), "System.Collections.Generic", "Dictionary`2[TKey,TValue]+Entry[Moon.InteractionGraph.IState,List`1[Moon.InteractionGraph.Transition]][]");
        }
        inline app::Dictionary_2_TKey_TValue_Entry_Moon_InteractionGraph_IState_List_1_Moon_InteractionGraph_Transition___Array* create() {
            return il2cpp::create_object<app::Dictionary_2_TKey_TValue_Entry_Moon_InteractionGraph_IState_List_1_Moon_InteractionGraph_Transition___Array>(get_class());
        }
    } // namespace Dictionary_2_TKey_TValue_Entry_Moon_InteractionGraph_IState_List_1_Moon_InteractionGraph_Transition___Array
} // namespace app::classes::types
