#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberStateConditionHelper_c_DisplayClass3_0 {
        inline app::UberStateConditionHelper_c_DisplayClass3_0__Class** type_info = (app::UberStateConditionHelper_c_DisplayClass3_0__Class**)(modloader::win::memory::resolve_rva(0x04737DD8));
        inline app::UberStateConditionHelper_c_DisplayClass3_0__Class* get_class() {
            return il2cpp::get_nested_class<app::UberStateConditionHelper_c_DisplayClass3_0__Class>(type_info, "", "UberStateConditionHelper", "<>c__DisplayClass3_0");
        }
        inline app::UberStateConditionHelper_c_DisplayClass3_0* create() {
            return il2cpp::create_object<app::UberStateConditionHelper_c_DisplayClass3_0>(get_class());
        }
    } // namespace UberStateConditionHelper_c_DisplayClass3_0
} // namespace app::classes::types
