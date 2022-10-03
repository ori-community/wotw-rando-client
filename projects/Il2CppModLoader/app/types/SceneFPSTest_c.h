#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SceneFPSTest_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SceneFPSTest_c__Class** type_info;
        inline app::SceneFPSTest_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SceneFPSTest_c__Class>(type_info, "", "SceneFPSTest", "<>c");
        }
        inline app::SceneFPSTest_c* create() {
            return il2cpp::create_object<app::SceneFPSTest_c>(get_class());
        }
    } // namespace SceneFPSTest_c
} // namespace app::classes::types
