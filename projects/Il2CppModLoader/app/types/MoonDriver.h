#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonDriver {
        inline app::MoonDriver__Class** type_info = (app::MoonDriver__Class**)(modloader::win::memory::resolve_rva(0x0471F8D8));
        inline app::MoonDriver__Class* get_class() {
            return il2cpp::get_class<app::MoonDriver__Class>(type_info, "Moon", "MoonDriver");
        }
        inline app::MoonDriver* create() {
            return il2cpp::create_object<app::MoonDriver>(get_class());
        }
    } // namespace MoonDriver
} // namespace app::classes::types
