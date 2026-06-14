#pragma once
#include <Modloader/app/structs/Dictionary_2_TKey_TValu_Entr_Syste_Typ_Moo_BehaviourSyste_EntityLocomotionTas___Arra__Clas.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_Entry_System_Type_Moon_BehaviourSystem_EntityLocomotionTas___Arra.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Dictionary_2_TKey_TValue_Entry_System_Type_Moon_BehaviourSystem_EntityLocomotionTask___Array {
        inline app::Dictionary_2_TKey_TValue_Entry_System_Type_Moon_BehaviourSystem_EntityLocomotionTask___Array__Class** type_info() {
            static app::Dictionary_2_TKey_TValue_Entry_System_Type_Moon_BehaviourSystem_EntityLocomotionTask___Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Dictionary_2_TKey_TValue_Entry_System_Type_Moon_BehaviourSystem_EntityLocomotionTask___Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Dictionary_2_TKey_TValue_Entry_System_Type_Moon_BehaviourSystem_EntityLocomotionTask___Array__Class* get_class() {
            return il2cpp::get_class<app::Dictionary_2_TKey_TValue_Entry_System_Type_Moon_BehaviourSystem_EntityLocomotionTask___Array__Class>(type_info(), "System.Collections.Generic", "Dictionary`2[TKey,TValue]+Entry[System.Type,Moon.BehaviourSystem.EntityLocomotionTask][]");
        }
        inline app::Dictionary_2_TKey_TValue_Entry_System_Type_Moon_BehaviourSystem_EntityLocomotionTask___Array* create() {
            return il2cpp::create_object<app::Dictionary_2_TKey_TValue_Entry_System_Type_Moon_BehaviourSystem_EntityLocomotionTask___Array>(get_class());
        }
    } // namespace Dictionary_2_TKey_TValue_Entry_System_Type_Moon_BehaviourSystem_EntityLocomotionTask___Array
} // namespace app::classes::types
