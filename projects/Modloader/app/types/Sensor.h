#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Sensor {
        inline app::Sensor__Class** type_info = (app::Sensor__Class**)(modloader::win::memory::resolve_rva(0x047630F8));
        inline app::Sensor__Class* get_class() {
            return il2cpp::get_class<app::Sensor__Class>(type_info, "Moon", "Sensor");
        }
        inline app::Sensor* create() {
            return il2cpp::create_object<app::Sensor>(get_class());
        }
    } // namespace Sensor
} // namespace app::classes::types
