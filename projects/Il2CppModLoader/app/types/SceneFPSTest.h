#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SceneFPSTest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SceneFPSTest__Class** type_info;
        inline app::SceneFPSTest__Class* get_class() {
            return il2cpp::get_class<app::SceneFPSTest__Class>(type_info, "", "SceneFPSTest");
        }
        inline app::SceneFPSTest* create() {
            return il2cpp::create_object<app::SceneFPSTest>(get_class());
        }
    } // namespace SceneFPSTest
} // namespace app::classes::types
