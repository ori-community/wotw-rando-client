#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TestRunner_c {
        inline app::TestRunner_c__Class** type_info = (app::TestRunner_c__Class**)(modloader::win::memory::resolve_rva(0x047536A0));
        inline app::TestRunner_c__Class* get_class() {
            return il2cpp::get_nested_class<app::TestRunner_c__Class>(type_info, "HierarchyPerfTest", "TestRunner", "<>c");
        }
        inline app::TestRunner_c* create() {
            return il2cpp::create_object<app::TestRunner_c>(get_class());
        }
    } // namespace TestRunner_c
} // namespace app::classes::types
