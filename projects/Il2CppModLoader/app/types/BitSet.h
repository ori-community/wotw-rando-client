#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BitSet {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BitSet__Class** type_info;
        inline app::BitSet__Class* get_class() {
            return il2cpp::get_class<app::BitSet__Class>(type_info, "System.Xml.Schema", "BitSet");
        }
        inline app::BitSet* create() {
            return il2cpp::create_object<app::BitSet>(get_class());
        }
        inline app::BitSet__Array* create_array(int size) {
            return il2cpp::array_new<app::BitSet__Array>(get_class(), size);
        }
    } // namespace BitSet
} // namespace app::classes::types
