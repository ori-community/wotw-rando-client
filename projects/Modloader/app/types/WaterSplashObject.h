#pragma once
#include <Modloader/app/structs/WaterSplashObject.h>
#include <Modloader/app/structs/WaterSplashObject__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WaterSplashObject {
        inline app::WaterSplashObject__Class** type_info() {
            static app::WaterSplashObject__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WaterSplashObject__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WaterSplashObject__Class* get_class() {
            return il2cpp::get_class<app::WaterSplashObject__Class>(type_info(), "", "WaterSplashObject");
        }
        inline app::WaterSplashObject* create() {
            return il2cpp::create_object<app::WaterSplashObject>(get_class());
        }
    } // namespace WaterSplashObject
} // namespace app::classes::types
