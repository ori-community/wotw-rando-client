#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace BinaryMethodCall {
        inline app::BinaryMethodCall__Class** type_info = (app::BinaryMethodCall__Class**)(modloader::win::memory::resolve_rva(0x04787058));
        inline app::BinaryMethodCall__Class* get_class() {
            return il2cpp::get_class<app::BinaryMethodCall__Class>(type_info, "System.Runtime.Serialization.Formatters.Binary", "BinaryMethodCall");
        }
        inline app::BinaryMethodCall* create() {
            return il2cpp::create_object<app::BinaryMethodCall>(get_class());
        }
    } // namespace BinaryMethodCall
} // namespace app::classes::types
