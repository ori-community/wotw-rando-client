#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonApplication_c {
        inline app::MoonApplication_c__Class** type_info = (app::MoonApplication_c__Class**)(modloader::win::memory::resolve_rva(0x0474D240));
        inline app::MoonApplication_c__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonApplication_c__Class>(type_info, "", "MoonApplication", "<>c");
        }
        inline app::MoonApplication_c* create() {
            return il2cpp::create_object<app::MoonApplication_c>(get_class());
        }
    } // namespace MoonApplication_c
} // namespace app::classes::types
