#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Tests {
        inline app::Tests__Class** type_info = (app::Tests__Class**)(modloader::win::memory::resolve_rva(0x04740C18));
        inline app::Tests__Class* get_class() {
            return il2cpp::get_class<app::Tests__Class>(type_info, "HierarchyPerfTest", "Tests");
        }
        inline app::Tests* create() {
            return il2cpp::create_object<app::Tests>(get_class());
        }
    } // namespace Tests
} // namespace app::classes::types
