#pragma once
#include <Modloader/app/structs/CreateAssetMenuAttribute.h>
#include <Modloader/app/structs/CreateAssetMenuAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CreateAssetMenuAttribute {
        inline app::CreateAssetMenuAttribute__Class** type_info() {
            static app::CreateAssetMenuAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CreateAssetMenuAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CreateAssetMenuAttribute__Class* get_class() {
            return il2cpp::get_class<app::CreateAssetMenuAttribute__Class>(type_info(), "UnityEngine", "CreateAssetMenuAttribute");
        }
        inline app::CreateAssetMenuAttribute* create() {
            return il2cpp::create_object<app::CreateAssetMenuAttribute>(get_class());
        }
    } // namespace CreateAssetMenuAttribute
} // namespace app::classes::types
