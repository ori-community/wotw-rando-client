#pragma once
#include <Modloader/app/structs/PreloadData.h>
#include <Modloader/app/structs/PreloadData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PreloadData {
        inline app::PreloadData__Class** type_info() {
            static app::PreloadData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PreloadData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PreloadData__Class* get_class() {
            return il2cpp::get_class<app::PreloadData__Class>(type_info(), "UnityEngine", "PreloadData");
        }
        inline app::PreloadData* create() {
            return il2cpp::create_object<app::PreloadData>(get_class());
        }
    } // namespace PreloadData
} // namespace app::classes::types
