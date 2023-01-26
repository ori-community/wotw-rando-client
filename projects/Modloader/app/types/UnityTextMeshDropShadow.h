#pragma once
#include <Modloader/app/structs/UnityTextMeshDropShadow.h>
#include <Modloader/app/structs/UnityTextMeshDropShadow__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UnityTextMeshDropShadow {
        inline app::UnityTextMeshDropShadow__Class** type_info() {
            static app::UnityTextMeshDropShadow__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UnityTextMeshDropShadow__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UnityTextMeshDropShadow__Class* get_class() {
            return il2cpp::get_class<app::UnityTextMeshDropShadow__Class>(type_info(), "", "UnityTextMeshDropShadow");
        }
        inline app::UnityTextMeshDropShadow* create() {
            return il2cpp::create_object<app::UnityTextMeshDropShadow>(get_class());
        }
    } // namespace UnityTextMeshDropShadow
} // namespace app::classes::types
