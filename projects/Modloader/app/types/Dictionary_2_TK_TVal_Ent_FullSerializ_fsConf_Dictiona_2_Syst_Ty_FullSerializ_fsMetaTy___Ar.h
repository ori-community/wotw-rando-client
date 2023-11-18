#pragma once
#include <Modloader/app/structs/Dictionary_2_TK_TVal_Ent_FullSerializ_fsConf_Dictiona_2_Sys_T_FullSeriali_fsMetaT___Ar__Cl.h>
#include <Modloader/app/structs/Dictionary_2_TK_TVal_Ent_FullSerializ_fsConf_Dictiona_2_Syst_Ty_FullSerializ_fsMetaTy___Ar.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Dictionary_2_TKey_TValue_Entry_FullSerializer_fsConfig_Dictionary_2_System_Type_FullSerializer_fsMetaType___Array {
        inline app::Dictionary_2_TKey_TValue_Entry_FullSerializer_fsConfig_Dictionary_2_System_Type_FullSerializer_fsMetaType___Array__Class** type_info() {
            static app::Dictionary_2_TKey_TValue_Entry_FullSerializer_fsConfig_Dictionary_2_System_Type_FullSerializer_fsMetaType___Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Dictionary_2_TKey_TValue_Entry_FullSerializer_fsConfig_Dictionary_2_System_Type_FullSerializer_fsMetaType___Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Dictionary_2_TKey_TValue_Entry_FullSerializer_fsConfig_Dictionary_2_System_Type_FullSerializer_fsMetaType___Array__Class* get_class() {
            return il2cpp::get_class<app::Dictionary_2_TKey_TValue_Entry_FullSerializer_fsConfig_Dictionary_2_System_Type_FullSerializer_fsMetaType___Array__Class>(type_info(), "System.Collections.Generic", "Dictionary`2[TKey,TValue]+Entry[FullSerializer.fsConfig,Dictionary`2[System.Type,FullSerializer.fsMetaType]][]");
        }
        inline app::Dictionary_2_TKey_TValue_Entry_FullSerializer_fsConfig_Dictionary_2_System_Type_FullSerializer_fsMetaType___Array* create() {
            return il2cpp::create_object<app::Dictionary_2_TKey_TValue_Entry_FullSerializer_fsConfig_Dictionary_2_System_Type_FullSerializer_fsMetaType___Array>(get_class());
        }
    } // namespace Dictionary_2_TKey_TValue_Entry_FullSerializer_fsConfig_Dictionary_2_System_Type_FullSerializer_fsMetaType___Array
} // namespace app::classes::types
