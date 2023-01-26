#pragma once
#include <Modloader/app/structs/ScalePositionForAspectRatio.h>
#include <Modloader/app/structs/ScalePositionForAspectRatio__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ScalePositionForAspectRatio {
        inline app::ScalePositionForAspectRatio__Class** type_info() {
            static app::ScalePositionForAspectRatio__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ScalePositionForAspectRatio__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ScalePositionForAspectRatio__Class* get_class() {
            return il2cpp::get_class<app::ScalePositionForAspectRatio__Class>(type_info(), "", "ScalePositionForAspectRatio");
        }
        inline app::ScalePositionForAspectRatio* create() {
            return il2cpp::create_object<app::ScalePositionForAspectRatio>(get_class());
        }
    } // namespace ScalePositionForAspectRatio
} // namespace app::classes::types
