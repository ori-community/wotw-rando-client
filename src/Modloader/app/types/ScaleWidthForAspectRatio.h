#pragma once
#include <Modloader/app/structs/ScaleWidthForAspectRatio.h>
#include <Modloader/app/structs/ScaleWidthForAspectRatio__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ScaleWidthForAspectRatio {
        inline app::ScaleWidthForAspectRatio__Class** type_info() {
            static app::ScaleWidthForAspectRatio__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ScaleWidthForAspectRatio__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ScaleWidthForAspectRatio__Class* get_class() {
            return il2cpp::get_class<app::ScaleWidthForAspectRatio__Class>(type_info(), "", "ScaleWidthForAspectRatio");
        }
        inline app::ScaleWidthForAspectRatio* create() {
            return il2cpp::create_object<app::ScaleWidthForAspectRatio>(get_class());
        }
    } // namespace ScaleWidthForAspectRatio
} // namespace app::classes::types
