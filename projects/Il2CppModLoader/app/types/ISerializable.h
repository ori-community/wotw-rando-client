#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ISerializable {
        inline app::ISerializable__Class** type_info = (app::ISerializable__Class**)(modloader::win::memory::resolve_rva(0x0475A608));
        inline app::ISerializable__Class* get_class() {
            return il2cpp::get_class<app::ISerializable__Class>(type_info, "System.Runtime.Serialization", "ISerializable");
        }
    } // namespace ISerializable
} // namespace app::classes::types
