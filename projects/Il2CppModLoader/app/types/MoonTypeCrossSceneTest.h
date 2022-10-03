#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonTypeCrossSceneTest {
        namespace {
            app::MoonTypeCrossSceneTest__Class* type_info_ref = nullptr;
        }
        app::MoonTypeCrossSceneTest__Class** type_info = &type_info_ref;
        inline app::MoonTypeCrossSceneTest__Class* get_class() {
            return il2cpp::get_class<app::MoonTypeCrossSceneTest__Class>(type_info, "", "MoonTypeCrossSceneTest");
        }
        inline app::MoonTypeCrossSceneTest* create() {
            return il2cpp::create_object<app::MoonTypeCrossSceneTest>(get_class());
        }
    } // namespace MoonTypeCrossSceneTest
} // namespace app::classes::types
