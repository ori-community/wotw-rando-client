#pragma once
#include <Modloader/app/structs/CropUtility.h>
#include <Modloader/app/structs/CropUtility__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CropUtility {
        inline app::CropUtility__Class** type_info() {
            static app::CropUtility__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CropUtility__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CropUtility__Class* get_class() {
            return il2cpp::get_class<app::CropUtility__Class>(type_info(), "", "CropUtility");
        }
        inline app::CropUtility* create() {
            return il2cpp::create_object<app::CropUtility>(get_class());
        }
    } // namespace CropUtility
} // namespace app::classes::types
