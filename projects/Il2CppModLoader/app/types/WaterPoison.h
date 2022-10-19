#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace WaterPoison {
        inline app::WaterPoison__Class** type_info = (app::WaterPoison__Class**)(modloader::win::memory::resolve_rva(0x04742078));
        inline app::WaterPoison__Class* get_class() {
            return il2cpp::get_class<app::WaterPoison__Class>(type_info, "", "WaterPoison");
        }
        inline app::WaterPoison* create() {
            return il2cpp::create_object<app::WaterPoison>(get_class());
        }
    } // namespace WaterPoison
} // namespace app::classes::types
