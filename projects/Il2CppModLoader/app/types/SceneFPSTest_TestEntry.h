#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SceneFPSTest_TestEntry {
        inline app::SceneFPSTest_TestEntry__Class** type_info = (app::SceneFPSTest_TestEntry__Class**)(modloader::win::memory::resolve_rva(0x04760FB8));
        inline app::SceneFPSTest_TestEntry__Class* get_class() {
            return il2cpp::get_nested_class<app::SceneFPSTest_TestEntry__Class>(type_info, "", "SceneFPSTest", "TestEntry");
        }
        inline app::SceneFPSTest_TestEntry* create() {
            return il2cpp::create_object<app::SceneFPSTest_TestEntry>(get_class());
        }
        inline app::SceneFPSTest_TestEntry__Array* create_array(int size) {
            return il2cpp::array_new<app::SceneFPSTest_TestEntry__Array>(get_class(), size);
        }
        inline app::SceneFPSTest_TestEntry__Array* create_array(const std::vector<app::SceneFPSTest_TestEntry*>& items) {
            return il2cpp::array_new<app::SceneFPSTest_TestEntry__Array>(get_class(), items);
        }
    } // namespace SceneFPSTest_TestEntry
} // namespace app::classes::types
