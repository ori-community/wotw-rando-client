#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShowFixedTimeTextEntity_c {
        inline app::ShowFixedTimeTextEntity_c__Class** type_info = (app::ShowFixedTimeTextEntity_c__Class**)(modloader::win::memory::resolve_rva(0x047835B8));
        inline app::ShowFixedTimeTextEntity_c__Class* get_class() {
            return il2cpp::get_nested_class<app::ShowFixedTimeTextEntity_c__Class>(type_info, "Moon.Timeline", "ShowFixedTimeTextEntity", "<>c");
        }
        inline app::ShowFixedTimeTextEntity_c* create() {
            return il2cpp::create_object<app::ShowFixedTimeTextEntity_c>(get_class());
        }
    } // namespace ShowFixedTimeTextEntity_c
} // namespace app::classes::types
