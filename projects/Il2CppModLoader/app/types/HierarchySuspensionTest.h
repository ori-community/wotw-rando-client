#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace HierarchySuspensionTest {
        inline app::HierarchySuspensionTest__Class** type_info = (app::HierarchySuspensionTest__Class**)(modloader::win::memory::resolve_rva(0x0478C3B0));
        inline app::HierarchySuspensionTest__Class* get_class() {
            return il2cpp::get_class<app::HierarchySuspensionTest__Class>(type_info, "", "HierarchySuspensionTest");
        }
        inline app::HierarchySuspensionTest* create() {
            return il2cpp::create_object<app::HierarchySuspensionTest>(get_class());
        }
    } // namespace HierarchySuspensionTest
} // namespace app::classes::types
