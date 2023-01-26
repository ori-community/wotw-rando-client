#pragma once
#include <Modloader/app/structs/CageCircleTest.h>
#include <Modloader/app/structs/CageCircleTest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CageCircleTest {
        inline app::CageCircleTest__Class** type_info() {
            static app::CageCircleTest__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CageCircleTest__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CageCircleTest__Class* get_class() {
            return il2cpp::get_class<app::CageCircleTest__Class>(type_info(), "", "CageCircleTest");
        }
        inline app::CageCircleTest* create() {
            return il2cpp::create_object<app::CageCircleTest>(get_class());
        }
    } // namespace CageCircleTest
} // namespace app::classes::types
