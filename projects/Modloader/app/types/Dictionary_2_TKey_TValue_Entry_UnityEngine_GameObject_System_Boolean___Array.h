#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_System_Boolean___Array__Class.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_System_Boolean___Array.h>

namespace app::classes::types {
    namespace Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_System_Boolean___Array {
        namespace {
            inline app::Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_System_Boolean___Array__Class* type_info_ref = nullptr;
        }
        inline app::Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_System_Boolean___Array__Class** type_info = &type_info_ref;
        inline app::Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_System_Boolean___Array__Class* get_class() {
            return il2cpp::get_class<app::Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_System_Boolean___Array__Class>(type_info, "System.Collections.Generic", "Dictionary`2[TKey,TValue]+Entry[UnityEngine.GameObject,System.Boolean][]");
        }
        inline app::Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_System_Boolean___Array* create() {
            return il2cpp::create_object<app::Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_System_Boolean___Array>(get_class());
        }
    } // namespace Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_System_Boolean___Array
} // namespace app::classes::types
