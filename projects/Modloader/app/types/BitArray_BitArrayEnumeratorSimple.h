#pragma once
#include <Modloader/app/structs/BitArray_BitArrayEnumeratorSimple.h>
#include <Modloader/app/structs/BitArray_BitArrayEnumeratorSimple__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BitArray_BitArrayEnumeratorSimple {
        inline app::BitArray_BitArrayEnumeratorSimple__Class** type_info() {
            static app::BitArray_BitArrayEnumeratorSimple__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BitArray_BitArrayEnumeratorSimple__Class**)(modloader::win::memory::resolve_rva(0x047020B8));
            }
            return cache;
        }
        inline app::BitArray_BitArrayEnumeratorSimple__Class* get_class() {
            return il2cpp::get_nested_class<app::BitArray_BitArrayEnumeratorSimple__Class>(type_info(), "System.Collections", "BitArray", "BitArrayEnumeratorSimple");
        }
        inline app::BitArray_BitArrayEnumeratorSimple* create() {
            return il2cpp::create_object<app::BitArray_BitArrayEnumeratorSimple>(get_class());
        }
    } // namespace BitArray_BitArrayEnumeratorSimple
} // namespace app::classes::types
