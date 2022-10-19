#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Point_1 {
        inline app::Point_1__Class** type_info = (app::Point_1__Class**)(modloader::win::memory::resolve_rva(0x04783010));
        inline app::Point_1__Class* get_class() {
            return il2cpp::get_class<app::Point_1__Class>(type_info, "Moon", "Point");
        }
        inline app::Point_1* create() {
            return il2cpp::create_object<app::Point_1>(get_class());
        }
    } // namespace Point_1
} // namespace app::classes::types
