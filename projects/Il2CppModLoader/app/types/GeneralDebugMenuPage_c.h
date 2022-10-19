#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GeneralDebugMenuPage_c {
        inline app::GeneralDebugMenuPage_c__Class** type_info = (app::GeneralDebugMenuPage_c__Class**)(modloader::win::memory::resolve_rva(0x04755728));
        inline app::GeneralDebugMenuPage_c__Class* get_class() {
            return il2cpp::get_nested_class<app::GeneralDebugMenuPage_c__Class>(type_info, "", "GeneralDebugMenuPage", "<>c");
        }
        inline app::GeneralDebugMenuPage_c* create() {
            return il2cpp::create_object<app::GeneralDebugMenuPage_c>(get_class());
        }
    } // namespace GeneralDebugMenuPage_c
} // namespace app::classes::types
