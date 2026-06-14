#pragma once
#include <Modloader/app/structs/DynamicCameraTargetting.h>
#include <Modloader/app/structs/DynamicCameraTargetting__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DynamicCameraTargetting {
        inline app::DynamicCameraTargetting__Class** type_info() {
            static app::DynamicCameraTargetting__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DynamicCameraTargetting__Class**)(modloader::win::memory::resolve_rva(0x04708260));
            }
            return cache;
        }
        inline app::DynamicCameraTargetting__Class* get_class() {
            return il2cpp::get_class<app::DynamicCameraTargetting__Class>(type_info(), "Moon", "DynamicCameraTargetting");
        }
        inline app::DynamicCameraTargetting* create() {
            return il2cpp::create_object<app::DynamicCameraTargetting>(get_class());
        }
    } // namespace DynamicCameraTargetting
} // namespace app::classes::types
