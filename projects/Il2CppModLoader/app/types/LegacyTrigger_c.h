#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LegacyTrigger_c {
        inline app::LegacyTrigger_c__Class** type_info = (app::LegacyTrigger_c__Class**)(modloader::win::memory::resolve_rva(0x04783D18));
        inline app::LegacyTrigger_c__Class* get_class() {
            return il2cpp::get_nested_class<app::LegacyTrigger_c__Class>(type_info, "", "LegacyTrigger", "<>c");
        }
        inline app::LegacyTrigger_c* create() {
            return il2cpp::create_object<app::LegacyTrigger_c>(get_class());
        }
    } // namespace LegacyTrigger_c
} // namespace app::classes::types
