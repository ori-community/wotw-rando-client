#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace fsMetaType_c_DisplayClass7_0 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::fsMetaType_c_DisplayClass7_0__Class** type_info;
        inline app::fsMetaType_c_DisplayClass7_0__Class* get_class() {
            return il2cpp::get_nested_class<app::fsMetaType_c_DisplayClass7_0__Class>(type_info, "FullSerializer", "fsMetaType", "<>c__DisplayClass7_0");
        }
        inline app::fsMetaType_c_DisplayClass7_0* create() {
            return il2cpp::create_object<app::fsMetaType_c_DisplayClass7_0>(get_class());
        }
    } // namespace fsMetaType_c_DisplayClass7_0
} // namespace app::classes::types
