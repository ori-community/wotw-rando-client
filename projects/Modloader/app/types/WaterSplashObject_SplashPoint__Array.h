#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace WaterSplashObject_SplashPoint__Array {
        inline app::WaterSplashObject_SplashPoint__Array__Class** type_info = (app::WaterSplashObject_SplashPoint__Array__Class**)(modloader::win::memory::resolve_rva(0x04733978));
        inline app::WaterSplashObject_SplashPoint__Array__Class* get_class() {
            return il2cpp::get_class<app::WaterSplashObject_SplashPoint__Array__Class>(type_info, "", "WaterSplashObject+SplashPoint[]");
        }
        inline app::WaterSplashObject_SplashPoint__Array* create() {
            return il2cpp::create_object<app::WaterSplashObject_SplashPoint__Array>(get_class());
        }
    } // namespace WaterSplashObject_SplashPoint__Array
} // namespace app::classes::types
