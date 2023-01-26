#pragma once
#include <Modloader/app/structs/StressTester_SceneIdentifier__Array.h>
#include <Modloader/app/structs/StressTester_SceneIdentifier__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StressTester_SceneIdentifier__Array {
        inline app::StressTester_SceneIdentifier__Array__Class** type_info() {
            static app::StressTester_SceneIdentifier__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::StressTester_SceneIdentifier__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::StressTester_SceneIdentifier__Array__Class* get_class() {
            return il2cpp::get_class<app::StressTester_SceneIdentifier__Array__Class>(type_info(), "", "StressTester+SceneIdentifier[]");
        }
        inline app::StressTester_SceneIdentifier__Array* create() {
            return il2cpp::create_object<app::StressTester_SceneIdentifier__Array>(get_class());
        }
    } // namespace StressTester_SceneIdentifier__Array
} // namespace app::classes::types
