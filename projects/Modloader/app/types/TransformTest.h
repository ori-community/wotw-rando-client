#pragma once
#include <Modloader/app/structs/TransformTest.h>
#include <Modloader/app/structs/TransformTest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TransformTest {
        inline app::TransformTest__Class** type_info() {
            static app::TransformTest__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TransformTest__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TransformTest__Class* get_class() {
            return il2cpp::get_class<app::TransformTest__Class>(type_info(), "Moon", "TransformTest");
        }
        inline app::TransformTest* create() {
            return il2cpp::create_object<app::TransformTest>(get_class());
        }
    } // namespace TransformTest
} // namespace app::classes::types
