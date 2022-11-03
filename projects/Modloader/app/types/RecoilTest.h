#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RecoilTest {
        namespace {
            inline app::RecoilTest__Class* type_info_ref = nullptr;
        }
        inline app::RecoilTest__Class** type_info = &type_info_ref;
        inline app::RecoilTest__Class* get_class() {
            return il2cpp::get_class<app::RecoilTest__Class>(type_info, "RootMotion.Demos", "RecoilTest");
        }
        inline app::RecoilTest* create() {
            return il2cpp::create_object<app::RecoilTest>(get_class());
        }
    } // namespace RecoilTest
} // namespace app::classes::types
