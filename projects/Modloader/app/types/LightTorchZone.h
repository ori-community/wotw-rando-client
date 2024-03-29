#pragma once
#include <Modloader/app/structs/LightTorchZone.h>
#include <Modloader/app/structs/LightTorchZone__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LightTorchZone {
        inline app::LightTorchZone__Class** type_info() {
            static app::LightTorchZone__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LightTorchZone__Class**)(modloader::win::memory::resolve_rva(0x04707E68));
            }
            return cache;
        }
        inline app::LightTorchZone__Class* get_class() {
            return il2cpp::get_class<app::LightTorchZone__Class>(type_info(), "", "LightTorchZone");
        }
        inline app::LightTorchZone* create() {
            return il2cpp::create_object<app::LightTorchZone>(get_class());
        }
    } // namespace LightTorchZone
} // namespace app::classes::types
