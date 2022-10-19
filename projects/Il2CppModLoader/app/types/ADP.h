#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ADP {
        inline app::ADP__Class** type_info = (app::ADP__Class**)(modloader::win::memory::resolve_rva(0x047240A8));
        inline app::ADP__Class* get_class() {
            return il2cpp::get_class<app::ADP__Class>(type_info, "System.Data.Common", "ADP");
        }
        inline app::ADP* create() {
            return il2cpp::create_object<app::ADP>(get_class());
        }
    } // namespace ADP
} // namespace app::classes::types
