#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LightTorchZone__Class.h>
#include <Modloader/app/structs/LightTorchZone.h>

namespace app::classes::types {
    namespace LightTorchZone {
        inline app::LightTorchZone__Class** type_info = (app::LightTorchZone__Class**)(modloader::win::memory::resolve_rva(0x04707E68));
        inline app::LightTorchZone__Class* get_class() {
            return il2cpp::get_class<app::LightTorchZone__Class>(type_info, "", "LightTorchZone");
        }
        inline app::LightTorchZone* create() {
            return il2cpp::create_object<app::LightTorchZone>(get_class());
        }
    } // namespace LightTorchZone
} // namespace app::classes::types
