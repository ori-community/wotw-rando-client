#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace VisualLog {
        inline app::VisualLog__Class** type_info = (app::VisualLog__Class**)(modloader::win::memory::resolve_rva(0x0476BB70));
        inline app::VisualLog__Class* get_class() {
            return il2cpp::get_class<app::VisualLog__Class>(type_info, "", "VisualLog");
        }
        inline app::VisualLog* create() {
            return il2cpp::create_object<app::VisualLog>(get_class());
        }
    } // namespace VisualLog
} // namespace app::classes::types
