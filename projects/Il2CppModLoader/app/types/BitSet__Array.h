#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BitSet__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BitSet__Array__Class** type_info;
        inline app::BitSet__Array__Class* get_class() {
            return il2cpp::get_class<app::BitSet__Array__Class>(type_info, "System.Xml.Schema", "BitSet[]");
        }
        inline app::BitSet__Array* create() {
            return il2cpp::create_object<app::BitSet__Array>(get_class());
        }
    } // namespace BitSet__Array
} // namespace app::classes::types
