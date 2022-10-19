#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Tests_c {
        inline app::Tests_c__Class** type_info = (app::Tests_c__Class**)(modloader::win::memory::resolve_rva(0x04713228));
        inline app::Tests_c__Class* get_class() {
            return il2cpp::get_nested_class<app::Tests_c__Class>(type_info, "HierarchyPerfTest", "Tests", "<>c");
        }
        inline app::Tests_c* create() {
            return il2cpp::create_object<app::Tests_c>(get_class());
        }
    } // namespace Tests_c
} // namespace app::classes::types
