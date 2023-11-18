#pragma once
#include <Modloader/app/structs/GhostTransformData.h>
#include <Modloader/app/structs/GhostTransformData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GhostTransformData {
        inline app::GhostTransformData__Class** type_info() {
            static app::GhostTransformData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GhostTransformData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GhostTransformData__Class* get_class() {
            return il2cpp::get_class<app::GhostTransformData__Class>(type_info(), "", "GhostTransformData");
        }
        inline app::GhostTransformData* create() {
            return il2cpp::create_object<app::GhostTransformData>(get_class());
        }
    } // namespace GhostTransformData
} // namespace app::classes::types
