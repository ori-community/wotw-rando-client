#pragma once
#include <Modloader/app/structs/MoonTypeCrossSceneTest.h>
#include <Modloader/app/structs/MoonTypeCrossSceneTest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonTypeCrossSceneTest {
        inline app::MoonTypeCrossSceneTest__Class** type_info() {
            static app::MoonTypeCrossSceneTest__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MoonTypeCrossSceneTest__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MoonTypeCrossSceneTest__Class* get_class() {
            return il2cpp::get_class<app::MoonTypeCrossSceneTest__Class>(type_info(), "", "MoonTypeCrossSceneTest");
        }
        inline app::MoonTypeCrossSceneTest* create() {
            return il2cpp::create_object<app::MoonTypeCrossSceneTest>(get_class());
        }
    } // namespace MoonTypeCrossSceneTest
} // namespace app::classes::types
