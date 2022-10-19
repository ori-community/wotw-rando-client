#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace BitSet__Array {
        inline app::BitSet__Array__Class** type_info = (app::BitSet__Array__Class**)(modloader::win::memory::resolve_rva(0x0475C448));
        inline app::BitSet__Array__Class* get_class() {
            return il2cpp::get_class<app::BitSet__Array__Class>(type_info, "System.Xml.Schema", "BitSet[]");
        }
        inline app::BitSet__Array* create() {
            return il2cpp::create_object<app::BitSet__Array>(get_class());
        }
    } // namespace BitSet__Array
} // namespace app::classes::types
