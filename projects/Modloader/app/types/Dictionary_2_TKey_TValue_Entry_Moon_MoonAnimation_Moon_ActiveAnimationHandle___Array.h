#pragma once
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_Entry_Moon_MoonAnimation_Moon_ActiveAnimationHandle___Array.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_Entry_Moon_MoonAnimation_Moon_ActiveAnimationHandle___Array__Clas.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Dictionary_2_TKey_TValue_Entry_Moon_MoonAnimation_Moon_ActiveAnimationHandle___Array {
        inline app::Dictionary_2_TKey_TValue_Entry_Moon_MoonAnimation_Moon_ActiveAnimationHandle___Array__Class** type_info() {
            static app::Dictionary_2_TKey_TValue_Entry_Moon_MoonAnimation_Moon_ActiveAnimationHandle___Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Dictionary_2_TKey_TValue_Entry_Moon_MoonAnimation_Moon_ActiveAnimationHandle___Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Dictionary_2_TKey_TValue_Entry_Moon_MoonAnimation_Moon_ActiveAnimationHandle___Array__Class* get_class() {
            return il2cpp::get_class<app::Dictionary_2_TKey_TValue_Entry_Moon_MoonAnimation_Moon_ActiveAnimationHandle___Array__Class>(type_info(), "System.Collections.Generic", "Dictionary`2[TKey,TValue]+Entry[Moon.MoonAnimation,Moon.ActiveAnimationHandle][]");
        }
        inline app::Dictionary_2_TKey_TValue_Entry_Moon_MoonAnimation_Moon_ActiveAnimationHandle___Array* create() {
            return il2cpp::create_object<app::Dictionary_2_TKey_TValue_Entry_Moon_MoonAnimation_Moon_ActiveAnimationHandle___Array>(get_class());
        }
    } // namespace Dictionary_2_TKey_TValue_Entry_Moon_MoonAnimation_Moon_ActiveAnimationHandle___Array
} // namespace app::classes::types
