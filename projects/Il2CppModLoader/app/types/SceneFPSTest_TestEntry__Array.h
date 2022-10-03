#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SceneFPSTest_TestEntry__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SceneFPSTest_TestEntry__Array__Class** type_info;
        inline app::SceneFPSTest_TestEntry__Array__Class* get_class() {
            return il2cpp::get_class<app::SceneFPSTest_TestEntry__Array__Class>(type_info, "", "SceneFPSTest+TestEntry[]");
        }
        inline app::SceneFPSTest_TestEntry__Array* create() {
            return il2cpp::create_object<app::SceneFPSTest_TestEntry__Array>(get_class());
        }
    } // namespace SceneFPSTest_TestEntry__Array
} // namespace app::classes::types
