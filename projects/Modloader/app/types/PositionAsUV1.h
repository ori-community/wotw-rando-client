#pragma once
#include <Modloader/app/structs/PositionAsUV1.h>
#include <Modloader/app/structs/PositionAsUV1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PositionAsUV1 {
        inline app::PositionAsUV1__Class** type_info() {
            static app::PositionAsUV1__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PositionAsUV1__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PositionAsUV1__Class* get_class() {
            return il2cpp::get_class<app::PositionAsUV1__Class>(type_info(), "UnityEngine.UI", "PositionAsUV1");
        }
        inline app::PositionAsUV1* create() {
            return il2cpp::create_object<app::PositionAsUV1>(get_class());
        }
    } // namespace PositionAsUV1
} // namespace app::classes::types
