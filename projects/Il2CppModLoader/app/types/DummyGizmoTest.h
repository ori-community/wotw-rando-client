#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

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
