#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace BitArray {
        inline app::BitArray__Class** type_info = (app::BitArray__Class**)(modloader::win::memory::resolve_rva(0x0470C4C0));
        inline app::BitArray__Class* get_class() {
            return il2cpp::get_class<app::BitArray__Class>(type_info, "System.Collections", "BitArray");
        }
        inline app::BitArray* create() {
            return il2cpp::create_object<app::BitArray>(get_class());
        }
    } // namespace BitArray
} // namespace app::classes::types
