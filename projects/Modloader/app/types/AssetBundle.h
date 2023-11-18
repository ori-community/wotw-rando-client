#pragma once
#include <Modloader/app/structs/AssetBundle.h>
#include <Modloader/app/structs/AssetBundle__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AssetBundle {
        inline app::AssetBundle__Class** type_info() {
            static app::AssetBundle__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AssetBundle__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AssetBundle__Class* get_class() {
            return il2cpp::get_class<app::AssetBundle__Class>(type_info(), "UnityEngine", "AssetBundle");
        }
        inline app::AssetBundle* create() {
            return il2cpp::create_object<app::AssetBundle>(get_class());
        }
    } // namespace AssetBundle
} // namespace app::classes::types
