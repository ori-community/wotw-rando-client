#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ICrossSceneReferenceHelper {
        namespace {
            inline app::ICrossSceneReferenceHelper__Class* type_info_ref = nullptr;
        }
        inline app::ICrossSceneReferenceHelper__Class** type_info = &type_info_ref;
        inline app::ICrossSceneReferenceHelper__Class* get_class() {
            return il2cpp::get_class<app::ICrossSceneReferenceHelper__Class>(type_info, "Moon", "ICrossSceneReferenceHelper");
        }
    } // namespace ICrossSceneReferenceHelper
} // namespace app::classes::types
