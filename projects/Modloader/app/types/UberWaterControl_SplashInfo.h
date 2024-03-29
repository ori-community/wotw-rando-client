#pragma once
#include <Modloader/app/structs/UberWaterControl_SplashInfo.h>
#include <Modloader/app/structs/UberWaterControl_SplashInfo__Array.h>
#include <Modloader/app/structs/UberWaterControl_SplashInfo__Boxed.h>
#include <Modloader/app/structs/UberWaterControl_SplashInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberWaterControl_SplashInfo {
        inline app::UberWaterControl_SplashInfo__Class** type_info() {
            static app::UberWaterControl_SplashInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UberWaterControl_SplashInfo__Class**)(modloader::win::memory::resolve_rva(0x04757798));
            }
            return cache;
        }
        inline app::UberWaterControl_SplashInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::UberWaterControl_SplashInfo__Class>(type_info(), "", "UberWaterControl", "SplashInfo");
        }
        inline app::UberWaterControl_SplashInfo* create() {
            return il2cpp::create_object<app::UberWaterControl_SplashInfo>(get_class());
        }
        inline app::UberWaterControl_SplashInfo__Boxed* box(app::UberWaterControl_SplashInfo value) {
            return il2cpp::box_value<app::UberWaterControl_SplashInfo__Boxed>(get_class(), value);
        }
        inline app::UberWaterControl_SplashInfo__Array* create_array(int size) {
            return il2cpp::array_new<app::UberWaterControl_SplashInfo__Array>(get_class(), size);
        }
        inline app::UberWaterControl_SplashInfo__Array* create_array(const std::vector<app::UberWaterControl_SplashInfo>& items) {
            return il2cpp::array_new<app::UberWaterControl_SplashInfo__Array>(get_class(), items);
        }
    } // namespace UberWaterControl_SplashInfo
} // namespace app::classes::types
