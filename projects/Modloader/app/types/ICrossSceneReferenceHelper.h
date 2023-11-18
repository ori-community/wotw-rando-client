#pragma once
#include <Modloader/app/structs/ICrossSceneReferenceHelper.h>
#include <Modloader/app/structs/ICrossSceneReferenceHelper__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ICrossSceneReferenceHelper {
        inline app::ICrossSceneReferenceHelper__Class** type_info() {
            static app::ICrossSceneReferenceHelper__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ICrossSceneReferenceHelper__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ICrossSceneReferenceHelper__Class* get_class() {
            return il2cpp::get_class<app::ICrossSceneReferenceHelper__Class>(type_info(), "Moon", "ICrossSceneReferenceHelper");
        }
    } // namespace ICrossSceneReferenceHelper
} // namespace app::classes::types
