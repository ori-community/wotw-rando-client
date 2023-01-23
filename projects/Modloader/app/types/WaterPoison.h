#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/WaterPoison__Class.h>
#include <Modloader/app/structs/WaterPoison.h>

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
