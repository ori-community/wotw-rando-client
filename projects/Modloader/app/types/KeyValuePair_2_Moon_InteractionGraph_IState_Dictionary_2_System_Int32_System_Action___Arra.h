#pragma once
#include <Modloader/app/structs/KeyValuePair_2_Moon_InteractionGraph_IStat_Dictionar_2_Syste_Int3_Syste_Actio___Arra__Clas.h>
#include <Modloader/app/structs/KeyValuePair_2_Moon_InteractionGraph_IState_Dictionary_2_System_Int32_System_Action___Arra.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KeyValuePair_2_Moon_InteractionGraph_IState_Dictionary_2_System_Int32_System_Action___Array {
        inline app::KeyValuePair_2_Moon_InteractionGraph_IState_Dictionary_2_System_Int32_System_Action___Array__Class** type_info() {
            static app::KeyValuePair_2_Moon_InteractionGraph_IState_Dictionary_2_System_Int32_System_Action___Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::KeyValuePair_2_Moon_InteractionGraph_IState_Dictionary_2_System_Int32_System_Action___Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::KeyValuePair_2_Moon_InteractionGraph_IState_Dictionary_2_System_Int32_System_Action___Array__Class* get_class() {
            return il2cpp::get_class<app::KeyValuePair_2_Moon_InteractionGraph_IState_Dictionary_2_System_Int32_System_Action___Array__Class>(type_info(), "System.Collections.Generic", "KeyValuePair`2[Moon.InteractionGraph.IState,Dictionary`2[System.Int32,System.Action]][]");
        }
        inline app::KeyValuePair_2_Moon_InteractionGraph_IState_Dictionary_2_System_Int32_System_Action___Array* create() {
            return il2cpp::create_object<app::KeyValuePair_2_Moon_InteractionGraph_IState_Dictionary_2_System_Int32_System_Action___Array>(get_class());
        }
    } // namespace KeyValuePair_2_Moon_InteractionGraph_IState_Dictionary_2_System_Int32_System_Action___Array
} // namespace app::classes::types
