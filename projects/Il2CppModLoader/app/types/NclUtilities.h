#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace NclUtilities {
        inline app::NclUtilities__Class** type_info = (app::NclUtilities__Class**)(modloader::win::memory::resolve_rva(0x0473A048));
        inline app::NclUtilities__Class* get_class() {
            return il2cpp::get_class<app::NclUtilities__Class>(type_info, "System.Net", "NclUtilities");
        }
        inline app::NclUtilities* create() {
            return il2cpp::create_object<app::NclUtilities>(get_class());
        }
    } // namespace NclUtilities
} // namespace app::classes::types
