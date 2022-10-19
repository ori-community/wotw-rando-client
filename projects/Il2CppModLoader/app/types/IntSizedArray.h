#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IntSizedArray {
        inline app::IntSizedArray__Class** type_info = (app::IntSizedArray__Class**)(modloader::win::memory::resolve_rva(0x0476EB68));
        inline app::IntSizedArray__Class* get_class() {
            return il2cpp::get_class<app::IntSizedArray__Class>(type_info, "System.Runtime.Serialization.Formatters.Binary", "IntSizedArray");
        }
        inline app::IntSizedArray* create() {
            return il2cpp::create_object<app::IntSizedArray>(get_class());
        }
    } // namespace IntSizedArray
} // namespace app::classes::types
