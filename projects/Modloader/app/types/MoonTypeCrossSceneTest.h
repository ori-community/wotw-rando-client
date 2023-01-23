#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MoonTypeCrossSceneTest__Class.h>
#include <Modloader/app/structs/MoonTypeCrossSceneTest.h>

namespace app::classes::types {
    namespace MoonTypeCrossSceneTest {
        namespace {
            inline app::MoonTypeCrossSceneTest__Class* type_info_ref = nullptr;
        }
        inline app::MoonTypeCrossSceneTest__Class** type_info = &type_info_ref;
        inline app::MoonTypeCrossSceneTest__Class* get_class() {
            return il2cpp::get_class<app::MoonTypeCrossSceneTest__Class>(type_info, "", "MoonTypeCrossSceneTest");
        }
        inline app::MoonTypeCrossSceneTest* create() {
            return il2cpp::create_object<app::MoonTypeCrossSceneTest>(get_class());
        }
    } // namespace MoonTypeCrossSceneTest
} // namespace app::classes::types
