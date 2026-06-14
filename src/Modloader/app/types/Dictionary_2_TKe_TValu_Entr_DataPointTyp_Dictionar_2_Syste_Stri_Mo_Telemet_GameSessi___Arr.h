#pragma once
#include <Modloader/app/structs/Dictionary_2_TKe_TVal_Ent_DataPointTy_Dictiona_2_Syst_Stri_Mo_Telemet_GameSessi___Arr__Cla.h>
#include <Modloader/app/structs/Dictionary_2_TKe_TValu_Entr_DataPointTyp_Dictionar_2_Syste_Stri_Mo_Telemet_GameSessi___Arr.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Dictionary_2_TKey_TValue_Entry_DataPointType_Dictionary_2_System_String_Moon_Telemetry_GameSession___Array {
        inline app::Dictionary_2_TKey_TValue_Entry_DataPointType_Dictionary_2_System_String_Moon_Telemetry_GameSession___Array__Class** type_info() {
            static app::Dictionary_2_TKey_TValue_Entry_DataPointType_Dictionary_2_System_String_Moon_Telemetry_GameSession___Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Dictionary_2_TKey_TValue_Entry_DataPointType_Dictionary_2_System_String_Moon_Telemetry_GameSession___Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Dictionary_2_TKey_TValue_Entry_DataPointType_Dictionary_2_System_String_Moon_Telemetry_GameSession___Array__Class* get_class() {
            return il2cpp::get_class<app::Dictionary_2_TKey_TValue_Entry_DataPointType_Dictionary_2_System_String_Moon_Telemetry_GameSession___Array__Class>(type_info(), "System.Collections.Generic", "Dictionary`2[TKey,TValue]+Entry[DataPointType,Dictionary`2[System.String,Moon.Telemetry.GameSession]][]");
        }
        inline app::Dictionary_2_TKey_TValue_Entry_DataPointType_Dictionary_2_System_String_Moon_Telemetry_GameSession___Array* create() {
            return il2cpp::create_object<app::Dictionary_2_TKey_TValue_Entry_DataPointType_Dictionary_2_System_String_Moon_Telemetry_GameSession___Array>(get_class());
        }
    } // namespace Dictionary_2_TKey_TValue_Entry_DataPointType_Dictionary_2_System_String_Moon_Telemetry_GameSession___Array
} // namespace app::classes::types
