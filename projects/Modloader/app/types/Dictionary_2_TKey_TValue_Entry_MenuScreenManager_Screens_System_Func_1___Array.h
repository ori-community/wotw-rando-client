#pragma once
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_Entry_MenuScreenManager_Screens_System_Func_1___Array.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_Entry_MenuScreenManager_Screens_System_Func_1___Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Dictionary_2_TKey_TValue_Entry_MenuScreenManager_Screens_System_Func_1___Array {
        inline app::Dictionary_2_TKey_TValue_Entry_MenuScreenManager_Screens_System_Func_1___Array__Class** type_info() {
            static app::Dictionary_2_TKey_TValue_Entry_MenuScreenManager_Screens_System_Func_1___Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Dictionary_2_TKey_TValue_Entry_MenuScreenManager_Screens_System_Func_1___Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Dictionary_2_TKey_TValue_Entry_MenuScreenManager_Screens_System_Func_1___Array__Class* get_class() {
            return il2cpp::get_class<app::Dictionary_2_TKey_TValue_Entry_MenuScreenManager_Screens_System_Func_1___Array__Class>(type_info(), "System.Collections.Generic", "Dictionary`2[TKey,TValue]+Entry[MenuScreenManager+Screens,System.Func`1][]");
        }
        inline app::Dictionary_2_TKey_TValue_Entry_MenuScreenManager_Screens_System_Func_1___Array* create() {
            return il2cpp::create_object<app::Dictionary_2_TKey_TValue_Entry_MenuScreenManager_Screens_System_Func_1___Array>(get_class());
        }
    } // namespace Dictionary_2_TKey_TValue_Entry_MenuScreenManager_Screens_System_Func_1___Array
} // namespace app::classes::types
