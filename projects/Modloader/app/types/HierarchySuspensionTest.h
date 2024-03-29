#pragma once
#include <Modloader/app/structs/HierarchySuspensionTest.h>
#include <Modloader/app/structs/HierarchySuspensionTest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HierarchySuspensionTest {
        inline app::HierarchySuspensionTest__Class** type_info() {
            static app::HierarchySuspensionTest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::HierarchySuspensionTest__Class**)(modloader::win::memory::resolve_rva(0x0478C3B0));
            }
            return cache;
        }
        inline app::HierarchySuspensionTest__Class* get_class() {
            return il2cpp::get_class<app::HierarchySuspensionTest__Class>(type_info(), "", "HierarchySuspensionTest");
        }
        inline app::HierarchySuspensionTest* create() {
            return il2cpp::create_object<app::HierarchySuspensionTest>(get_class());
        }
    } // namespace HierarchySuspensionTest
} // namespace app::classes::types
