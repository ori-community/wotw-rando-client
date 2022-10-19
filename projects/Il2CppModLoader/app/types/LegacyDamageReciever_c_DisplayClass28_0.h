#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LegacyDamageReciever_c_DisplayClass28_0 {
        inline app::LegacyDamageReciever_c_DisplayClass28_0__Class** type_info = (app::LegacyDamageReciever_c_DisplayClass28_0__Class**)(modloader::win::memory::resolve_rva(0x047120A8));
        inline app::LegacyDamageReciever_c_DisplayClass28_0__Class* get_class() {
            return il2cpp::get_nested_class<app::LegacyDamageReciever_c_DisplayClass28_0__Class>(type_info, "", "LegacyDamageReciever", "<>c__DisplayClass28_0");
        }
        inline app::LegacyDamageReciever_c_DisplayClass28_0* create() {
            return il2cpp::create_object<app::LegacyDamageReciever_c_DisplayClass28_0>(get_class());
        }
    } // namespace LegacyDamageReciever_c_DisplayClass28_0
} // namespace app::classes::types
