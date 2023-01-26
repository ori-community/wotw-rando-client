#pragma once
#include <Modloader/app/structs/KeyValuePair_2_UnityEngine_GameObject_List_1_Moo_BehaviourSyste_GuardDecorato___Arra__Clas.h>
#include <Modloader/app/structs/KeyValuePair_2_UnityEngine_GameObject_List_1_Moon_BehaviourSystem_GuardDecorator___Array.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KeyValuePair_2_UnityEngine_GameObject_List_1_Moon_BehaviourSystem_GuardDecorator___Array {
        inline app::KeyValuePair_2_UnityEngine_GameObject_List_1_Moon_BehaviourSystem_GuardDecorator___Array__Class** type_info() {
            static app::KeyValuePair_2_UnityEngine_GameObject_List_1_Moon_BehaviourSystem_GuardDecorator___Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::KeyValuePair_2_UnityEngine_GameObject_List_1_Moon_BehaviourSystem_GuardDecorator___Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::KeyValuePair_2_UnityEngine_GameObject_List_1_Moon_BehaviourSystem_GuardDecorator___Array__Class* get_class() {
            return il2cpp::get_class<app::KeyValuePair_2_UnityEngine_GameObject_List_1_Moon_BehaviourSystem_GuardDecorator___Array__Class>(type_info(), "System.Collections.Generic", "KeyValuePair`2[UnityEngine.GameObject,List`1[Moon.BehaviourSystem.GuardDecorator]][]");
        }
        inline app::KeyValuePair_2_UnityEngine_GameObject_List_1_Moon_BehaviourSystem_GuardDecorator___Array* create() {
            return il2cpp::create_object<app::KeyValuePair_2_UnityEngine_GameObject_List_1_Moon_BehaviourSystem_GuardDecorator___Array>(get_class());
        }
    } // namespace KeyValuePair_2_UnityEngine_GameObject_List_1_Moon_BehaviourSystem_GuardDecorator___Array
} // namespace app::classes::types
