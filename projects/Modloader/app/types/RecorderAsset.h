#pragma once
#include <Modloader/app/structs/RecorderAsset.h>
#include <Modloader/app/structs/RecorderAsset__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RecorderAsset {
        inline app::RecorderAsset__Class** type_info() {
            static app::RecorderAsset__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RecorderAsset__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RecorderAsset__Class* get_class() {
            return il2cpp::get_class<app::RecorderAsset__Class>(type_info(), "", "RecorderAsset");
        }
        inline app::RecorderAsset* create() {
            return il2cpp::create_object<app::RecorderAsset>(get_class());
        }
    } // namespace RecorderAsset
} // namespace app::classes::types
