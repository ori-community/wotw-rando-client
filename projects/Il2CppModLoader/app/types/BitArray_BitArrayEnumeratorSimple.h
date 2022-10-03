#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BitArray_BitArrayEnumeratorSimple {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BitArray_BitArrayEnumeratorSimple__Class** type_info;
        inline app::BitArray_BitArrayEnumeratorSimple__Class* get_class() {
            return il2cpp::get_nested_class<app::BitArray_BitArrayEnumeratorSimple__Class>(type_info, "System.Collections", "BitArray", "BitArrayEnumeratorSimple");
        }
        inline app::BitArray_BitArrayEnumeratorSimple* create() {
            return il2cpp::create_object<app::BitArray_BitArrayEnumeratorSimple>(get_class());
        }
    } // namespace BitArray_BitArrayEnumeratorSimple
} // namespace app::classes::types
