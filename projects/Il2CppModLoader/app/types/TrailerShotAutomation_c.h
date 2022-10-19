#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TrailerShotAutomation_c {
        inline app::TrailerShotAutomation_c__Class** type_info = (app::TrailerShotAutomation_c__Class**)(modloader::win::memory::resolve_rva(0x04770788));
        inline app::TrailerShotAutomation_c__Class* get_class() {
            return il2cpp::get_nested_class<app::TrailerShotAutomation_c__Class>(type_info, "", "TrailerShotAutomation", "<>c");
        }
        inline app::TrailerShotAutomation_c* create() {
            return il2cpp::create_object<app::TrailerShotAutomation_c>(get_class());
        }
    } // namespace TrailerShotAutomation_c
} // namespace app::classes::types
