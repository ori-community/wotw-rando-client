#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PrimitiveArray {
        inline app::PrimitiveArray__Class** type_info = (app::PrimitiveArray__Class**)(modloader::win::memory::resolve_rva(0x047099F8));
        inline app::PrimitiveArray__Class* get_class() {
            return il2cpp::get_class<app::PrimitiveArray__Class>(type_info, "System.Runtime.Serialization.Formatters.Binary", "PrimitiveArray");
        }
        inline app::PrimitiveArray* create() {
            return il2cpp::create_object<app::PrimitiveArray>(get_class());
        }
    } // namespace PrimitiveArray
} // namespace app::classes::types
