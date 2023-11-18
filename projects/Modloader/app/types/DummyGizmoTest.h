#pragma once
#include <Modloader/app/structs/DummyGizmoTest.h>
#include <Modloader/app/structs/DummyGizmoTest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DummyGizmoTest {
        inline app::DummyGizmoTest__Class** type_info() {
            static app::DummyGizmoTest__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DummyGizmoTest__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DummyGizmoTest__Class* get_class() {
            return il2cpp::get_class<app::DummyGizmoTest__Class>(type_info(), "", "DummyGizmoTest");
        }
        inline app::DummyGizmoTest* create() {
            return il2cpp::create_object<app::DummyGizmoTest>(get_class());
        }
    } // namespace DummyGizmoTest
} // namespace app::classes::types
