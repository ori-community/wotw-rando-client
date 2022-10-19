#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace BinaryMethodReturn {
        inline app::BinaryMethodReturn__Class** type_info = (app::BinaryMethodReturn__Class**)(modloader::win::memory::resolve_rva(0x047282C0));
        inline app::BinaryMethodReturn__Class* get_class() {
            return il2cpp::get_class<app::BinaryMethodReturn__Class>(type_info, "System.Runtime.Serialization.Formatters.Binary", "BinaryMethodReturn");
        }
        inline app::BinaryMethodReturn* create() {
            return il2cpp::create_object<app::BinaryMethodReturn>(get_class());
        }
    } // namespace BinaryMethodReturn
} // namespace app::classes::types
