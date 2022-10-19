#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DisplayScaleSlider {
        inline app::DisplayScaleSlider__Class** type_info = (app::DisplayScaleSlider__Class**)(modloader::win::memory::resolve_rva(0x04798D68));
        inline app::DisplayScaleSlider__Class* get_class() {
            return il2cpp::get_class<app::DisplayScaleSlider__Class>(type_info, "", "DisplayScaleSlider");
        }
        inline app::DisplayScaleSlider* create() {
            return il2cpp::create_object<app::DisplayScaleSlider>(get_class());
        }
    } // namespace DisplayScaleSlider
} // namespace app::classes::types
