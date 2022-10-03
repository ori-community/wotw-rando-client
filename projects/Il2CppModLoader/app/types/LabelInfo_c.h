#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LabelInfo_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LabelInfo_c__Class** type_info;
        inline app::LabelInfo_c__Class* get_class() {
            return il2cpp::get_nested_class<app::LabelInfo_c__Class>(type_info, "System.Linq.Expressions.Interpreter", "LabelInfo", "<>c");
        }
        inline app::LabelInfo_c* create() {
            return il2cpp::create_object<app::LabelInfo_c>(get_class());
        }
    } // namespace LabelInfo_c
} // namespace app::classes::types
