#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace InstantiationHistory_c {
        inline app::InstantiationHistory_c__Class** type_info = (app::InstantiationHistory_c__Class**)(modloader::win::memory::resolve_rva(0x047894E8));
        inline app::InstantiationHistory_c__Class* get_class() {
            return il2cpp::get_nested_class<app::InstantiationHistory_c__Class>(type_info, "", "InstantiationHistory", "<>c");
        }
        inline app::InstantiationHistory_c* create() {
            return il2cpp::create_object<app::InstantiationHistory_c>(get_class());
        }
    } // namespace InstantiationHistory_c
} // namespace app::classes::types
