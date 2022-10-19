#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Dictionary_2_System_UInt16_List_1_UnityEngine_Vector3___Array {
        inline app::Dictionary_2_System_UInt16_List_1_UnityEngine_Vector3___Array__Class** type_info = (app::Dictionary_2_System_UInt16_List_1_UnityEngine_Vector3___Array__Class**)(modloader::win::memory::resolve_rva(0x04743720));
        inline app::Dictionary_2_System_UInt16_List_1_UnityEngine_Vector3___Array__Class* get_class() {
            return il2cpp::get_class<app::Dictionary_2_System_UInt16_List_1_UnityEngine_Vector3___Array__Class>(type_info, "System.Collections.Generic", "Dictionary`2[System.UInt16,List`1[UnityEngine.Vector3]][]");
        }
        inline app::Dictionary_2_System_UInt16_List_1_UnityEngine_Vector3___Array* create() {
            return il2cpp::create_object<app::Dictionary_2_System_UInt16_List_1_UnityEngine_Vector3___Array>(get_class());
        }
    } // namespace Dictionary_2_System_UInt16_List_1_UnityEngine_Vector3___Array
} // namespace app::classes::types
