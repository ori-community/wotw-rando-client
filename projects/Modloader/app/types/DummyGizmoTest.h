#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DummyGizmoTest__Class.h>
#include <Modloader/app/structs/DummyGizmoTest.h>

namespace app::classes::types {
    namespace DummyGizmoTest {
        namespace {
            inline app::DummyGizmoTest__Class* type_info_ref = nullptr;
        }
        inline app::DummyGizmoTest__Class** type_info = &type_info_ref;
        inline app::DummyGizmoTest__Class* get_class() {
            return il2cpp::get_class<app::DummyGizmoTest__Class>(type_info, "", "DummyGizmoTest");
        }
        inline app::DummyGizmoTest* create() {
            return il2cpp::create_object<app::DummyGizmoTest>(get_class());
        }
    } // namespace DummyGizmoTest
} // namespace app::classes::types
