#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IPredicates {
        inline app::IPredicates__Class** type_info = (app::IPredicates__Class**)(modloader::win::memory::resolve_rva(0x04708338));
        inline app::IPredicates__Class* get_class() {
            return il2cpp::get_class<app::IPredicates__Class>(type_info, "TriangleNet", "IPredicates");
        }
    } // namespace IPredicates
} // namespace app::classes::types
