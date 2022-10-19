#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace InstantiateUtility_c_DisplayClass30_0 {
        inline app::InstantiateUtility_c_DisplayClass30_0__Class** type_info = (app::InstantiateUtility_c_DisplayClass30_0__Class**)(modloader::win::memory::resolve_rva(0x04747420));
        inline app::InstantiateUtility_c_DisplayClass30_0__Class* get_class() {
            return il2cpp::get_nested_class<app::InstantiateUtility_c_DisplayClass30_0__Class>(type_info, "", "InstantiateUtility", "<>c__DisplayClass30_0");
        }
        inline app::InstantiateUtility_c_DisplayClass30_0* create() {
            return il2cpp::create_object<app::InstantiateUtility_c_DisplayClass30_0>(get_class());
        }
    } // namespace InstantiateUtility_c_DisplayClass30_0
} // namespace app::classes::types
