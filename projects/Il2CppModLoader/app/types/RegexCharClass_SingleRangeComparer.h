#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RegexCharClass_SingleRangeComparer {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RegexCharClass_SingleRangeComparer__Class** type_info;
        inline app::RegexCharClass_SingleRangeComparer__Class* get_class() {
            return il2cpp::get_nested_class<app::RegexCharClass_SingleRangeComparer__Class>(type_info, "System.Text.RegularExpressions", "RegexCharClass", "SingleRangeComparer");
        }
        inline app::RegexCharClass_SingleRangeComparer* create() {
            return il2cpp::create_object<app::RegexCharClass_SingleRangeComparer>(get_class());
        }
    } // namespace RegexCharClass_SingleRangeComparer
} // namespace app::classes::types
