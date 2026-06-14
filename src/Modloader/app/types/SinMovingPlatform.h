#pragma once
#include <Modloader/app/structs/SinMovingPlatform.h>
#include <Modloader/app/structs/SinMovingPlatform__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SinMovingPlatform {
        inline app::SinMovingPlatform__Class** type_info() {
            static app::SinMovingPlatform__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SinMovingPlatform__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SinMovingPlatform__Class* get_class() {
            return il2cpp::get_class<app::SinMovingPlatform__Class>(type_info(), "", "SinMovingPlatform");
        }
        inline app::SinMovingPlatform* create() {
            return il2cpp::create_object<app::SinMovingPlatform>(get_class());
        }
    } // namespace SinMovingPlatform
} // namespace app::classes::types
