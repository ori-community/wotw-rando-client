#pragma once
#include <Modloader/app/structs/Dictionary_2_TKe_TVal_Ent_UnityEngi_GameObje_Li_1_Mo_BehaviourSyst_GuardDecorat___Arr__Cla.h>
#include <Modloader/app/structs/Dictionary_2_TKe_TValu_Entr_UnityEngin_GameObjec_Lis_1_Mo_BehaviourSyst_GuardDecorat___Arr.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_List_1_Moon_BehaviourSystem_GuardDecorator___Array {
        inline app::Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_List_1_Moon_BehaviourSystem_GuardDecorator___Array__Class** type_info() {
            static app::Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_List_1_Moon_BehaviourSystem_GuardDecorator___Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_List_1_Moon_BehaviourSystem_GuardDecorator___Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_List_1_Moon_BehaviourSystem_GuardDecorator___Array__Class* get_class() {
            return il2cpp::get_class<app::Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_List_1_Moon_BehaviourSystem_GuardDecorator___Array__Class>(type_info(), "System.Collections.Generic", "Dictionary`2[TKey,TValue]+Entry[UnityEngine.GameObject,List`1[Moon.BehaviourSystem.GuardDecorator]][]");
        }
        inline app::Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_List_1_Moon_BehaviourSystem_GuardDecorator___Array* create() {
            return il2cpp::create_object<app::Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_List_1_Moon_BehaviourSystem_GuardDecorator___Array>(get_class());
        }
    } // namespace Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_List_1_Moon_BehaviourSystem_GuardDecorator___Array
} // namespace app::classes::types
