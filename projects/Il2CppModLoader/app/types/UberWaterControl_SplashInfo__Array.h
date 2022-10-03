#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberWaterControl_SplashInfo__Array {
        namespace {
            app::UberWaterControl_SplashInfo__Array__Class* type_info_ref = nullptr;
        }
        app::UberWaterControl_SplashInfo__Array__Class** type_info = &type_info_ref;
        inline app::UberWaterControl_SplashInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::UberWaterControl_SplashInfo__Array__Class>(type_info, "", "UberWaterControl+SplashInfo[]");
        }
        inline app::UberWaterControl_SplashInfo__Array* create() {
            return il2cpp::create_object<app::UberWaterControl_SplashInfo__Array>(get_class());
        }
    } // namespace UberWaterControl_SplashInfo__Array
} // namespace app::classes::types
