#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AVProWindowsMediaMovie__Array {
        inline app::AVProWindowsMediaMovie__Array__Class** type_info = (app::AVProWindowsMediaMovie__Array__Class**)(modloader::win::memory::resolve_rva(0x0470F920));
        inline app::AVProWindowsMediaMovie__Array__Class* get_class() {
            return il2cpp::get_class<app::AVProWindowsMediaMovie__Array__Class>(type_info, "", "AVProWindowsMediaMovie[]");
        }
        inline app::AVProWindowsMediaMovie__Array* create() {
            return il2cpp::create_object<app::AVProWindowsMediaMovie__Array>(get_class());
        }
    } // namespace AVProWindowsMediaMovie__Array
} // namespace app::classes::types
