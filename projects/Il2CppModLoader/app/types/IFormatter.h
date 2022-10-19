#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IFormatter {
        inline app::IFormatter__Class** type_info = (app::IFormatter__Class**)(modloader::win::memory::resolve_rva(0x0478C7B0));
        inline app::IFormatter__Class* get_class() {
            return il2cpp::get_class<app::IFormatter__Class>(type_info, "System.Runtime.Serialization", "IFormatter");
        }
    } // namespace IFormatter
} // namespace app::classes::types
