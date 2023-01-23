#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/WaterSplashObject_SplashPoint__Class.h>
#include <Modloader/app/structs/WaterSplashObject_SplashPoint.h>
#include <Modloader/app/structs/WaterSplashObject_SplashPoint__Array.h>

namespace app::classes::types {
    namespace WaterSplashObject_SplashPoint {
        inline app::WaterSplashObject_SplashPoint__Class** type_info = (app::WaterSplashObject_SplashPoint__Class**)(modloader::win::memory::resolve_rva(0x04725F58));
        inline app::WaterSplashObject_SplashPoint__Class* get_class() {
            return il2cpp::get_nested_class<app::WaterSplashObject_SplashPoint__Class>(type_info, "", "WaterSplashObject", "SplashPoint");
        }
        inline app::WaterSplashObject_SplashPoint* create() {
            return il2cpp::create_object<app::WaterSplashObject_SplashPoint>(get_class());
        }
        inline app::WaterSplashObject_SplashPoint__Array* create_array(int size) {
            return il2cpp::array_new<app::WaterSplashObject_SplashPoint__Array>(get_class(), size);
        }
        inline app::WaterSplashObject_SplashPoint__Array* create_array(const std::vector<app::WaterSplashObject_SplashPoint*>& items) {
            return il2cpp::array_new<app::WaterSplashObject_SplashPoint__Array>(get_class(), items);
        }
    } // namespace WaterSplashObject_SplashPoint
} // namespace app::classes::types
