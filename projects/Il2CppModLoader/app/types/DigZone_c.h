#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DigZone_c {
        inline app::DigZone_c__Class** type_info = (app::DigZone_c__Class**)(modloader::win::memory::resolve_rva(0x047094A8));
        inline app::DigZone_c__Class* get_class() {
            return il2cpp::get_nested_class<app::DigZone_c__Class>(type_info, "", "DigZone", "<>c");
        }
        inline app::DigZone_c* create() {
            return il2cpp::create_object<app::DigZone_c>(get_class());
        }
    } // namespace DigZone_c
} // namespace app::classes::types
