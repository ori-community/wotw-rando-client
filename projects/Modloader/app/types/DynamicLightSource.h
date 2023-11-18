#pragma once
#include <Modloader/app/structs/DynamicLightSource.h>
#include <Modloader/app/structs/DynamicLightSource__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DynamicLightSource {
        inline app::DynamicLightSource__Class** type_info() {
            static app::DynamicLightSource__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DynamicLightSource__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DynamicLightSource__Class* get_class() {
            return il2cpp::get_class<app::DynamicLightSource__Class>(type_info(), "", "DynamicLightSource");
        }
        inline app::DynamicLightSource* create() {
            return il2cpp::create_object<app::DynamicLightSource>(get_class());
        }
    } // namespace DynamicLightSource
} // namespace app::classes::types
