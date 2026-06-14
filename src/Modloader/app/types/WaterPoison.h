#pragma once
#include <Modloader/app/structs/WaterPoison.h>
#include <Modloader/app/structs/WaterPoison__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WaterPoison {
        inline app::WaterPoison__Class** type_info() {
            static app::WaterPoison__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::WaterPoison__Class**)(modloader::win::memory::resolve_rva(0x04742078));
            }
            return cache;
        }
        inline app::WaterPoison__Class* get_class() {
            return il2cpp::get_class<app::WaterPoison__Class>(type_info(), "", "WaterPoison");
        }
        inline app::WaterPoison* create() {
            return il2cpp::create_object<app::WaterPoison>(get_class());
        }
    } // namespace WaterPoison
} // namespace app::classes::types
