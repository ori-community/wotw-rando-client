#pragma once
#include <Modloader/app/structs/SeinBashVersionAsset.h>
#include <Modloader/app/structs/SeinBashVersionAsset__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinBashVersionAsset {
        inline app::SeinBashVersionAsset__Class** type_info() {
            static app::SeinBashVersionAsset__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinBashVersionAsset__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinBashVersionAsset__Class* get_class() {
            return il2cpp::get_class<app::SeinBashVersionAsset__Class>(type_info(), "", "SeinBashVersionAsset");
        }
        inline app::SeinBashVersionAsset* create() {
            return il2cpp::create_object<app::SeinBashVersionAsset>(get_class());
        }
    } // namespace SeinBashVersionAsset
} // namespace app::classes::types
