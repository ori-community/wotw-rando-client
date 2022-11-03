#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TransformTest {
        namespace {
            inline app::TransformTest__Class* type_info_ref = nullptr;
        }
        inline app::TransformTest__Class** type_info = &type_info_ref;
        inline app::TransformTest__Class* get_class() {
            return il2cpp::get_class<app::TransformTest__Class>(type_info, "Moon", "TransformTest");
        }
        inline app::TransformTest* create() {
            return il2cpp::create_object<app::TransformTest>(get_class());
        }
    } // namespace TransformTest
} // namespace app::classes::types
