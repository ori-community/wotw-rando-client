#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PathList {
        inline app::PathList__Class** type_info = (app::PathList__Class**)(modloader::win::memory::resolve_rva(0x04720E20));
        inline app::PathList__Class* get_class() {
            return il2cpp::get_class<app::PathList__Class>(type_info, "System.Net", "PathList");
        }
        inline app::PathList* create() {
            return il2cpp::create_object<app::PathList>(get_class());
        }
    } // namespace PathList
} // namespace app::classes::types
