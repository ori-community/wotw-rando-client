#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Trail {
        inline app::Trail__Class** type_info = (app::Trail__Class**)(modloader::win::memory::resolve_rva(0x0474ED20));
        inline app::Trail__Class* get_class() {
            return il2cpp::get_class<app::Trail__Class>(type_info, "Moon", "Trail");
        }
        inline app::Trail* create() {
            return il2cpp::create_object<app::Trail>(get_class());
        }
    } // namespace Trail
} // namespace app::classes::types
