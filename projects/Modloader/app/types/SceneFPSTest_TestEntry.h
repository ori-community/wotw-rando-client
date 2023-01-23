#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SceneFPSTest_TestEntry__Class.h>
#include <Modloader/app/structs/SceneFPSTest_TestEntry.h>
#include <Modloader/app/structs/SceneFPSTest_TestEntry__Array.h>

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
