#pragma once
#include <Modloader/app/structs/Dictionary_2_TK_TVal_Ent_Mo_Timeli_UberShaderVectorAnimat_VectorProper_Syst_Stri___Arr__Cl.h>
#include <Modloader/app/structs/Dictionary_2_TKe_TValu_Entr_Moo_Timeli_UberShaderVectorAnimat_VectorProper_Syst_Stri___Arr.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Dictionary_2_TKey_TValue_Entry_Moon_Timeline_UberShaderVectorAnimator_VectorProperty_System_String___Array {
        inline app::Dictionary_2_TKey_TValue_Entry_Moon_Timeline_UberShaderVectorAnimator_VectorProperty_System_String___Array__Class** type_info() {
            static app::Dictionary_2_TKey_TValue_Entry_Moon_Timeline_UberShaderVectorAnimator_VectorProperty_System_String___Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Dictionary_2_TKey_TValue_Entry_Moon_Timeline_UberShaderVectorAnimator_VectorProperty_System_String___Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Dictionary_2_TKey_TValue_Entry_Moon_Timeline_UberShaderVectorAnimator_VectorProperty_System_String___Array__Class* get_class() {
            return il2cpp::get_class<app::Dictionary_2_TKey_TValue_Entry_Moon_Timeline_UberShaderVectorAnimator_VectorProperty_System_String___Array__Class>(type_info(), "System.Collections.Generic", "Dictionary`2[TKey,TValue]+Entry[Moon.Timeline.UberShaderVectorAnimator+VectorProperty,System.String[]][]");
        }
        inline app::Dictionary_2_TKey_TValue_Entry_Moon_Timeline_UberShaderVectorAnimator_VectorProperty_System_String___Array* create() {
            return il2cpp::create_object<app::Dictionary_2_TKey_TValue_Entry_Moon_Timeline_UberShaderVectorAnimator_VectorProperty_System_String___Array>(get_class());
        }
    } // namespace Dictionary_2_TKey_TValue_Entry_Moon_Timeline_UberShaderVectorAnimator_VectorProperty_System_String___Array
} // namespace app::classes::types
