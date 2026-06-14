#pragma once
#include <Modloader/app/structs/MaskUtilities.h>
#include <Modloader/app/structs/MaskUtilities__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MaskUtilities {
        inline app::MaskUtilities__Class** type_info() {
            static app::MaskUtilities__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MaskUtilities__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MaskUtilities__Class* get_class() {
            return il2cpp::get_class<app::MaskUtilities__Class>(type_info(), "UnityEngine.UI", "MaskUtilities");
        }
        inline app::MaskUtilities* create() {
            return il2cpp::create_object<app::MaskUtilities>(get_class());
        }
    } // namespace MaskUtilities
} // namespace app::classes::types
