#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WaterSplashObject {
        namespace {
            app::WaterSplashObject__Class* type_info_ref = nullptr;
        }
        app::WaterSplashObject__Class** type_info = &type_info_ref;
        inline app::WaterSplashObject__Class* get_class() {
            return il2cpp::get_class<app::WaterSplashObject__Class>(type_info, "", "WaterSplashObject");
        }
        inline app::WaterSplashObject* create() {
            return il2cpp::create_object<app::WaterSplashObject>(get_class());
        }
    } // namespace WaterSplashObject
} // namespace app::classes::types
