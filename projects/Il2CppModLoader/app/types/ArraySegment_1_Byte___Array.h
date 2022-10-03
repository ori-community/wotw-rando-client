#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ArraySegment_1_Byte___Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ArraySegment_1_Byte___Array__Class** type_info;
        inline app::ArraySegment_1_Byte___Array__Class* get_class() {
            return il2cpp::get_class<app::ArraySegment_1_Byte___Array__Class>(type_info, "System", "ArraySegment`1[Byte][]");
        }
        inline app::ArraySegment_1_Byte___Array* create() {
            return il2cpp::create_object<app::ArraySegment_1_Byte___Array>(get_class());
        }
    } // namespace ArraySegment_1_Byte___Array
} // namespace app::classes::types
