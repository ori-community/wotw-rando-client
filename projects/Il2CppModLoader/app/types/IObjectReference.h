#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IObjectReference {
        inline app::IObjectReference__Class** type_info = (app::IObjectReference__Class**)(modloader::win::memory::resolve_rva(0x0472B148));
        inline app::IObjectReference__Class* get_class() {
            return il2cpp::get_class<app::IObjectReference__Class>(type_info, "System.Runtime.Serialization", "IObjectReference");
        }
    } // namespace IObjectReference
} // namespace app::classes::types
