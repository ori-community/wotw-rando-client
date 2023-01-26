#pragma once
#include <Modloader/app/structs/RecoilTest.h>
#include <Modloader/app/structs/RecoilTest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RecoilTest {
        inline app::RecoilTest__Class** type_info() {
            static app::RecoilTest__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RecoilTest__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RecoilTest__Class* get_class() {
            return il2cpp::get_class<app::RecoilTest__Class>(type_info(), "RootMotion.Demos", "RecoilTest");
        }
        inline app::RecoilTest* create() {
            return il2cpp::create_object<app::RecoilTest>(get_class());
        }
    } // namespace RecoilTest
} // namespace app::classes::types
