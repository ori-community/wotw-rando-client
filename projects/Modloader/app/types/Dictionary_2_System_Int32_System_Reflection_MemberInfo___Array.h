#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Dictionary_2_System_Int32_System_Reflection_MemberInfo___Array__Class.h>
#include <Modloader/app/structs/Dictionary_2_System_Int32_System_Reflection_MemberInfo___Array.h>

namespace app::classes::types {
    namespace Dictionary_2_System_Int32_System_Reflection_MemberInfo___Array {
        namespace {
            inline app::Dictionary_2_System_Int32_System_Reflection_MemberInfo___Array__Class* type_info_ref = nullptr;
        }
        inline app::Dictionary_2_System_Int32_System_Reflection_MemberInfo___Array__Class** type_info = &type_info_ref;
        inline app::Dictionary_2_System_Int32_System_Reflection_MemberInfo___Array__Class* get_class() {
            return il2cpp::get_class<app::Dictionary_2_System_Int32_System_Reflection_MemberInfo___Array__Class>(type_info, "System.Collections.Generic", "Dictionary`2[System.Int32,System.Reflection.MemberInfo][]");
        }
        inline app::Dictionary_2_System_Int32_System_Reflection_MemberInfo___Array* create() {
            return il2cpp::create_object<app::Dictionary_2_System_Int32_System_Reflection_MemberInfo___Array>(get_class());
        }
    } // namespace Dictionary_2_System_Int32_System_Reflection_MemberInfo___Array
} // namespace app::classes::types
