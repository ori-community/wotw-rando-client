#pragma once
#include <Modloader/app/structs/RiseSinkPlatform.h>
#include <Modloader/app/structs/RiseSinkPlatform__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RiseSinkPlatform {
        inline app::RiseSinkPlatform__Class** type_info() {
            static app::RiseSinkPlatform__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RiseSinkPlatform__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RiseSinkPlatform__Class* get_class() {
            return il2cpp::get_class<app::RiseSinkPlatform__Class>(type_info(), "", "RiseSinkPlatform");
        }
        inline app::RiseSinkPlatform* create() {
            return il2cpp::create_object<app::RiseSinkPlatform>(get_class());
        }
    } // namespace RiseSinkPlatform
} // namespace app::classes::types
