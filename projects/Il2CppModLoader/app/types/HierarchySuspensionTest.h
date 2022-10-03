#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HierarchySuspensionTest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::HierarchySuspensionTest__Class** type_info;
        inline app::HierarchySuspensionTest__Class* get_class() {
            return il2cpp::get_class<app::HierarchySuspensionTest__Class>(type_info, "", "HierarchySuspensionTest");
        }
        inline app::HierarchySuspensionTest* create() {
            return il2cpp::create_object<app::HierarchySuspensionTest>(get_class());
        }
    } // namespace HierarchySuspensionTest
} // namespace app::classes::types
